% 从实时采集的数据记录文件中导入原始轨迹
function [] = Original_trajectory_import(obj)
%   1.输入参数：
%       (1)obj    REFERENCETRAJECTORYMANAGER类的一个实例
%   2.输出参数：无

%% 初始化
% 首尾插值间隙，m
head_tail_interpolate_gap = 0.01;

%% 从指定数据源接合原始轨迹
original_path = obj.Original_trajectory_joint;

%% 删除后退路点
original_path = Backward_way_point_delete(original_path);

%% 对参考路径掐头去尾
% 规避可能的密集、平滑性差的路点，以免影响曲率计算，也可用于裁剪闭合环线数据
original_path = original_path((1 + obj.path_head_drop_point_number) : (...
    end - obj.path_tail_drop_point_number), :);

%% 根据使能开关状态决定是否对原始参考路径执行首尾间插值形成闭合环线
if obj.head_tail_interpolate_enable
    original_path = Trajectory_head_tail_interpolate(original_path, ...
        head_tail_interpolate_gap);
end

%% 提取分段点地图
% 搜索区间代号出现变化的路点组成分段点地图
split_point_map = original_path(logical(diff(original_path(:, 4))), 1 : 2);

% 为分段点地图补充原始路径起点、终点坐标
split_point_map = [original_path(1, 1 : 2); split_point_map; original_path(end, 1 : 2)];

%% 通过数值方法算得曲率
original_curvature = Curvature_calculate(original_path(:, 1 : 3));

%% 计算路径累计长度
% 相邻两点间距
original_segment_length = zeros(size(original_path, 1), 1);

% 计算原始路径相邻两点的间距
original_segment_length(2 : end) = sqrt(diff(original_path(:, 1)).^2 + ...
    diff(original_path(:, 2)).^2);

% 原始路径路点到起点的累计距离
original_cumulative_length = cumsum(original_segment_length);

%% 创建原始参考轨迹数据存储表格
original_trajectory_table = table(original_path(:, 3), original_path(:, 1), ...
    original_path(:, 2), original_curvature, original_segment_length, ...
    original_cumulative_length, original_path(:, 5), original_path(:, 4), ...
    original_path(:, 6), original_path(:, 7), 'VariableNames', {'ENU_yaw_angle', ...
    'ENU_x', 'ENU_y', 'curvature', 'segment_length', 'cumulative_length', ...
    'tram_speed', 'segment_ID', 'vision_priority', 'GNSS_priority'});

%% 写入数据存储文件
% 拆分路径、文件、扩展名
[original_trajectory_file_path, original_trajectory_file, ...
    original_trajectory_file_extension] = fileparts(obj.original_trajectory_file_path);

% 删除可能存在的同名老文件
Existing_file_delete(original_trajectory_file_path, append(original_trajectory_file, ...
    original_trajectory_file_extension));

% 导出表格
writetable(original_trajectory_table, obj.original_trajectory_file_path);

%% 保存分段点地图
save(obj.split_point_map_file_path, 'split_point_map');

end
