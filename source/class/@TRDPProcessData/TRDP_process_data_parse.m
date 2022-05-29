% 解析TRDP过程数据
function [obj] = TRDP_process_data_parse(obj, TRDP_variable_list_table, ...
    port_data_list_table)
%   1.输入参数：
%       (1)obj                         TRDPPROCESSDATA类的一个实例
%       (2)TRDP_variable_list_table    TRDP变量清单表格
%       (3)port_data_list_table        端口临时数据清单表格
%   2.输出参数：
%       (1)obj                         TRDPPROCESSDATA类的一个实例

% 通过TRDP过程数据名称删除TRDP变量表格中的无效条目
TRDP_variable_list_table(~matches(TRDP_variable_list_table.(...
    'TRDP_process_data_name'), obj.name), :) = [];

% 统计TRDP变量表格中剩余条目数量
TRDP_variable_number = height(TRDP_variable_list_table);

% TRDP变量清单初始化
obj.variable_list(TRDP_variable_number, 1) = TRDPVariable;

% 遍历TRDP变量表格以更新TRDP变量清单属性
for index = 1 : TRDP_variable_number
    obj.variable_list(index, 1).name = string(...
        TRDP_variable_list_table.('variable_name')(index));
    obj.variable_list(index, 1).byte_order = string(...
        TRDP_variable_list_table.('format')(index));
    obj.variable_list(index, 1).factor = string(...
        TRDP_variable_list_table.('factor')(index));
    obj.variable_list(index, 1).offset = string(...
        TRDP_variable_list_table.('offset')(index));
    obj.variable_list(index, 1).type = string(...
        TRDP_variable_list_table.('type')(index));
    obj.variable_list(index, 1).start_byte = uint32(str2double(string(...
        TRDP_variable_list_table.('start_byte')(index))));
    obj.variable_list(index, 1).start_bit = uint32(str2double(string(...
        TRDP_variable_list_table.('start_bit')(index))));
    obj.variable_list(index, 1).bit_length = uint32(str2double(string(...
        TRDP_variable_list_table.('bit_length')(index))));
    [source_index, destination_index] = ismember(...
        obj.variable_list(index, 1).name, port_data_list_table.('variable_name'));
    if isequal(0, source_index)
        error('变量名不匹配');
    end
    obj.variable_list(index, 1).min = string(...
        port_data_list_table.('min_value')(destination_index));
    obj.variable_list(index, 1).max = string(...
        port_data_list_table.('max_value')(destination_index));
    obj.variable_list(index, 1).comment = string(...
        port_data_list_table.('data_name')(destination_index));
end

end
