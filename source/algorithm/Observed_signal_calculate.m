% 观察信号计算（以便评判参考轨迹导出处理的效果）
function [observed_signal_struct] = Observed_signal_calculate(...
    original_trajectory_table, processed_path, lateral_offset_threshold)
%   1.输入参数：
%       (1)original_trajectory_table    原始轨迹表格，必须包含以下列
%          ->ENU_x（m），ENU_y（m），ENU_yaw_angle（deg），cumulative_length（m）
%       (2)processed_path               处理后的路径，矩阵，至少包含前3列
%          ->第1列为x（m），第2列为y（m），第3列为横摆角（deg）
%       (3)lateral_offset_threshold     处理后的路径与原始路径横向偏差阈值，正实数，m
%   2.输出参数：
%       (1)observed_signal_struct       观察信号，结构体

%% 初始化
% 路点数量
original_path_point_number = height(original_trajectory_table);
processed_path_point_number = size(processed_path, 1);

% 位置、角度
processed_x = processed_path(:, 1);
processed_y = processed_path(:, 2);
processed_yaw_angle = processed_path(:, 3);

% 相邻两点角度偏差
original_delta_angle = zeros(original_path_point_number, 1);
processed_delta_angle = zeros(processed_path_point_number, 1);

% 相邻两点间距
processed_segment_length = zeros(processed_path_point_number, 1);

% 处理后的轨迹结构体
processed_trajectory.ENU_x = processed_x;
processed_trajectory.ENU_y = processed_y;
processed_trajectory.ENU_yaw_angle = processed_yaw_angle;
processed_trajectory.curvature = zeros(processed_path_point_number, 1);

% 原始路径与处理后的路径之间的横向偏差
near_lateral_offset = zeros(original_path_point_number, 1);
previous_closest_point_index = 0;

%% 计算原始路径相邻两点的角度偏差(取模调整到-180~180避免突变)
original_delta_angle(2 : end) = mod(diff(original_trajectory_table.(...
    'ENU_yaw_angle')) + 540, 360) - 180;

%% 计算处理后的路径相邻两点的角度偏差(取模调整到-180~180防止突变)与间距
processed_delta_angle(2 : end) = mod(diff(processed_yaw_angle) + 540, 360) - 180;
processed_segment_length(2 : end) = sqrt(diff(processed_x).^2 + diff(processed_y).^2);
processed_trajectory.segment_length = processed_segment_length;

%% 处理后的路径路点到起点的累计距离
processed_cumulative_length = cumsum(processed_segment_length);

%% 计算参考轨迹路点索引递增方向的相邻两点连线的向量方位角
original_orientation_angle = rad2deg(atan2(diff(original_trajectory_table.('ENU_y')), ...
    diff(original_trajectory_table.('ENU_x'))));
processed_orientation_angle = rad2deg(atan2(diff(processed_y), diff(processed_x)));

% 将向量方位角信号拼接成与轨迹路点数相同的长度,设定第一个点的角度与第二个点的角度保持一致
original_orientation_angle = [original_orientation_angle(1); original_orientation_angle];
processed_orientation_angle = [processed_orientation_angle(1); processed_orientation_angle];

%% 计算原始路径上每个点与处理后的路径的横向偏差
% 原始路径每个点到处理后的路径上最近点对应的索引
original_trajectory2processed_trajectory_closest_point_index = ...
    zeros(original_path_point_number, 1);

% 遍历原始路径搜索每个点到处理后的路径的最近点索引、横向偏差
for index = 1 : original_path_point_number
    % 获取原始路径上当前路点到处理后的路径的横向偏差
    [~, ~, ~, previous_closest_point_index, near_lateral_offset(index)] = ...
        Trajectory_closest_point_info_get_m(...
        original_trajectory_table.('ENU_yaw_angle')(index), ...
        original_trajectory_table.('ENU_x')(index), ...
        original_trajectory_table.('ENU_y')(index), processed_trajectory, ...
        previous_closest_point_index);
    
    % 获取原始路径上当前路点到处理后的路径的最近点索引
    original_trajectory2processed_trajectory_closest_point_index(index) = ...
        previous_closest_point_index;
end

%% 对齐原始路径的处理后路径路点到起点的累计距离
% 向量投影法确定原始路径起点与处理后路径起点的位置关系
[~, ~, projection_rate] = Vector_projection_get_closest_point_m(...
    original_trajectory_table.('ENU_x')(1), original_trajectory_table.('ENU_y')(1), ...
    processed_x(1), processed_y(1), processed_x(2), processed_y(2));

% 根据投影比例的符号确定2条路径的起点位置关系，对齐累计距离
if 0 < projection_rate
    % 原始起点在处理后起点的前进方向，处理后的累计距离减去原始起点距离最近的
    % 处理后路点对应的处理后路径路点到起点的累计距离
    aligned_cumulative_length = processed_cumulative_length - processed_cumulative_length(...
        original_trajectory2processed_trajectory_closest_point_index(1));
else
    % 原始起点在处理后起点的后退方向，处理后的累计距离加上处理后起点距离最近的
    % 原始路点对应的原始路径路点到起点的累计距离
    aligned_cumulative_length = processed_cumulative_length + ...
        original_trajectory_table.('cumulative_length')(dsearchn([...
        original_trajectory_table.('ENU_x'), ...
        original_trajectory_table.('ENU_y')], [processed_x(1), processed_y(1)]));
end

%% 计算原始路径与处理后的路径的最大横向偏差
max_lateral_offset = max(abs(near_lateral_offset));

%% 计算原始路径与处理后的路径的平均横向偏差
% 获取超过阈值的横向偏差序列
temp_lateral_offset = near_lateral_offset;
normal_offset_index = temp_lateral_offset(:) < lateral_offset_threshold;
temp_lateral_offset(normal_offset_index) = [];

% 如果没有超过阈值的路点，直接用原始横向偏差计算平均值，取绝对值以防正负抵消
if isempty(temp_lateral_offset)
    mean_near_lateral_offset = mean(abs(near_lateral_offset));

% 否则只用超过阈值的横向偏差计算平均值
else
    mean_near_lateral_offset = mean(abs(temp_lateral_offset));
end

%% 构建观察信号结构体输出
observed_signal_struct.('processed_x') = processed_x;
observed_signal_struct.('processed_y') = processed_y;
observed_signal_struct.('processed_yaw_angle') = processed_yaw_angle;
observed_signal_struct.('original_delta_angle') = original_delta_angle;
observed_signal_struct.('processed_delta_angle') = processed_delta_angle;
observed_signal_struct.('processed_segment_length') = processed_segment_length;
observed_signal_struct.('processed_cumulative_length') = processed_cumulative_length;
observed_signal_struct.('aligned_cumulative_length') = aligned_cumulative_length;
observed_signal_struct.('near_lateral_offset') = near_lateral_offset;
observed_signal_struct.('original_orientation_angle') = original_orientation_angle;
observed_signal_struct.('processed_orientation_angle') = processed_orientation_angle;
observed_signal_struct.('max_lateral_offset') = max_lateral_offset;
observed_signal_struct.('mean_near_lateral_offset') = mean_near_lateral_offset;

end
