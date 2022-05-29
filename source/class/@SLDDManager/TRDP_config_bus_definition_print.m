% 打印TRDP配置总线定义信息
function [] = TRDP_config_bus_definition_print(obj, TRDP_process_data_list)
%   1.输入参数：
%       (1)obj                       SLDDMANAGER类的一个实例
%       (2)TRDP_process_data_list    TRDP过程数据清单，TRDPPROCESSDATA类
%   2.输出参数：无

% TRDP变量配置属性名称
TRDP_config = {'byte_order', 'factor', 'offset', 'type', 'start_byte', ...
    'start_bit', 'bit_length', 'min', 'max'};

% TRDP变量配置属性数据类型
signal_type = {'uint32', 'double', 'double', 'uint32', 'uint32', ...
    'uint32', 'uint32', 'double', 'double'};

% 统计TRDP过程数据清单条目数量
TRDP_process_data_number = size(TRDP_process_data_list, 1);

% 遍历TRDP过程数据清单，根据数据字典固定格式打印TRDP配置总线定义信息
for index1 = 1 : TRDP_process_data_number
    
    % 合成区分牵引端的TRDP配置总线名称，剔除掉MC1或者MC2的后缀
    splited_name = regexp(TRDP_process_data_list(index1, 1).name, '_', 'split');
    bus_name = sprintf('CONFIG_MC%d_%s', obj.TRDP_manager.carriage_index, ...
        strjoin(setdiff(splited_name(2 : end), {'MC1', 'MC2'}), '_'));
    bus_comment = sprintf('MC%d_%s', obj.TRDP_manager.carriage_index, ...
        strjoin(setdiff(splited_name(2 : end), {'MC1', 'MC2'}), '_'));
    
    % 根据数据字典固定格式打印信息
    fprintf(obj.data_import_file_index, '%s = Simulink.Bus;\n', bus_name);
    fprintf(obj.data_import_file_index, '%s.Description = ''%s'';\n', bus_name, bus_comment);
    fprintf(obj.data_import_file_index, '%s.DataScope = ''Auto'';\n', bus_name);
    fprintf(obj.data_import_file_index, '%s.HeaderFile = '''';\n', bus_name);
    fprintf(obj.data_import_file_index, '%s.Alignment = -1;\n', bus_name);
    
    for index2 = 1 : length(TRDP_config)
        fprintf(obj.data_import_file_index, ...
            'saveVarsTmp{1}(%d, 1) = Simulink.BusElement;\n', index2);
        fprintf(obj.data_import_file_index, ...
            'saveVarsTmp{1}(%d, 1).Name = ''%s'';\n', index2, TRDP_config{index2});
        fprintf(obj.data_import_file_index, ...
            'saveVarsTmp{1}(%d, 1).Complexity = ''real'';\n', index2);
        fprintf(obj.data_import_file_index, ...
            'saveVarsTmp{1}(%d, 1).Dimensions = [%d 1];\n', index2, ...
            size(TRDP_process_data_list(index1, 1).variable_list, 1));
        fprintf(obj.data_import_file_index, ...
            'saveVarsTmp{1}(%d, 1).DataType = ''%s'';\n', index2, signal_type{index2});
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
            'saveVarsTmp{1}(%d, 1).Description = ''%s'';\n', index2, TRDP_config{index2});
    end
    
    fprintf(obj.data_import_file_index, '%s.Elements = saveVarsTmp{1};\n', bus_name);
    fprintf(obj.data_import_file_index, 'clear saveVarsTmp;\n\n');
    
end

end
