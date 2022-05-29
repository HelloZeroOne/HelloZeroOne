% 生成适配G300平台的参考轨迹文件
function [] = G300_reference_trajectory_file_generate(obj)
%   1.输入参数：
%       (1)obj    REFERENCETRAJECTORYMANAGER类的一个实例
%   2.输出参数：无

%% 读取既有轨迹配置XML文件
obj = obj.Trajectory_config_XML_read;

%% 构建参考轨迹路点属性表格
% 读取处理后的轨迹表格
processed_trajectory_table = readtable(obj.processed_trajectory_file_path, ...
    'PreserveVariableNames', true);

% 筛选信号组合成参考轨迹路点属性表格
reference_trajectory_way_point_table = processed_trajectory_table(:, {...
    'ENU_yaw_angle', 'ENU_x', 'ENU_y', 'curvature', 'cumulative_length', 'segment_ID'});

%% 构建参考轨迹区间属性表格
% 读取轨迹映射表格
trajectory_mapping_table = readtable(obj.mapping_file_path, ...
    'PreserveVariableNames', true);

% 筛选信号组合成参考轨迹区间属性表格
reference_trajectory_segment_table = trajectory_mapping_table(:, {...
    '区间代号', '视觉循迹优先级', 'GNSS循迹优先级'});

% 将表头信号名称改为英文名
reference_trajectory_segment_table.Properties.VariableNames = {...
    'segment_ID', 'vision_priority', 'GNSS_priority'};

%% 构建参考轨迹坐标系信息表格
reference_trajectory_grid_info_table = table(obj.grid_origin_latitude, ...
    obj.grid_origin_longitude, 'VariableNames', {'grid_origin_latitude', ...
    'grid_origin_longitude'});

%% 设置参考轨迹代号
trajectory_index = input('->请设置该参考轨迹在G300平台上的代号 [回车默认1]: ');
if isempty(trajectory_index) || 1 > trajectory_index
    trajectory_index = 1;
end

%% 合成csv数据存储文件名
reference_trajectory_way_point_file_name = append(...
    'reference_trajectory_way_point_file', num2str(trajectory_index), '.csv');
reference_trajectory_segment_file_name = append(...
    'reference_trajectory_segment_file', num2str(trajectory_index), '.csv');
reference_trajectory_grid_info_file_name = append(...
    'reference_trajectory_grid_info_file', num2str(trajectory_index), '.csv');

%% 写入csv数据存储文件
writetable(reference_trajectory_way_point_table, fullfile('cache/', ...
    reference_trajectory_way_point_file_name), 'WriteMode', 'overwrite');
writetable(reference_trajectory_segment_table, fullfile('cache/', ...
    reference_trajectory_segment_file_name), 'WriteMode', 'overwrite');
writetable(reference_trajectory_grid_info_table, fullfile('cache/', ...
    reference_trajectory_grid_info_file_name), 'WriteMode', 'overwrite');

%% 拼接希望导出到的目标ZIP压缩包文件名并附加时间戳
% 解析当天日期
date_string = regexp(string(datetime('today')), '-', 'split');

% 解析当前时间
current_time_string = regexp(datestr(now), '(-|\s|:)', 'split');

% 拼接希望导出到的目标ZIP压缩包文件名
ZIP_file_name = fullfile(append(date_string{1}, date_string{2}, date_string{3}, ...
    current_time_string{4}, current_time_string{5}, current_time_string{6}, ...
    '适配G300导出_', obj.name, '.zip'));

%% 将参考轨迹文件压缩打包输出
zip(ZIP_file_name, [string([pwd, '/cache/', reference_trajectory_way_point_file_name]), ...
    string([pwd, '/cache/', reference_trajectory_segment_file_name]), ...
    string([pwd, '/cache/', reference_trajectory_grid_info_file_name])]);

%% 删除cache文件夹下的原始数据
delete([pwd, '/cache/', reference_trajectory_way_point_file_name], ...
    [pwd, '/cache/', reference_trajectory_segment_file_name], ...
    [pwd, '/cache/', reference_trajectory_grid_info_file_name]);

%% 提示导出参考轨迹成功
fprintf('***成功导出适配G300平台参考轨迹【%s】***\n', obj.name);
fprintf('***导出的目标压缩包位于【%s】***\n', fullfile(pwd, ZIP_file_name));

end
