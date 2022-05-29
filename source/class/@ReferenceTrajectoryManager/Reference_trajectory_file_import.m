% 导入参考轨迹相关文件
function [obj] = Reference_trajectory_file_import(obj, filenames)
%   1.输入参数：
%       (1)obj          REFERENCETRAJECTORYMANAGER类的一个实例
%       (2)filenames    参考轨迹压缩包解压后的所有文件的路径簇，1xN的cell，每个文件路径为字符数组
%   2.输出参数：
%       (1)obj          REFERENCETRAJECTORYMANAGER类的一个实例

%% 初始化
% 轨迹存储目录
trajectory_storage_directory = fullfile(pwd, '../data/trajectory/storage/');

% 轨迹配置文件目录
trajectory_config_directory = fullfile(pwd, '../data/trajectory/config_XML/');

%% 读取既有轨迹配置XML文件
obj = obj.Trajectory_config_XML_read;

%% 拼接轨迹相关文件名
mapping_file = append(obj.name, '_轨迹映射.xlsx');
original_trajectory_file = append(obj.name, '_原始轨迹.csv');
processed_trajectory_file = append(obj.name, '.csv');
split_point_map_file = append(obj.name, '_分段点地图.mat');

%% 解析轨迹管理相关文件路径
% 轨迹映射文件
mapping_file_cache_path = filenames{contains(filenames, mapping_file)};
if isempty(mapping_file_cache_path)
    warning('轨迹映射文件缺失！');
    return;
end

% 数据源文件
data_source_file_cache_path = filenames(contains(filenames, '_数据源文件'));
if isempty(data_source_file_cache_path)
    warning('数据源文件缺失！');
    return;
end

% 原始轨迹文件
original_trajectory_file_cache_path = filenames{contains(filenames, ...
    original_trajectory_file)};
if isempty(original_trajectory_file_cache_path)
    warning('原始轨迹文件缺失！');
    return;
end

% 处理后的轨迹文件
processed_trajectory_file_cache_path = filenames{contains(filenames, ...
    processed_trajectory_file)};
if isempty(processed_trajectory_file_cache_path)
    warning('处理后的轨迹文件缺失！');
    return;
end

% 分段点地图文件
split_point_map_file_cache_path = filenames{contains(filenames, ...
    split_point_map_file)};
if isempty(split_point_map_file_cache_path)
    warning('分段点地图文件缺失！');
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

%% 修改轨迹配置文件存储的文件路径为本机路径
obj.mapping_file_path = fullfile(...
    trajectory_storage_directory, obj.name, mapping_file);
obj.data_source_file_path = fullfile(...
    trajectory_storage_directory, obj.name, data_source_file(:));
obj.original_trajectory_file_path = fullfile(...
    trajectory_storage_directory, obj.name, original_trajectory_file);
obj.processed_trajectory_file_path = fullfile(...
    trajectory_storage_directory, obj.name, processed_trajectory_file);
obj.split_point_map_file_path = fullfile(...
    trajectory_storage_directory, obj.name, split_point_map_file);

%% 保存轨迹配置到XML文件
obj.Trajectory_config_XML_write;

%% 将轨迹相关文件移动到指定位置
% 轨迹配置XML文件
movefile(obj.trajectory_config_XML_file_path, fullfile(...
    trajectory_config_directory, append(obj.name, '.xml')));

% 轨迹映射文件
movefile(mapping_file_cache_path, obj.mapping_file_path);

% 数据源文件
for index = 1 : data_source_file_number
    movefile(data_source_file_cache_path{index}, obj.data_source_file_path(index));
end

% 原始轨迹文件
movefile(original_trajectory_file_cache_path, obj.original_trajectory_file_path);

% 处理后的轨迹文件
movefile(processed_trajectory_file_cache_path, obj.processed_trajectory_file_path);

% 分段点地图文件
movefile(split_point_map_file_cache_path, obj.split_point_map_file_path);

%% 提示导入参考轨迹成功
fprintf('***成功导入参考轨迹【%s】***\n', obj.name);

end
