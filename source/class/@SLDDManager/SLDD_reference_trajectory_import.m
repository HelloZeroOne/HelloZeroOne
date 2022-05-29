% 将参考轨迹导入数据字典
function [obj] = SLDD_reference_trajectory_import(obj)
%   1.输入参数：
%       (1)obj    SLDDMANAGER类的一个实例
%   2.输出参数：
%       (1)obj    SLDDMANAGER类的一个实例

%% 参考轨迹簇为空时不执行导入数据字典操作
if isempty(obj.reference_trajectory_cluster)
    warning('***参考轨迹簇为空***');
    return;
end

%% 将数据字典管理器中的全部参考轨迹信息打印到数据字典配置专用m文件中
% 打开数据字典配置专用m文件
obj = obj.Open_data_import_file;

% 打印参考轨迹配置信息
obj.Reference_trajectory_bus_definition_print;

% 打印参考轨迹簇配置信息
obj.Reference_trajectory_cluster_bus_definition_print;

% 打印参考轨迹簇路点信息
obj.Reference_trajectory_cluster_way_point_print;

% 关闭数据字典配置专用m文件
fclose(obj.data_import_file_index);

%% 将数据字典配置专用m文件内容导入数据字典
% 打开数据字典
dictionary_object = Simulink.data.dictionary.open(obj.SLDD_file_path);

% 获取数据字典中的设计数据
design_data_object = getSection(dictionary_object, 'Design Data');

% 将数据字典配置专用m文件内容导入数据字典
importFromFile(design_data_object, obj.data_import_file_path, ...
    'existingVarsAction', 'overwrite');

% 保存并关闭数据字典
saveChanges(dictionary_object);
close(dictionary_object);

% 提示更新数据字典成功
[~, dictionary_name, ~] = fileparts(obj.SLDD_file_path);
fprintf('***更新数据字典【%s】的参考轨迹簇成功***\n', dictionary_name);

end
