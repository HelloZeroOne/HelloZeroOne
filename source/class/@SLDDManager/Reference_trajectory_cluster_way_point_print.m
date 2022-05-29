% 打印参考轨迹簇路点信息
function [] = Reference_trajectory_cluster_way_point_print(obj)
%   1.输入参数：
%       (1)obj    SLDDMANAGER类的一个实例
%   2.输出参数：无

% 结构体专属头部声明
bus_name = 'ReferenceTrajectories';
fprintf(obj.data_import_file_index, '%s = struct;\n', bus_name);

% 遍历参考轨迹簇以打印每条参考轨迹的每一对域、值
for index1 = 1 : size(obj.reference_trajectory_cluster, 1)
    % 合成轨迹名称
    trajectory_name = sprintf('trajectory%d', index1);
    
    % 获取参考轨迹路点属性名称序列
    properties_name_queue = obj.reference_trajectory_cluster(index1, ...
        1).way_point_properties.Properties.VariableNames;
    
    % 遍历路点属性以写入数据字典配置专用m文件中
    for index2 = 1 : length(properties_name_queue)
        fprintf(obj.data_import_file_index, '%s.%s.%s = [', bus_name, ...
            trajectory_name, properties_name_queue{index2});
        fprintf(obj.data_import_file_index, '%.9f; ', ...
            obj.reference_trajectory_cluster(index1, 1).way_point_properties.(...
            properties_name_queue{index2}));
        fprintf(obj.data_import_file_index, '];\n');
    end
end

% 换行分隔
fprintf(obj.data_import_file_index, '\n');

end
