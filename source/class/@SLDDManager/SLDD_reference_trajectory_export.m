% 导出数据字典中的既有参考轨迹
function [obj] = SLDD_reference_trajectory_export(obj)
%   1.输入参数：
%       (1)obj    SLDDMANAGER类的一个实例
%   2.输出参数：
%       (1)obj    SLDDMANAGER类的一个实例

%% 打开数据字典
dictionary_object = Simulink.data.dictionary.open(obj.SLDD_file_path);

%% 获取数据字典中的设计数据
design_data_object = getSection(dictionary_object, 'Design Data');

%% 获取数据字典内既有的参考轨迹信息
% 搜索参考轨迹簇实例
reference_trajectories_object = find(design_data_object, 'Name', 'ReferenceTrajectories');
if ~isempty(reference_trajectories_object)
    % 从设计数据中提取参考轨迹簇结构体
    reference_trajectories = getValue(reference_trajectories_object);
    
    % 获取结构体参考轨迹成员名称
    reference_trajectory_namelist = fieldnames(reference_trajectories);
    
    % 统计数据字典中参考轨迹条数
    reference_trajectory_number = length(reference_trajectory_namelist);
    
    % 数据字典管理器的参考轨迹簇属性初始化
    obj.reference_trajectory_cluster(reference_trajectory_number, 1) = ReferenceTrajectory;
    
    % 提示语
    [~, dictionary_name, ~] = fileparts(obj.SLDD_file_path);
    fprintf('$数据字典【%s】中的轨迹序列如下:\n', dictionary_name);
    
    % 获取所有参考轨迹的描述名称
    for index1 = 1 : reference_trajectory_number
        % 解析当前遍历到的轨迹索引
        trajectory_index_cell = regexp(reference_trajectory_namelist{index1}, '\d*', 'match');
        if isempty(trajectory_index_cell)
            close(dictionary_object);
            warning('***参考轨迹成员名称格式错误***');
            return;
        else
            trajectory_index = str2double(trajectory_index_cell{1});
        end
        
        % 获取当前索引对应的轨迹配置对象
        temp_trajectories_object = find(design_data_object, 'Name', ...
            sprintf('CONFIG_TRAJECTORY%d', trajectory_index));
        if ~isempty(temp_trajectories_object)
            % 数据字典中的参考轨迹簇成员
            temp_trajectories_bus = getValue(temp_trajectories_object);
                        
            % 更新轨迹簇中对应轨迹的描述名称
            obj.reference_trajectory_cluster(index1, 1).name = temp_trajectories_bus.Description;
            
            % 将参考轨迹簇实例中的各列属性拼接为表格
            trajectory_properties_namelist = fieldnames(reference_trajectories.(reference_trajectory_namelist{index1}));
            temp_table = table;
            for index2 = 1 : length(trajectory_properties_namelist)
                temp_table.(trajectory_properties_namelist{index2}) = ...
                    reference_trajectories.(reference_trajectory_namelist{...
                    index1}).(trajectory_properties_namelist{index2});
            end
            
            % 更新轨迹簇中对应轨迹的路点属性
            obj.reference_trajectory_cluster(index1, 1).way_point_properties = temp_table;
            
            % 提示载入的参考轨迹信息
            fprintf('%d - %s\n', index1, temp_trajectories_bus.Description);
        else
            close(dictionary_object);
            warning('***没有找到【%d号】参考轨迹配置信息***', index1);
            return;
        end
    end
else
    [~, dictionary_name, ~] = fileparts(obj.SLDD_file_path);
    fprintf('***数据字典【%s】内无参考轨迹***\n', dictionary_name);
end

%% 关闭数据字典
close(dictionary_object);

end
