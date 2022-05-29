% 导入试验数据相关文件
function [obj] = Experiment_data_file_import(obj, filenames)
%   1.输入参数：
%       (1)obj          EXPERIMENTDATAMANAGER类的一个实例
%       (2)filenames    试验数据压缩包解压后的所有文件的路径簇，1xN的cell，每个文件路径为字符数组
%   2.输出参数：
%       (1)obj          EXPERIMENTDATAMANAGER类的一个实例

%% 初始化
% 试验数据存储目录
experiment_data_storage_directory = fullfile(pwd, '../data/experiment/storage/');

% 试验数据配置管理目录
experiment_data_config_directory = fullfile(pwd, '../data/experiment/config_XML/');

%% 读取既有试验数据配置XML文件
obj = obj.Experiment_data_config_XML_read;

%% 拼接试验数据相关文件名
SDI_plot_config_file = append(obj.name, '_SDI绘图配置.xlsx');

%% 解析试验数据管理相关文件路径
% SDI绘图配置文件
SDI_plot_config_file_cache_path = filenames{contains(filenames, SDI_plot_config_file)};
if isempty(SDI_plot_config_file_cache_path)
    warning('SDI绘图配置文件缺失！');
    return;
end

% 数据源文件
data_source_file_cache_path = filenames(contains(filenames, '_数据源文件'));
if isempty(data_source_file_cache_path)
    warning('数据源文件缺失！');
    return;
end

%% 区分扩展名以拼接数据源文件名
% 统计数据源文件数量
data_source_file_number = length(data_source_file_cache_path);
if 1 > data_source_file_number
    error('未识别到有效的数据源文件！');
end

% 数据源文件名、扩展名初始化
data_source_file_name = strings(data_source_file_number, 1);
data_source_file_extension = strings(data_source_file_number, 1);

% 遍历数据源文件解析数据源文件名、扩展名
for index = 1 : data_source_file_number
    [~, data_source_file_name(index), data_source_file_extension(index)] = ...
        fileparts(data_source_file_cache_path{index});
end

% 拼接数据源文件名
data_source_file = append(data_source_file_name, data_source_file_extension);

%% 修改试验数据配置文件存储的文件路径为本机路径
obj.SDI_plot_config_file_path = fullfile(...
    experiment_data_storage_directory, obj.name, SDI_plot_config_file);
obj.data_source_file_path = fullfile(...
    experiment_data_storage_directory, obj.name, data_source_file(:));

%% 保存试验数据配置到XML文件
obj.Experiment_data_config_XML_write;

%% 将试验数据相关文件移动到指定位置
% 试验数据配置XML文件
movefile(obj.experiment_data_config_XML_file_path, fullfile(...
    experiment_data_config_directory, append(obj.name, '.xml')));

% SDI绘图配置文件
movefile(SDI_plot_config_file_cache_path, obj.SDI_plot_config_file_path);

% 数据源文件
for index = 1 : data_source_file_number
    movefile(data_source_file_cache_path{index}, obj.data_source_file_path(index));
end

%% 提示导入试验数据成功
fprintf('***成功导入试验数据【%s】***\n', obj.name);

end
