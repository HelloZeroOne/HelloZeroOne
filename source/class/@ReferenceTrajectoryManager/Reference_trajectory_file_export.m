% 导出参考轨迹相关文件
function [] = Reference_trajectory_file_export(obj)
%   1.输入参数：
%       (1)obj    REFERENCETRAJECTORYMANAGER类的一个实例
%   2.输出参数：无

%% 读取既有轨迹配置XML文件
obj = obj.Trajectory_config_XML_read;

%% 拼接希望导出到的目标ZIP压缩包文件名并附加时间戳
% 解析当天日期
date_string = regexp(string(datetime('today')), '-', 'split');

% 解析当前时间
current_time_string = regexp(datestr(now), '(-|\s|:)', 'split');

% 拼接希望导出到的目标ZIP压缩包文件名
ZIP_file_name = fullfile(append(date_string{1}, date_string{2}, date_string{3}, ...
    current_time_string{4}, current_time_string{5}, current_time_string{6}, ...
    '导出_', obj.name, '.zip'));

%% 将指定文件压缩打包输出
if isfile(obj.trajectory_config_XML_file_path) && ...
        isfile(obj.mapping_file_path) && all(isfile(obj.data_source_file_path)) && ...
        isfile(obj.original_trajectory_file_path) && ...
        isfile(obj.processed_trajectory_file_path) && ...
        isfile(obj.split_point_map_file_path)
    zip(ZIP_file_name, [obj.trajectory_config_XML_file_path, ...
        obj.mapping_file_path, obj.data_source_file_path{:}, ...
        obj.original_trajectory_file_path, obj.processed_trajectory_file_path, ...
        obj.split_point_map_file_path]);
else
    warning('所需参考轨迹相关文件残缺，打包失败！');
    return;
end

%% 提示导出参考轨迹成功
fprintf('***成功导出参考轨迹【%s】***\n', obj.name);
fprintf('***导出的目标压缩包位于【%s】***\n', fullfile(pwd, ZIP_file_name));

end
