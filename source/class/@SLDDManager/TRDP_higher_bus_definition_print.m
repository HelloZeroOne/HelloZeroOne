% 打印TRDP高层总线定义信息
function [] = TRDP_higher_bus_definition_print(obj, bus_name, bus_comment, ...
    TRDP_process_data_list)
%   1.输入参数：
%       (1)obj                       SLDDMANAGER类的一个实例
%       (2)bus_name                  总线名称，字符串
%       (3)bus_comment               总线注释，字符串
%       (4)TRDP_process_data_list    TRDP过程数据清单，TRDPPROCESSDATA类
%   2.输出参数：无

% 根据数据字典固定格式打印TRDP高层总线定义信息
fprintf(obj.data_import_file_index, '%s = Simulink.Bus;\n', bus_name);
fprintf(obj.data_import_file_index, '%s.Description = ''%s'';\n', bus_name, bus_comment);
fprintf(obj.data_import_file_index, '%s.DataScope = ''Auto'';\n', bus_name);
fprintf(obj.data_import_file_index, '%s.HeaderFile = '''';\n', bus_name);
fprintf(obj.data_import_file_index, '%s.Alignment = -1;\n', bus_name);

for index = 1 : size(TRDP_process_data_list, 1)
    
    % 合成区分牵引端的TRDP过程数据名称，剔除掉MC1或者MC2的后缀
    splited_name = regexp(TRDP_process_data_list(index, 1).name, '_', 'split');
    TRDP_process_data_name = sprintf('MC%d_%s', obj.TRDP_manager.carriage_index, ...
        strjoin(setdiff(splited_name(2 : end), {'MC1', 'MC2'}), '_'));
    
    % 继续根据数据字典固定格式打印信息
    fprintf(obj.data_import_file_index, ...
        'saveVarsTmp{1}(%d, 1) = Simulink.BusElement;\n', index);
    fprintf(obj.data_import_file_index, ...
        'saveVarsTmp{1}(%d, 1).Name = ''%s_bus'';\n', index, TRDP_process_data_name);
    fprintf(obj.data_import_file_index, ...
        'saveVarsTmp{1}(%d, 1).Complexity = ''real'';\n', index);
    fprintf(obj.data_import_file_index, ...
        'saveVarsTmp{1}(%d, 1).Dimensions = 1;\n', index);
    fprintf(obj.data_import_file_index, ...
        'saveVarsTmp{1}(%d, 1).DataType = ''Bus: %s'';\n', index, TRDP_process_data_name);
    fprintf(obj.data_import_file_index, 'saveVarsTmp{1}(%d, 1).Min = [];\n', index);
    fprintf(obj.data_import_file_index, 'saveVarsTmp{1}(%d, 1).Max = [];\n', index);
    fprintf(obj.data_import_file_index, ...
        'saveVarsTmp{1}(%d, 1).DimensionsMode = ''Fixed'';\n', index);
    fprintf(obj.data_import_file_index, ...
        'saveVarsTmp{1}(%d, 1).SamplingMode = ''Sample based'';\n', index);
    fprintf(obj.data_import_file_index, 'saveVarsTmp{1}(%d, 1).DocUnits = '''';\n', index);
    fprintf(obj.data_import_file_index, ...
        'saveVarsTmp{1}(%d, 1).Description = ''%s'';\n', index, TRDP_process_data_name);
    
end

fprintf(obj.data_import_file_index, '%s.Elements = saveVarsTmp{1};\n', bus_name);
fprintf(obj.data_import_file_index, 'clear saveVarsTmp;\n\n');

end
