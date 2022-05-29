% 删除数据字典中的全部参考轨迹
function [] = SLDD_all_reference_trajectory_delete(obj)
%   1.输入参数：
%       (1)obj    SLDDMANAGER类的一个实例
%   2.输出参数：无

%% 打开数据字典
dictionary_object = Simulink.data.dictionary.open(obj.SLDD_file_path);

%% 获取数据字典中的设计数据
design_data_object = getSection(dictionary_object, 'Design Data');

%% 删除数据字典中的既有轨迹
% 获取数据字典名称以合成提示语
[~, dictionary_name, ~] = fileparts(obj.SLDD_file_path);

% 删除轨迹簇实例
reference_trajectories_object = find(design_data_object, 'Name', 'ReferenceTrajectories');
if ~isempty(reference_trajectories_object)
    fprintf('***删除数据字典【%s】中的【%s】***\n', dictionary_name, ...
        reference_trajectories_object.Name);
    deleteEntry(reference_trajectories_object);    
end

% 删除轨迹簇配置总线
found_entries = find(design_data_object, '-regexp', 'Name', 'CONFIG_TRAJECTOR*');
if ~isempty(found_entries)
    for index = 1 : length(found_entries)
        fprintf('***删除数据字典【%s】中的【%s】***\n', dictionary_name, ...
            found_entries(index).Name);
        deleteEntry(found_entries(index));
    end
end

%% 保存并关闭数据字典
saveChanges(dictionary_object);
close(dictionary_object);

end
