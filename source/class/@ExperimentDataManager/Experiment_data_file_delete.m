% 删除试验数据相关文件
function [obj] = Experiment_data_file_delete(obj)
%   1.输入参数：
%       (1)obj    EXPERIMENTDATAMANAGER类的一个实例
%   2.输出参数：
%       (1)obj    EXPERIMENTDATAMANAGER类的一个实例

%% 初始化
% 试验数据存储目录
experiment_data_storage_directory = fullfile(pwd, '../data/experiment/storage/');

%% 读取既有试验数据配置文件
obj = obj.Experiment_data_config_XML_read;

%% 删除指定名称的试验数据存储文件夹及试验数据配置XML文件
specific_experiment_data_storage_directory = fullfile(...
    experiment_data_storage_directory, [obj.name]);
for index = 1 : length(specific_experiment_data_storage_directory)
    
    % 删除指定名称的试验数据存储文件夹
    if isfolder(specific_experiment_data_storage_directory(index))
        rmdir(specific_experiment_data_storage_directory(index), 's');
    end
    
    % 删除指定名称的试验数据配置XML文件
    if isfile(obj(index).experiment_data_config_XML_file_path)
        delete(obj(index).experiment_data_config_XML_file_path);
    end
    
    % 清空对应的成员属性内容
    obj(index).experiment_data_config_XML_file_path = "";
    obj(index).SDI_plot_config_file_path = "";
    obj(index).data_source_file_path = "";
    
end

%% 提示删除试验数据成功
fprintf('***成功删除试验数据【%s】***\n', obj.name);

end
