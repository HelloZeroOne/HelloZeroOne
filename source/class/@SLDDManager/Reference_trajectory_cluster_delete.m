% 删除参考轨迹簇中的轨迹
function [obj] = Reference_trajectory_cluster_delete(obj)
%   1.输入参数：
%       (1)obj    SLDDMANAGER类的一个实例
%   2.输出参数：
%       (1)obj    SLDDMANAGER类的一个实例

% 需要删除的轨迹索引（多条轨迹采用下划线_连接，输入all代表全部删除）
input_info = input(['->请输入参考轨迹簇中需要删除的轨迹索引', ...
    '（多条轨迹采用下划线_连接，输入all代表全部删除） [回车默认不删除]: '], 's');
if isempty(input_info)
    input_info = "0";
end

% 如果输入了all，则删除全部参考轨迹
if isequal("all", input_info)
    obj.reference_trajectory_cluster = ReferenceTrajectory.empty;
else
    % 将待删除轨迹索引分割为索引集
    delete_trajectory_index_array = str2double(regexp(input_info, '_', 'split'));
    
    % 提取需要保留的轨迹索引
    remained_trajectory_index_array = setdiff(1 : size(...
        obj.reference_trajectory_cluster, 1), delete_trajectory_index_array);
    
    % 索引集中不含0时，删除指定的参考轨迹簇中的轨迹
    if ~ismember(0, delete_trajectory_index_array)
        obj.reference_trajectory_cluster = obj.reference_trajectory_cluster(...
            remained_trajectory_index_array, 1);
    end
end

end
