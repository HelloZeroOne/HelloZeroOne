% 更新试验数据源文件
function [obj] = Experiment_data_source_file_update(obj)
%   1.输入参数：
%       (1)obj    EXPERIMENTDATAMANAGER类的一个实例
%   2.输出参数：
%       (1)obj    EXPERIMENTDATAMANAGER类的一个实例

%% 初始化
% 试验数据存储目录
experiment_data_storage_directory = fullfile(pwd, '../data/experiment/storage/');

%% 选择保存的数据记录文件（可多选）
[selected_file_name, selected_file_path] = uigetfile({'*.xls', ...
    'TDS files (*.xls)'}, '请选择数据记录文件（可多选）', 'MultiSelect', 'on');
if isequal(0, selected_file_name)
    warning('未选择数据记录文件！');
    return;
end

% 合并路径与文件名得到原始数据源文件路径
original_data_source_file_path = string(fullfile(selected_file_path, ...
    selected_file_name));
obj.data_source_file_path = original_data_source_file_path;

%% 遍历原始数据源文件路径，备份文件
for index = 1 : length(original_data_source_file_path)
    
    % 拆分文件路径得到文件名、扩展名
    [~, ~, traverse_file_extension] = fileparts(original_data_source_file_path(index));
    
    % 按指定格式拼接数据源文件名
    temp_data_source_file_name = append(obj.name, '_数据源文件_', ...
        num2str(index), traverse_file_extension);
    
    % 更新数据源文件路径属性
    obj.data_source_file_path(index) = fullfile(experiment_data_storage_directory, ...
        obj.name, temp_data_source_file_name);
    
    % 复制文件到试验数据暂存目录下试验数据名称对应的文件夹中
    copyfile(original_data_source_file_path(index), obj.data_source_file_path(index));
    
end

end
