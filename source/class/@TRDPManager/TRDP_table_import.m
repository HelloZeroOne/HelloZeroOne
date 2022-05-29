% 导入TRDP协议表格
function [obj] = TRDP_table_import(obj)
%   1.输入参数：
%       (1)obj    TRDPMANAGER类的一个实例
%   2.输出参数：
%       (1)obj    TRDPMANAGER类的一个实例

%% 从SQLite数据库中查询表格内容
% 连接数据库
obj.SQLite_manager_obj = obj.SQLite_manager_obj.Database_connect;

% 查询接收TRDP过程数据列表
obj.receive_TRDP_process_data_list_table = ...
    obj.SQLite_manager_obj.Database_query_specific_tram_carriage_export(...
    '查询接收TRDP过程数据列表', obj.tram_type_index, obj.carriage_index);

% 查询接收TRDP过程数据列表
obj.send_TRDP_process_data_list_table = ...
    obj.SQLite_manager_obj.Database_query_specific_tram_carriage_export(...
    '查询发送TRDP过程数据列表', obj.tram_type_index, obj.carriage_index);

% 查询端口临时数据变量列表
obj.port_data_variable_list_table = ...
    obj.SQLite_manager_obj.Database_query_specific_tram_carriage_export(...
    '查询端口临时数据变量列表', obj.tram_type_index, obj.carriage_index);

% 查询接收TRDP变量列表
obj.receive_TRDP_variable_list_table = ...
    obj.SQLite_manager_obj.Database_query_specific_tram_carriage_export(...
    '查询接收TRDP变量列表', obj.tram_type_index, obj.carriage_index);

% 查询发送TRDP变量列表
obj.send_TRDP_variable_list_table = ...
    obj.SQLite_manager_obj.Database_query_specific_tram_carriage_export(...
    '查询发送TRDP变量列表', obj.tram_type_index, obj.carriage_index);

% 断开数据库连接
obj.SQLite_manager_obj = obj.SQLite_manager_obj.Database_disconnect;

%% 更新输入TRDP过程数据清单
% 统计输入TRDP过程数据条目数量
input_TRDP_process_data_number = height(obj.receive_TRDP_process_data_list_table);

% 输入TRDP过程数据清单初始化
obj.input_TRDP_process_data_list(input_TRDP_process_data_number, 1) = TRDPProcessData;

% 遍历接收TRDP过程数据表格以合成每一条输入TRDP过程数据的名称、解析TRDP过程数据的变量清单
for index = 1 : input_TRDP_process_data_number
    obj.input_TRDP_process_data_list(index, 1).name = ...
        obj.receive_TRDP_process_data_list_table.('TRDP_process_data_name'){index};
    obj.input_TRDP_process_data_list(index, 1) = ...
        obj.input_TRDP_process_data_list(index, 1).TRDP_process_data_parse(...
        obj.receive_TRDP_variable_list_table, obj.port_data_variable_list_table);
end

%% 更新输出TRDP过程数据清单
% 统计输出TRDP过程数据条目数量
output_TRDP_process_data_number = height(obj.send_TRDP_process_data_list_table);

% 输出TRDP过程数据清单初始化
obj.output_TRDP_process_data_list(output_TRDP_process_data_number, 1) = TRDPProcessData;

% 遍历发送TRDP过程数据表格以合成每一条输出TRDP过程数据的名称、解析TRDP过程数据的变量清单
for index = 1 : output_TRDP_process_data_number
    obj.output_TRDP_process_data_list(index, 1).name = ...
        obj.send_TRDP_process_data_list_table.('TRDP_process_data_name'){index};
    obj.output_TRDP_process_data_list(index, 1) = ...
        obj.output_TRDP_process_data_list(index, 1).TRDP_process_data_parse(...
        obj.send_TRDP_variable_list_table, obj.port_data_variable_list_table);
end

end
