% 导出试验数据相关文件
function [] = Experiment_data_file_export(obj)
%   1.输入参数：
%       (1)obj    EXPERIMENTDATAMANAGER类的一个实例
%   2.输出参数：无

%% 读取既有试验数据配置XML文件
obj = obj.Experiment_data_config_XML_read;

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
if isfile(obj.experiment_data_config_XML_file_path) && isfile(...
        obj.SDI_plot_config_file_path) && all(isfile(obj.data_source_file_path))
    zip(ZIP_file_name, [obj.experiment_data_config_XML_file_path, ...
        obj.SDI_plot_config_file_path, obj.data_source_file_path{:}]);
else
    warning('所需试验数据相关文件残缺，打包失败！');
    return;
end

%% 提示导出试验数据成功
fprintf('***成功导出试验数据【%s】***\n', obj.name);
fprintf('***导出的目标压缩包位于【%s】***\n', fullfile(pwd, ZIP_file_name));

end
