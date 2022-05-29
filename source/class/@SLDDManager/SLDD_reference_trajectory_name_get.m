% 获取数据字典中的指定参考轨迹名称
function [reference_trajectory_name] = SLDD_reference_trajectory_name_get(...
    obj, desired_trajectory_index)
%   1.输入参数：
%       (1)obj                          SLDDMANAGER类的一个实例
%       (2)desired_trajectory_index     期望轨迹索引，正整数
%   2.输出参数：无
%       (1)reference_trajectory_name    参考轨迹名称，字符串

%% 打开数据字典
dictionary_object = Simulink.data.dictionary.open(obj.SLDD_file_path);

%% 获取数据字典中的设计数据
design_data_object = getSection(dictionary_object, 'Design Data');

%% 读取期望轨迹索引对应的数据字典中参考轨迹名称
% 获取索引对应的轨迹对象
reference_trajectories_object = find(design_data_object, 'Name', ...
    sprintf('CONFIG_TRAJECTORY%d', desired_trajectory_index));

% 判断轨迹对象有效性，提取轨迹名称
if ~isempty(reference_trajectories_object)
    reference_trajectories_bus = getValue(reference_trajectories_object);
    reference_trajectory_name = reference_trajectories_bus.Description;
else
    reference_trajectory_name = "";
    warning('***数据字典中没有找到【%d号】参考轨迹信息***', desired_trajectory_index);
end
    
%% 关闭数据字典
close(dictionary_object);

end
