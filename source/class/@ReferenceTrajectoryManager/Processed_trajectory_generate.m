% 从原始轨迹生成处理后的轨迹
function [] = Processed_trajectory_generate(obj)
%   1.输入参数：
%       (1)obj    REFERENCETRAJECTORYMANAGER类的一个实例
%   2.输出参数：无

%% 初始化
% 绘图模板文件
plot_template_file = 'Plot_config_processed_trajectory_generate.xlsx';

% 分段点地图
load(obj.split_point_map_file_path, 'split_point_map');

% 处理后的路径与原始路径横向偏差阈值，m
lateral_offset_threshold = 0.15;

% 分段采样固定间隔，m
segment_sample_fixed_gap = 0.2;

% 曲率滑动平均窗口宽度
curvature_move_mean_width = 3450;

%% 解析轨迹映射生成文件
% 读取轨迹生成模板表格
trajectory_generate_template_table = readtable(obj.mapping_file_path, ...
    'PreserveVariableNames', true);

%% 解析原始轨迹
% 读取原始轨迹表格
original_trajectory_table = readtable(obj.original_trajectory_file_path, ...
    'PreserveVariableNames', true);

% 构建原始路径矩阵
original_path = [original_trajectory_table.('ENU_x'), original_trajectory_table.('ENU_y'), ...
    original_trajectory_table.('ENU_yaw_angle'), original_trajectory_table.('segment_ID'), ...
    original_trajectory_table.('vision_priority'), original_trajectory_table.('GNSS_priority')];

%% 路径分段、平滑、插值预处理
processed_path = Path_preprocess(original_path, segment_sample_fixed_gap, ...
    trajectory_generate_template_table);

%% 调整横摆角取值范围
% 将横摆角取模调整取值范围到-180~180范围内，与G300平台通信取值范围相匹配，避免数值被篡改
processed_path(:, 3) = mod(processed_path(:, 3) + 540, 360) - 180;

%% 构建路点曲率
% 通过数值方法算得曲率
numerical_curvature = Curvature_calculate(processed_path);

% 滑动平均
processed_curvature = movmean(numerical_curvature, curvature_move_mean_width);

%% 按照每个区间设定的相邻两点间距对处理后的路点进行稀疏化
% 将曲率信号合并到路径矩阵中
mixed_path = [processed_path, numerical_curvature, processed_curvature];

% 路径稀疏化
sparsed_path = Path_sparse(mixed_path, trajectory_generate_template_table);

% 拆分路径矩阵
processed_path = sparsed_path(:, 1 : end - 2);
numerical_curvature = sparsed_path(:, end - 1);
processed_curvature = sparsed_path(:, end);

%% 计算观察量以便评判处理效果
% 集中计算
observed_signal_struct = Observed_signal_calculate(original_trajectory_table, ...
    processed_path, lateral_offset_threshold);

% 为观察信号结构体补充其他相关信号子域
observed_signal_struct.('x') = original_trajectory_table.('ENU_x');
observed_signal_struct.('y') = original_trajectory_table.('ENU_y');
observed_signal_struct.('yaw_angle') = mod(...
    original_trajectory_table.('ENU_yaw_angle') + 540, 360) - 180;
observed_signal_struct.('original_segment_length') = ...
    original_trajectory_table.('segment_length');
observed_signal_struct.('original_cumulative_length') = ...
    original_trajectory_table.('cumulative_length');
observed_signal_struct.('tram_speed') = original_trajectory_table.('tram_speed');
observed_signal_struct.('original_curvature') = original_trajectory_table.('curvature');
observed_signal_struct.('numerical_curvature') = numerical_curvature;
observed_signal_struct.('processed_curvature') = processed_curvature;
observed_signal_struct.('split_point_x') = split_point_map(:, 1);
observed_signal_struct.('split_point_y') = split_point_map(:, 2);

%% 创建处理后的参考轨迹数据存储表格
processed_trajectory_table = table(processed_path(:, 3), ...
    processed_path(:, 1), processed_path(:, 2), processed_curvature, ...
    observed_signal_struct.processed_segment_length, ...
    observed_signal_struct.processed_cumulative_length, processed_path(:, 4), ...
    processed_path(:, 5), processed_path(:, 6), 'VariableNames', {...
    'ENU_yaw_angle', 'ENU_x', 'ENU_y', 'curvature', 'segment_length', ...
    'cumulative_length', 'segment_ID', 'vision_priority', 'GNSS_priority'});

%% 写入数据存储文件
% 拆分路径、文件、扩展名
[processed_trajectory_file_path, processed_trajectory_file, ...
    processed_trajectory_file_extension] = fileparts(...
    obj.processed_trajectory_file_path);

% 删除可能存在的同名老文件
Existing_file_delete(processed_trajectory_file_path, append(processed_trajectory_file, ...
    processed_trajectory_file_extension));

% 导出表格
writetable(processed_trajectory_table, obj.processed_trajectory_file_path);

%% 提示参考路径预处理效果
% 提示原始路径与处理后的路径的横向偏差数据
fprintf('***平均横向偏差：%f***\n***最大横向偏差：%f***\n', ...
    observed_signal_struct.mean_near_lateral_offset, ...
    observed_signal_struct.max_lateral_offset);

% 最大横向偏差大于阈值则不满足要求
if lateral_offset_threshold < observed_signal_struct.max_lateral_offset
    warning('***参考路径预处理【不满足】要求（横向偏差超过阈值）***');
else
    disp('***参考路径预处理【满足】要求***');
end

%% 绘图查看路径
% 拼接轨迹名称
trajectory_name = append('\fontname{宋体}', obj.name);

% 观察信号结构体转化成绘图数据源表格(为了将长度不规则的信号用NaN补齐)
data_source_table = Irregular_struct2table(observed_signal_struct);

% 读取绘图模板表格
plot_template_table = readtable(plot_template_file, 'PreserveVariableNames', true);

% 模板化绘图
Template_plot(data_source_table, plot_template_table, 'TitleName', trajectory_name);

% 插入导出轨迹图像辅助信息
Auxiliary_info_of_exported_trajectory_insert2figure(original_path, ...
    observed_signal_struct.original_cumulative_length, split_point_map, ...
    trajectory_generate_template_table);

end
