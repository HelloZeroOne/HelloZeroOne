% 分析车辆实际行驶轨迹与原始参考轨迹的区别
function [obj] = Template_2_analyze(obj)
%   1.输入参数：
%       (1)obj    DATAANALYZER类的一个实例
%   2.输出参数：
%       (1)obj    DATAANALYZER类的一个实例

%% 初始化
% 处理后的路径与原始路径横向偏差阈值，正实数，m
lateral_offset_threshold = 0.5;

% 绘图模板文件
plot_template_file = 'Plot_config_template_2_analyze.xlsx';

% 如果曲率超过正常范围，说明数据源是G300平台DR300记录文件，需要乘以10~-4的系数换算成实际值
if 1 < abs(max(obj.data_collection.('closest_point_curvature')))
    obj.data_collection.('closest_point_curvature') = ...
        obj.data_collection.('closest_point_curvature') * 1e-4;
end

%% 获取数据集关联的参考轨迹
obj = obj.Reference_trajectory_name_get;
obj = obj.Reference_trajectory_manager_initialize;
obj = obj.Reference_trajectory_get;
fprintf('$原始参考轨迹：%s\n', obj.reference_trajectory_name);

% 载入分段点地图
load(obj.reference_trajectory_manager.split_point_map_file_path, 'split_point_map');

%% 为调用既有观察信号计算函数，将车辆实际行驶轨迹作为原始轨迹构建表格
original_trajectory_table = table();
original_trajectory_table.('ENU_x') = obj.data_collection.('ENU_x');
original_trajectory_table.('ENU_y') = obj.data_collection.('ENU_y');
original_trajectory_table.('ENU_yaw_angle') = obj.data_collection.('ENU_yaw_angle');

% 计算原始轨迹相邻两点的间距
segment_length = zeros(height(obj.data_collection), 1);
segment_length(2 : end) = sqrt(diff(obj.data_collection.('ENU_x')).^2 + ...
    diff(obj.data_collection.('ENU_y')).^2);

% 原始轨迹路点到起点的累计距离
original_trajectory_table.('cumulative_length') = cumsum(segment_length);

%% 为调用既有观察信号计算函数，将原始参考轨迹作为处理后的轨迹构建矩阵
processed_path = [obj.reference_trajectory.way_point_properties.('ENU_x'), ...
    obj.reference_trajectory.way_point_properties.('ENU_y'), ...
    obj.reference_trajectory.way_point_properties.('ENU_yaw_angle')];

%% 计算观察信号
observed_signal_struct = Observed_signal_calculate(...
    original_trajectory_table, processed_path, lateral_offset_threshold);

% 为观察信号结构体补充其他相关信号子域
observed_signal_struct.('split_point_x') = split_point_map(:, 1);
observed_signal_struct.('split_point_y') = split_point_map(:, 2);
observed_signal_struct.('x') = original_trajectory_table.('ENU_x');
observed_signal_struct.('y') = original_trajectory_table.('ENU_y');
observed_signal_struct.('yaw_angle') = ...
    mod(original_trajectory_table.('ENU_yaw_angle') + 540, 360) - 180;
observed_signal_struct.('vehicle_running_segment_length') = segment_length;
observed_signal_struct.('vehicle_running_cumulative_length') = ...
    original_trajectory_table.('cumulative_length');
observed_signal_struct.('tram_speed') = obj.data_collection.('tram_speed');
observed_signal_struct.('interpolate_curvature') = ...
    obj.data_collection.('closest_point_curvature');
observed_signal_struct.('original_trajectory_curvature') = ...
    obj.reference_trajectory.way_point_properties.('curvature');
observed_signal_struct.('IDS_work_status') = obj.data_collection.('IDS_work_status');

%% 绘图查看路径
% 拼接轨迹名称
trajectory_name = append('\fontname{宋体}原始参考轨迹:', obj.reference_trajectory_name);

% 观察信号结构体转化成绘图数据源表格(为了将长度不规则的信号用NaN补齐)
data_source_table = Irregular_struct2table(observed_signal_struct);

% 读取绘图模板表格
plot_template_table = readtable(plot_template_file, 'PreserveVariableNames', true);

% 模板化绘图
Template_plot(data_source_table, plot_template_table, 'TitleName', trajectory_name);

end
