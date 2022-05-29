% 删除参考轨迹相关文件
function [obj] = Reference_trajectory_file_delete(obj)
%   1.输入参数：
%       (1)obj    REFERENCETRAJECTORYMANAGER类的一个实例
%   2.输出参数：
%       (1)obj    REFERENCETRAJECTORYMANAGER类的一个实例

%% 初始化
% 轨迹存储目录
trajectory_storage_directory = fullfile(pwd, '../data/trajectory/storage/');

%% 读取既有轨迹配置文件
obj = obj.Trajectory_config_XML_read;

%% 删除指定名称的轨迹存储文件夹及轨迹配置XML文件
specific_trajectory_storage_directory = fullfile(...
    trajectory_storage_directory, [obj.name]);
for index = 1 : length(specific_trajectory_storage_directory)
    
    % 删除指定名称的轨迹存储文件夹
    if isfolder(specific_trajectory_storage_directory(index))
        rmdir(specific_trajectory_storage_directory(index), 's');
    end
    
    % 删除指定名称的轨迹配置XML文件
    if isfile(obj(index).trajectory_config_XML_file_path)
        delete(obj(index).trajectory_config_XML_file_path);
    end
    
    % 清空对应的成员属性内容
    obj(index).trajectory_config_XML_file_path = "";
    obj(index).data_source_file_path = "";
    obj(index).mapping_file_path = "";
    obj(index).original_trajectory_file_path = "";
    obj(index).processed_trajectory_file_path = "";
    obj(index).split_point_map_file_path = "";
    
end

%% 提示删除参考轨迹成功
fprintf('***成功删除参考轨迹【%s】***\n', obj.name);

end
