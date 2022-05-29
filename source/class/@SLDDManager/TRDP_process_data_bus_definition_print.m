% 打印TRDP过程数据总线定义信息
function [] = TRDP_process_data_bus_definition_print(obj, TRDP_process_data_list)
%   1.输入参数：
%       (1)obj                       SLDDMANAGER类的一个实例
%       (2)TRDP_process_data_list    TRDP过程数据清单，TRDPPROCESSDATA类
%   2.输出参数：无

% 统计TRDP过程数据清单条目数量
TRDP_process_data_number = size(TRDP_process_data_list, 1);

% 遍历TRDP过程数据清单，根据数据字典固定格式打印TRDP过程数据总线定义信息
for index1 = 1 : TRDP_process_data_number
    
    % 合成区分牵引端的TRDP过程数据名称，剔除掉MC1或者MC2的后缀
    splited_name = regexp(TRDP_process_data_list(index1, 1).name, '_', 'split');
    bus_name = sprintf('MC%d_%s', obj.TRDP_manager.carriage_index, ...
        strjoin(setdiff(splited_name(2 : end), {'MC1', 'MC2'}), '_'));
    bus_comment = bus_name;
    
    % 根据数据字典固定格式打印信息
    fprintf(obj.data_import_file_index, '%s = Simulink.Bus;\n', bus_name);
    fprintf(obj.data_import_file_index, '%s.Description = ''%s'';\n', bus_name, bus_comment);
    fprintf(obj.data_import_file_index, '%s.DataScope = ''Auto'';\n', bus_name);
    fprintf(obj.data_import_file_index, '%s.HeaderFile = '''';\n', bus_name);
    fprintf(obj.data_import_file_index, '%s.Alignment = -1;\n', bus_name);
    
    for index2 = 1 : length(TRDP_process_data_list(index1, 1).variable_list)
        
        fprintf(obj.data_import_file_index, ...
            'saveVarsTmp{1}(%d, 1) = Simulink.BusElement;\n', index2);
        
        % 查找原始清单中是否有重名项
        duplicate_name_index = find(ismember([TRDP_process_data_list(index1, ...
            1).variable_list.name], TRDP_process_data_list(index1, ...
            1).variable_list(index2, 1).name));
        
        % 如果有重名项则对后面的信号名补充后缀
        if 1 < length(duplicate_name_index) && duplicate_name_index(1) < index2
            addition_index = find(~(duplicate_name_index - index2));
            fprintf(obj.data_import_file_index, ...
                'saveVarsTmp{1}(%d, 1).Name = ''%s_%d'';\n', index2, ...
                TRDP_process_data_list(index1, 1).variable_list(index2, ...
                1).name, addition_index);
        else
            fprintf(obj.data_import_file_index, ...
                'saveVarsTmp{1}(%d, 1).Name = ''%s'';\n', index2, ...
                TRDP_process_data_list(index1, 1).variable_list(index2, 1).name);
        end
        
        fprintf(obj.data_import_file_index, ...
            'saveVarsTmp{1}(%d, 1).Complexity = ''real'';\n', index2);
        fprintf(obj.data_import_file_index, ...
            'saveVarsTmp{1}(%d, 1).Dimensions = 1;\n', index2);
        fprintf(obj.data_import_file_index, ...
            'saveVarsTmp{1}(%d, 1).DataType = ''double'';\n', index2);
        fprintf(obj.data_import_file_index, ...
            'saveVarsTmp{1}(%d, 1).Min = %s;\n', index2, ...
            TRDP_process_data_list(index1, 1).variable_list(index2, 1).min);
        fprintf(obj.data_import_file_index, ...
            'saveVarsTmp{1}(%d, 1).Max = %s;\n', index2, ...
            TRDP_process_data_list(index1, 1).variable_list(index2, 1).max);
        fprintf(obj.data_import_file_index, ...
            'saveVarsTmp{1}(%d, 1).DimensionsMode = ''Fixed'';\n', index2);
        fprintf(obj.data_import_file_index, ...
            'saveVarsTmp{1}(%d, 1).SamplingMode = ''Sample based'';\n', index2);
        fprintf(obj.data_import_file_index, ...
            'saveVarsTmp{1}(%d, 1).DocUnits = '''';\n', index2);
        fprintf(obj.data_import_file_index, ...
            'saveVarsTmp{1}(%d, 1).Description = ''%s'';\n', index2, ...
            TRDP_process_data_list(index1, 1).variable_list(index2, 1).comment);
        
    end
    
    fprintf(obj.data_import_file_index, '%s.Elements = saveVarsTmp{1};\n', bus_name);
    fprintf(obj.data_import_file_index, 'clear saveVarsTmp;\n\n');
    
end

end
