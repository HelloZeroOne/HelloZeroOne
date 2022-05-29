% 轨迹首尾间插值（以形成闭合环线）
function [cycle_path] = Trajectory_head_tail_interpolate(original_path, head_tail_interpolate_gap)
%   1.输入参数：
%       (1)original_path                原始路径，至少n×3的矩阵，可增加其他属性列
%          ->第一列为x(m)，第二列为y(m)，第三列为横摆角(deg)
%       (2)head_tail_interpolate_gap    首尾插值间隙，正实数，m
%   2.输出参数：
%       (1)cycle_path                   首尾闭合的环线路径，至少n×3的矩阵，与输入路径格式一致
%          ->第一列为x(m)，第二列为y(m)，第三列为横摆角(deg)

%% 初始化
x = original_path(:, 1);
y = original_path(:, 2);

% 为了防止首尾横摆角数值相差过大，将横摆角对360取模
yaw_angle = mod(original_path(:, 3), 360);

% 头尾间隔长度
head_tail_gap_length = norm([x(end), y(end)] - [x(1), y(1)]);

% 从尾向头定义一个只有2点的路径
head_tail_gap_path = [x(end), y(end), yaw_angle(end); ...
    x(1), y(1), yaw_angle(1)];

% 构建头尾间隔长度序列，在插值过程中充当自变量的作用
gap_delta_s = [0; head_tail_gap_length];

%% 首尾间平滑插值
interpolated_s = 0 : head_tail_interpolate_gap : head_tail_gap_length;
interpolated_gap_path = interp1(gap_delta_s, head_tail_gap_path, interpolated_s, 'spline');

% 按照原始路径尾端两点间隔稀疏化
original_tail_segment_length = norm([x(end), y(end)] - [x(end - 1), y(end - 1)]);
delta_point_number = round(original_tail_segment_length / head_tail_interpolate_gap);

% 补到原始路径末尾，舍弃掉插值后的第一个点，因为它和原始路径最后一个点重合
cycle_path = [original_path(:, 1 : 3); interpolated_gap_path(2 : delta_point_number : end, :)];

%% 为环线路径补充其他属性
% 统计原始路径列数
original_path_columns = size(original_path, 2);

% 如果原始路径列数大于3，需要补齐环线路径的属性
if 3 < original_path_columns
    % 将原始路径大于3列的属性补到环线路径的对应位置
    cycle_path(:, 4 : original_path_columns) = zeros(size(cycle_path, 1), ...
        original_path_columns - 3);
    cycle_path(1 : size(original_path, 1), 4 : original_path_columns) = ...
        original_path(:, 4 : original_path_columns);
    
    % 用原始路径最后一个点的属性值补齐插值得到的新路点的对应位置
    cycle_path(size(original_path, 1) + 1 : end, 4 : original_path_columns) = ...
        repmat(original_path(end, 4 : original_path_columns), ...
        size(cycle_path, 1) - size(original_path, 1), 1);
end

end
