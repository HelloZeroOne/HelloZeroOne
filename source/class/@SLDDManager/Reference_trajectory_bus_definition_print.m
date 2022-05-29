% 打印参考轨迹总线定义
function [] = Reference_trajectory_bus_definition_print(obj)
%   1.输入参数：
%       (1)obj    SLDDMANAGER类的一个实例
%   2.输出参数：无

% 遍历参考轨迹簇
for index1 = 1 : size(obj.reference_trajectory_cluster, 1)
    % 获取表头名称
    namelist = obj.reference_trajectory_cluster(index1, ...
        1).way_point_properties.Properties.VariableNames;
    
    % 合成参考轨迹配置总线名称
    bus_name = sprintf('CONFIG_TRAJECTORY%d', index1);
    
    % 按数据字典预设格式打印参考轨迹总线定义信息
    fprintf(obj.data_import_file_index, '%s = Simulink.Bus;\n', bus_name);
    fprintf(obj.data_import_file_index, '%s.Description = ''%s'';\n', bus_name, ...
        obj.reference_trajectory_cluster(index1, 1).name);
    fprintf(obj.data_import_file_index, '%s.DataScope = ''Auto'';\n', bus_name);
    fprintf(obj.data_import_file_index, '%s.HeaderFile = '''';\n', bus_name);
    fprintf(obj.data_import_file_index, '%s.Alignment = -1;\n', bus_name);
    for index2 = 1 : length(namelist)
        fprintf(obj.data_import_file_index, ...
            'saveVarsTmp{1}(%d, 1) = Simulink.BusElement;\n', index2);
        fprintf(obj.data_import_file_index, ...
            'saveVarsTmp{1}(%d, 1).Name = ''%s'';\n', index2, namelist{index2});
        fprintf(obj.data_import_file_index, ...
            'saveVarsTmp{1}(%d, 1).Complexity = ''real'';\n', index2);
        fprintf(obj.data_import_file_index, ...
            'saveVarsTmp{1}(%d, 1).Dimensions = [%d 1];\n', index2, height(...
            obj.reference_trajectory_cluster(index1, 1).way_point_properties));
        fprintf(obj.data_import_file_index, ...
            'saveVarsTmp{1}(%d, 1).DataType = ''double'';\n', index2);
        fprintf(obj.data_import_file_index, ...
            'saveVarsTmp{1}(%d, 1).Min = [];\n', index2);
        fprintf(obj.data_import_file_index, ...
            'saveVarsTmp{1}(%d, 1).Max = [];\n', index2);
        fprintf(obj.data_import_file_index, ...
            'saveVarsTmp{1}(%d, 1).DimensionsMode = ''Fixed'';\n', index2);
        fprintf(obj.data_import_file_index, ...
            'saveVarsTmp{1}(%d, 1).SamplingMode = ''Sample based'';\n', index2);
        fprintf(obj.data_import_file_index, ...
            'saveVarsTmp{1}(%d, 1).DocUnits = '''';\n', index2);
        fprintf(obj.data_import_file_index, ...
            'saveVarsTmp{1}(%d, 1).Description = ''%s'';\n', index2, namelist{index2});
    end
    fprintf(obj.data_import_file_index, ...
        '%s.Elements = saveVarsTmp{1};\n', bus_name);
    fprintf(obj.data_import_file_index, 'clear saveVarsTmp;\n\n');
end

end
