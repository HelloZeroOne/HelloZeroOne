% 打印TRDP配置数值结构体定义信息
function [] = TRDP_config_value_struct_definition_print(obj, TRDP_process_data_list)
%   1.输入参数：
%       (1)obj                       SLDDMANAGER类的一个实例
%       (2)TRDP_process_data_list    TRDP过程数据清单，TRDPPROCESSDATA类
%   2.输出参数：无

% 统计TRDP过程数据清单条目数量
TRDP_process_data_number = size(TRDP_process_data_list, 1);

% 遍历TRDP过程数据清单，根据数据字典固定格式打印TRDP配置数值结构体定义信息
for index = 1 : TRDP_process_data_number
    
    % 合成区分牵引端的TRDP配置数值结构体名称，剔除掉MC1或者MC2的后缀
    splited_name = regexp(TRDP_process_data_list(index, 1).name, '_', 'split');
    bus_name = sprintf('TRDP_CONFIG_MC%d_%s', ...
        obj.TRDP_manager.carriage_index, strjoin(setdiff(...
        splited_name(2 : end), {'MC1', 'MC2'}), '_'));
    
    % 根据数据字典固定格式打印信息
    % 结构体专属头部声明
    fprintf(obj.data_import_file_index, '%s = struct;\n', bus_name);
    
    % 字节排序，Intel=0，Motorola=1
    byte_order = uint32(zeros(size([TRDP_process_data_list(index, ...
        1).variable_list.byte_order])));
    byte_order(ismember([TRDP_process_data_list(index, ...
        1).variable_list.byte_order], "Motorola")) = uint32(1);
    fprintf(obj.data_import_file_index, '%s.byte_order = uint32([', bus_name);
    fprintf(obj.data_import_file_index, '%d; ', byte_order);
    fprintf(obj.data_import_file_index, ']);\n');
    
    % 系数
    fprintf(obj.data_import_file_index, '%s.factor = [', bus_name);
    fprintf(obj.data_import_file_index, '%s; ', [...
        TRDP_process_data_list(index, 1).variable_list.factor]);
    fprintf(obj.data_import_file_index, '];\n');
    
    % 偏移
    fprintf(obj.data_import_file_index, '%s.offset = [', bus_name);
    fprintf(obj.data_import_file_index, '%s; ', [...
        TRDP_process_data_list(index, 1).variable_list.offset]);
    fprintf(obj.data_import_file_index, '];\n');
    
    % 类型，UINT=0，INT=1
    type = uint32(zeros(size([TRDP_process_data_list(index, ...
        1).variable_list.type])));
    type(ismember([TRDP_process_data_list(index, ...
        1).variable_list.type], "INT")) = uint32(1);
    fprintf(obj.data_import_file_index, '%s.type = uint32([', bus_name);
    fprintf(obj.data_import_file_index, '%d; ', type);
    fprintf(obj.data_import_file_index, ']);\n');
    
    % 起始字节
    fprintf(obj.data_import_file_index, '%s.start_byte = uint32([', bus_name);
    fprintf(obj.data_import_file_index, '%d; ', [...
        TRDP_process_data_list(index, 1).variable_list.start_byte]);
    fprintf(obj.data_import_file_index, ']);\n');
    
    % 起始位
    fprintf(obj.data_import_file_index, '%s.start_bit = uint32([', bus_name);
    fprintf(obj.data_import_file_index, '%d; ', [...
        TRDP_process_data_list(index, 1).variable_list.start_bit]);
    fprintf(obj.data_import_file_index, ']);\n');
    
    % 位宽
    fprintf(obj.data_import_file_index, '%s.bit_length = uint32([', bus_name);
    fprintf(obj.data_import_file_index, '%d; ', [...
        TRDP_process_data_list(index, 1).variable_list.bit_length]);
    fprintf(obj.data_import_file_index, ']);\n');
    
    % 最小值
    fprintf(obj.data_import_file_index, '%s.min = [', bus_name);
    fprintf(obj.data_import_file_index, '%s; ', [...
        TRDP_process_data_list(index, 1).variable_list.min]);
    fprintf(obj.data_import_file_index, '];\n');
    
    % 最大值
    fprintf(obj.data_import_file_index, '%s.max = [', bus_name);
    fprintf(obj.data_import_file_index, '%s; ', [...
        TRDP_process_data_list(index, 1).variable_list.max]);
    fprintf(obj.data_import_file_index, '];\n');
    
    % 换行分隔
    fprintf(obj.data_import_file_index, '\n');
    
end

end
