% 打印参考轨迹簇总线定义
function [] = Reference_trajectory_cluster_bus_definition_print(obj)
%   1.输入参数：
%       (1)obj    SLDDMANAGER类的一个实例
%   2.输出参数：无

%% 初始化
% 定义参考轨迹簇总线名称
bus_name = 'CONFIG_TRAJECTORIES';

% 定义参考轨迹簇总线描述
bus_comment = '参考轨迹簇';

%% 按数据字典预设格式打印参考轨迹簇总线定义信息
fprintf(obj.data_import_file_index, '%s = Simulink.Bus;\n', bus_name);
fprintf(obj.data_import_file_index, '%s.Description = ''%s'';\n', bus_name, bus_comment);
fprintf(obj.data_import_file_index, '%s.DataScope = ''Auto'';\n', bus_name);
fprintf(obj.data_import_file_index, '%s.HeaderFile = '''';\n', bus_name);
fprintf(obj.data_import_file_index, '%s.Alignment = -1;\n', bus_name);

% 遍历参考轨迹簇以打印每条参考轨迹的相关信息
for index = 1 : size(obj.reference_trajectory_cluster, 1)
    % 合成轨迹名称
    trajectory_name = sprintf('trajectory%d', index);
    
    % 合成总线类型
    bus_type = sprintf('CONFIG_TRAJECTORY%d', index);
    
    % 按数据字典预设格式打印信息
    fprintf(obj.data_import_file_index, ...
        'saveVarsTmp{1}(%d, 1) = Simulink.BusElement;\n', index);
    fprintf(obj.data_import_file_index, ...
        'saveVarsTmp{1}(%d, 1).Name = ''%s'';\n', index, trajectory_name);
    fprintf(obj.data_import_file_index, ...
        'saveVarsTmp{1}(%d, 1).Complexity = ''real'';\n', index);
    fprintf(obj.data_import_file_index, ...
        'saveVarsTmp{1}(%d, 1).Dimensions = 1;\n', index);
    fprintf(obj.data_import_file_index, ...
        'saveVarsTmp{1}(%d, 1).DataType = ''Bus: %s'';\n', index, bus_type);
    fprintf(obj.data_import_file_index, ...
        'saveVarsTmp{1}(%d, 1).Min = [];\n', index);
    fprintf(obj.data_import_file_index, ...
        'saveVarsTmp{1}(%d, 1).Max = [];\n', index);
    fprintf(obj.data_import_file_index, ...
        'saveVarsTmp{1}(%d, 1).DimensionsMode = ''Fixed'';\n', index);
    fprintf(obj.data_import_file_index, ...
        'saveVarsTmp{1}(%d, 1).SamplingMode = ''Sample based'';\n', index);
    fprintf(obj.data_import_file_index, ...
        'saveVarsTmp{1}(%d, 1).DocUnits = '''';\n', index);
    fprintf(obj.data_import_file_index, ...
        'saveVarsTmp{1}(%d, 1).Description = ''%s'';\n', index, ...
        obj.reference_trajectory_cluster(index, 1).name);
end
fprintf(obj.data_import_file_index, '%s.Elements = saveVarsTmp{1};\n', bus_name);
fprintf(obj.data_import_file_index, 'clear saveVarsTmp;\n\n');

end
