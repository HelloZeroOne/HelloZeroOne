% 从Access数据库导入内容
function [obj] = Access_database_import(obj)
%   1.输入参数：
%       (1)obj    SQLITEMANAGER类的一个实例
%   2.输出参数：
%       (1)obj    SQLITEMANAGER类的一个实例

%% 连接Access数据库
connection = database('myAccess', '', '');

%% 导入TRDP数据字节长度列表内容
select_query = 'SELECT 数据字节长度,备注,ID FROM TRDP数据字节长度列表';
data1 = select(connection, select_query);
colnames = {'byte_length', 'comment'};
for index = 1 : height(data1)
    insert(obj.database_connection, 'TRDP_process_data_length_list', colnames, ...
        {str2double(data1{index, 1}), char(data1{index, 2})});
end

%% 导入编码格式列表内容
select_query = 'SELECT 格式,备注,ID FROM 编码格式列表';
data2 = select(connection, select_query);
colnames = {'format', 'comment'};
for index = 1 : height(data2)
    insert(obj.database_connection, 'encoding_format_list', colnames, ...
        {char(data2{index, 1}), char(data2{index, 2})});
end

%% 导入变量解析类型列表内容
select_query = 'SELECT 类型,备注,ID FROM 变量解析类型列表';
data3 = select(connection, select_query);
colnames = {'type', 'comment'};
for index = 1 : height(data3)
    insert(obj.database_connection, 'variable_parse_type_list', colnames, ...
        {char(data3{index, 1}), char(data3{index, 2})});
end

%% 导入参数集列表内容
select_query = 'SELECT 参数集,备注,ID FROM 参数集列表';
data4 = select(connection, select_query);
colnames = {'tag', 'comment'};
for index = 1 : height(data4)
    insert(obj.database_connection, 'parameter_collection_list', colnames, ...
        {char(data4{index, 1}), char(data4{index, 2})});
end

%% 导入车厢列表内容
select_query = 'SELECT 车厢,ID FROM 车厢列表';
data5 = select(connection, select_query);
colnames = {'carriage'};
for index = 1 : height(data5)
    insert(obj.database_connection, 'carriage_list', colnames, ...
        {char(data5{index, 1})});
end

%% 导入车型列表内容
select_query = 'SELECT 车型,备注,ID FROM 车型列表';
data6 = select(connection, select_query);
colnames = {'tram_type', 'comment'};
for index = 1 : height(data6)
    insert(obj.database_connection, 'tram_type_list', colnames, ...
        {char(data6{index, 1}), char(data6{index, 2})});
end

%% 导入端口临时数据变量列表内容
select_query = 'SELECT 变量名,最小值,最大值,数据名称,ID FROM 端口临时数据变量列表';
data7 = select(connection, select_query);
colnames = {'variable_name', 'min_value', 'max_value', 'data_name'};
for index = 1 : height(data7)
    insert(obj.database_connection, 'port_data_variable_list', colnames, ...
        {char(data7{index, 1}), char(data7{index, 2}), ...
        char(data7{index, 3}), char(data7{index, 4})});
end

%% 导入接收CAN消息列表内容
select_query = 'SELECT 槽位,通道,数据字节长度,CAN消息名,[CAN ID],记录起始字节,备注,ID FROM 接收CAN消息列表';
data8 = select(connection, select_query);
colnames = {'slot', 'channel', 'DLC', 'CAN_message_name', 'CAN_ID', ...
    'record_start_byte', 'comment'};
for index = 1 : height(data8)
    insert(obj.database_connection, 'receive_CAN_message_list', colnames, ...
        {str2double(data8{index, 1}), str2double(data8{index, 2}), ...
        str2double(data8{index, 3}), char(data8{index, 4}), ...
        char(data8{index, 5}), str2double(data8{index, 6}), char(data8{index, 7})});
end

%% 导入发送CAN消息列表内容
select_query = 'SELECT 槽位,通道,数据字节长度,CAN消息名,[CAN ID],记录起始字节,备注,ID FROM 发送CAN消息列表';
data9 = select(connection, select_query);
colnames = {'slot', 'channel', 'DLC', 'CAN_message_name', 'CAN_ID', ...
    'record_start_byte', 'comment'};
for index = 1 : height(data9)
    insert(obj.database_connection, 'send_CAN_message_list', colnames, ...
        {str2double(data9{index, 1}), str2double(data9{index, 2}), ...
        str2double(data9{index, 3}), char(data9{index, 4}), ...
        char(data9{index, 5}), str2double(data9{index, 6}), char(data9{index, 7})});
end

%% 导入接收TRDP过程数据列表内容
select_query = 'SELECT TRDP过程数据名,[COM ID],数据字节长度,记录使能,备注,ID FROM 接收TRDP过程数据列表';
data10 = select(connection, select_query);
colnames = {'TRDP_process_data_name', 'COM_ID', 'TRDP_process_data_length_ID', ...
    'record_enable', 'comment'};
for index = 1 : height(data10)
    % 搜索原数据字节长度索引在新的表中所对应的索引
    [new_index, ~] = find(data1{:, 3} == data10{index, 3});
    
    % 按照新表对应的索引插入记录
    insert(obj.database_connection, 'receive_TRDP_process_data_list', colnames, ...
        {char(data10{index, 1}), str2double(data10{index, 2}), ...
        new_index, double(data10{index, 4}), char(data10{index, 5})});
end

%% 导入发送TRDP过程数据列表内容
select_query = 'SELECT TRDP过程数据名,[COM ID],数据字节长度,记录使能,备注,ID FROM 发送TRDP过程数据列表';
data11 = select(connection, select_query);
colnames = {'TRDP_process_data_name', 'COM_ID', 'TRDP_process_data_length_ID', ...
    'record_enable', 'comment'};
for index = 1 : height(data11)
    % 搜索原数据字节长度索引在新的表中所对应的索引
    [new_index, ~] = find(data1{:, 3} == data11{index, 3});
    
    % 按照新表对应的索引插入记录
    insert(obj.database_connection, 'send_TRDP_process_data_list', colnames, ...
        {char(data11{index, 1}), str2double(data11{index, 2}), ...
        new_index, double(data11{index, 4}), char(data11{index, 5})});
end

%% 导入接收CAN变量列表内容
select_query = 'SELECT 变量名,格式,系数,偏移,类型,起始位,位宽,隶属CAN消息,ID FROM 接收CAN变量列表';
data12 = select(connection, select_query);
colnames = {'variable_name_ID', 'encoding_format_ID', 'factor', ...
    'offset', 'variable_parse_type_ID', 'start_bit', 'bit_length', ...
    'CAN_message_name_ID'};
for index = 1 : height(data12)
    % 搜索原变量名索引在新的表中所对应的索引
    [new_index1, ~] = find(data7{:, 5} == data12{index, 1});
    
    % 搜索原格式索引在新的表中所对应的索引
    [new_index2, ~] = find(data2{:, 3} == data12{index, 2});
    
    % 搜索原类型索引在新的表中所对应的索引
    [new_index3, ~] = find(data3{:, 3} == data12{index, 5});
    
    % 搜索原隶属CAN消息索引在新的表中所对应的索引
    [new_index4, ~] = find(data8{:, 8} == data12{index, 8});
    
    % 按照新表对应的索引插入记录
    insert(obj.database_connection, 'receive_CAN_variable_list', colnames, ...
        {new_index1, new_index2, char(data12{index, 3}), ...
        char(data12{index, 4}), new_index3, str2double(data12{index, 6}), ...
        str2double(data12{index, 7}), new_index4});
end

%% 导入发送CAN变量列表内容
select_query = 'SELECT 变量名,格式,系数,偏移,类型,起始位,位宽,隶属CAN消息,ID FROM 发送CAN变量列表';
data13 = select(connection, select_query);
colnames = {'variable_name_ID', 'encoding_format_ID', 'factor', ...
    'offset', 'variable_parse_type_ID', 'start_bit', 'bit_length', ...
    'CAN_message_name_ID'};
for index = 1 : height(data13)
    % 搜索原变量名索引在新的表中所对应的索引
    [new_index1, ~] = find(data7{:, 5} == data13{index, 1});
    
    % 搜索原格式索引在新的表中所对应的索引
    [new_index2, ~] = find(data2{:, 3} == data13{index, 2});
    
    % 搜索原类型索引在新的表中所对应的索引
    [new_index3, ~] = find(data3{:, 3} == data13{index, 5});
    
    % 搜索原隶属CAN消息索引在新的表中所对应的索引
    [new_index4, ~] = find(data9{:, 8} == data13{index, 8});
    
    % 按照新表对应的索引插入记录
    insert(obj.database_connection, 'send_CAN_variable_list', colnames, ...
        {new_index1, new_index2, char(data13{index, 3}), ...
        char(data13{index, 4}), new_index3, str2double(data13{index, 6}), ...
        str2double(data13{index, 7}), new_index4});
end

%% 导入接收TRDP变量列表内容
select_query = 'SELECT 变量名,格式,系数,偏移,类型,起始字节,起始位,位宽,隶属TRDP过程数据,ID FROM 接收TRDP变量列表';
data14 = select(connection, select_query);
colnames = {'variable_name_ID', 'encoding_format_ID', 'factor', ...
    'offset', 'variable_parse_type_ID', 'start_byte', 'start_bit', 'bit_length', ...
    'TRDP_process_data_name_ID'};
for index = 1 : height(data14)
    % 搜索原变量名索引在新的表中所对应的索引
    [new_index1, ~] = find(data7{:, 5} == data14{index, 1});
    
    % 搜索原格式索引在新的表中所对应的索引
    [new_index2, ~] = find(data2{:, 3} == data14{index, 2});
    
    % 搜索原类型索引在新的表中所对应的索引
    [new_index3, ~] = find(data3{:, 3} == data14{index, 5});
    
    % 搜索原隶属TRDP过程数据索引在新的表中所对应的索引
    [new_index4, ~] = find(data10{:, 6} == data14{index, 9});
    
    % 按照新表对应的索引插入记录
    insert(obj.database_connection, 'receive_TRDP_variable_list', colnames, ...
        {new_index1, new_index2, char(data14{index, 3}), ...
        char(data14{index, 4}), new_index3, str2double(data14{index, 6}), ...
        str2double(data14{index, 7}), str2double(data14{index, 8}), new_index4});
end

%% 导入发送TRDP变量列表内容
select_query = 'SELECT 变量名,格式,系数,偏移,类型,起始字节,起始位,位宽,隶属TRDP过程数据,ID FROM 发送TRDP变量列表';
data15 = select(connection, select_query);
colnames = {'variable_name_ID', 'encoding_format_ID', 'factor', ...
    'offset', 'variable_parse_type_ID', 'start_byte', 'start_bit', 'bit_length', ...
    'TRDP_process_data_name_ID'};
for index = 1 : height(data15)
    % 搜索原变量名索引在新的表中所对应的索引
    [new_index1, ~] = find(data7{:, 5} == data15{index, 1});
    
    % 搜索原格式索引在新的表中所对应的索引
    [new_index2, ~] = find(data2{:, 3} == data15{index, 2});
    
    % 搜索原类型索引在新的表中所对应的索引
    [new_index3, ~] = find(data3{:, 3} == data15{index, 5});
    
    % 搜索原隶属TRDP过程数据索引在新的表中所对应的索引
    [new_index4, ~] = find(data11{:, 6} == data15{index, 9});
    
    % 按照新表对应的索引插入记录
    insert(obj.database_connection, 'send_TRDP_variable_list', colnames, ...
        {new_index1, new_index2, char(data15{index, 3}), ...
        char(data15{index, 4}), new_index3, str2double(data15{index, 6}), ...
        str2double(data15{index, 7}), str2double(data15{index, 8}), new_index4});
end

%% 导入配置参数列表内容
select_query = 'SELECT 参数名,默认值,隶属参数集,ID FROM 配置参数列表';
data16 = select(connection, select_query);
colnames = {'parameter_name', 'default_value', 'parameter_tag_ID'};
for index = 1 : height(data16)
    % 搜索原隶属参数集索引在新的表中所对应的索引
    [new_index, ~] = find(data4{:, 3} == data16{index, 3});
    
    % 按照新表对应的索引插入记录
    insert(obj.database_connection, 'config_parameter_list', colnames, ...
        {char(data16{index, 1}), char(data16{index, 2}), new_index});
end

%% 导入端口临时数据变量列表、车型列表、车厢列表之间的关系表内容
select_query = 'SELECT ID,车型,车厢 FROM 端口临时数据变量列表';
curs1 = exec(connection, select_query);
curs2 = fetch(curs1);
data17 = curs2.Data;
colnames = {'port_data_variable_ID', 'tram_type_ID', 'carriage_ID'};
% 查询到有效记录以后开始遍历
if 3 <= size(data17, 2)
    for index1 = 1 : size(data17, 1)
        % 切分车厢索引
        split_carriage_ID = strsplit(data17{index1, 3}, ';');
        
        % 切分车型索引
        split_tram_type_ID = strsplit(data17{index1, 2}, ';');
        
        % 搜索原端口临时变量索引在新的表中所对应的索引
        [new_index1, ~] = find(data7{:, 5} == data17{index1, 1});
        
        % 遍历所有车厢
        for index2 = 1 : length(split_carriage_ID)
            % 搜索原车厢索引在新的表中所对应的索引
            [new_index2, ~] = find(data5{:, 2} == ...
                str2double(split_carriage_ID{index2}));
            
            % 遍历所有车型
            for index3 = 1 : length(split_tram_type_ID)
                % 搜索原车型索引在新的表中所对应的索引
                [new_index3, ~] = find(data6{:, 3} == ...
                    str2double(split_tram_type_ID{index3}));
                
                % 按照新表对应的索引插入记录
                insert(obj.database_connection, ...
                    'port_data_variable_list_relationship_table', colnames, ...
                    {new_index1, new_index3, new_index2});
            end
        end
    end
end
close(curs2);
close(curs1);

%% 导入接收CAN消息列表、车型列表、车厢列表之间的关系表内容
select_query = 'SELECT ID,车型,车厢 FROM 接收CAN消息列表';
curs1 = exec(connection, select_query);
curs2 = fetch(curs1);
data18 = curs2.Data;
colnames = {'CAN_message_ID', 'tram_type_ID', 'carriage_ID'};
% 查询到有效记录以后开始遍历
if 3 <= size(data18, 2)
    for index1 = 1 : size(data18, 1)
        % 切分车厢索引
        split_carriage_ID = strsplit(data18{index1, 3}, ';');
        
        % 切分车型索引
        split_tram_type_ID = strsplit(data18{index1, 2}, ';');
        
        % 搜索原接收CAN消息索引在新的表中所对应的索引
        [new_index1, ~] = find(data8{:, 8} == data18{index1, 1});
        
        % 遍历所有车厢
        for index2 = 1 : length(split_carriage_ID)
            % 搜索原车厢索引在新的表中所对应的索引
            [new_index2, ~] = find(data5{:, 2} == ...
                str2double(split_carriage_ID{index2}));
            
            % 遍历所有车型
            for index3 = 1 : length(split_tram_type_ID)
                % 搜索原车型索引在新的表中所对应的索引
                [new_index3, ~] = find(data6{:, 3} == ...
                    str2double(split_tram_type_ID{index3}));
                
                % 按照新表对应的索引插入记录
                insert(obj.database_connection, ...
                    'receive_CAN_message_list_relationship_table', colnames, ...
                    {new_index1, new_index3, new_index2});
            end
        end
    end
end
close(curs2);
close(curs1);

%% 导入发送CAN消息列表、车型列表、车厢列表之间的关系表内容
select_query = 'SELECT ID,车型,车厢 FROM 发送CAN消息列表';
curs1 = exec(connection, select_query);
curs2 = fetch(curs1);
data19 = curs2.Data;
colnames = {'CAN_message_ID', 'tram_type_ID', 'carriage_ID'};
% 查询到有效记录以后开始遍历
if 3 <= size(data19, 2)
    for index1 = 1 : size(data19, 1)
        % 切分车厢索引
        split_carriage_ID = strsplit(data19{index1, 3}, ';');
        
        % 切分车型索引
        split_tram_type_ID = strsplit(data19{index1, 2}, ';');
        
        % 搜索原发送CAN消息索引在新的表中所对应的索引
        [new_index1, ~] = find(data9{:, 8} == data19{index1, 1});
        
        % 遍历所有车厢
        for index2 = 1 : length(split_carriage_ID)
            % 搜索原车厢索引在新的表中所对应的索引
            [new_index2, ~] = find(data5{:, 2} == ...
                str2double(split_carriage_ID{index2}));
            
            % 遍历所有车型
            for index3 = 1 : length(split_tram_type_ID)
                % 搜索原车型索引在新的表中所对应的索引
                [new_index3, ~] = find(data6{:, 3} == ...
                    str2double(split_tram_type_ID{index3}));
                
                % 按照新表对应的索引插入记录
                insert(obj.database_connection, ...
                    'send_CAN_message_list_relationship_table', colnames, ...
                    {new_index1, new_index3, new_index2});
            end
        end
    end
end
close(curs2);
close(curs1);

%% 导入接收TRDP过程数据列表、车型列表、车厢列表之间的关系表内容
select_query = 'SELECT ID,车型,车厢 FROM 接收TRDP过程数据列表';
curs1 = exec(connection, select_query);
curs2 = fetch(curs1);
data20 = curs2.Data;
colnames = {'TRDP_process_data_ID', 'tram_type_ID', 'carriage_ID'};
% 查询到有效记录以后开始遍历
if 3 <= size(data20, 2)
    for index1 = 1 : size(data20, 1)
        % 切分车厢索引
        split_carriage_ID = strsplit(data20{index1, 3}, ';');
        
        % 切分车型索引
        split_tram_type_ID = strsplit(data20{index1, 2}, ';');
        
        % 搜索原接收TRDP过程数据索引在新的表中所对应的索引
        [new_index1, ~] = find(data10{:, 6} == data20{index1, 1});
        
        % 遍历所有车厢
        for index2 = 1 : length(split_carriage_ID)
            % 搜索原车厢索引在新的表中所对应的索引
            [new_index2, ~] = find(data5{:, 2} == ...
                str2double(split_carriage_ID{index2}));
            
            % 遍历所有车型
            for index3 = 1 : length(split_tram_type_ID)
                % 搜索原车型索引在新的表中所对应的索引
                [new_index3, ~] = find(data6{:, 3} == ...
                    str2double(split_tram_type_ID{index3}));
                
                % 按照新表对应的索引插入记录
                insert(obj.database_connection, ...
                    'receive_TRDP_process_data_list_relationship_table', colnames, ...
                    {new_index1, new_index3, new_index2});
            end
        end
    end
end
close(curs2);
close(curs1);

%% 导入发送TRDP过程数据列表、车型列表、车厢列表之间的关系表内容
select_query = 'SELECT ID,车型,车厢 FROM 发送TRDP过程数据列表';
curs1 = exec(connection, select_query);
curs2 = fetch(curs1);
data21 = curs2.Data;
colnames = {'TRDP_process_data_ID', 'tram_type_ID', 'carriage_ID'};
% 查询到有效记录以后开始遍历
if 3 <= size(data21, 2)
    for index1 = 1 : size(data21, 1)
        % 切分车厢索引
        split_carriage_ID = strsplit(data21{index1, 3}, ';');
        
        % 切分车型索引
        split_tram_type_ID = strsplit(data21{index1, 2}, ';');
        
        % 搜索原发送TRDP过程数据索引在新的表中所对应的索引
        [new_index1, ~] = find(data11{:, 6} == data21{index1, 1});
        
        % 遍历所有车厢
        for index2 = 1 : length(split_carriage_ID)
            % 搜索原车厢索引在新的表中所对应的索引
            [new_index2, ~] = find(data5{:, 2} == ...
                str2double(split_carriage_ID{index2}));
            
            % 遍历所有车型
            for index3 = 1 : length(split_tram_type_ID)
                % 搜索原车型索引在新的表中所对应的索引
                [new_index3, ~] = find(data6{:, 3} == ...
                    str2double(split_tram_type_ID{index3}));
                
                % 按照新表对应的索引插入记录
                insert(obj.database_connection, ...
                    'send_TRDP_process_data_list_relationship_table', colnames, ...
                    {new_index1, new_index3, new_index2});
            end
        end
    end
end
close(curs2);
close(curs1);

%% 导入接收CAN变量列表、车型列表、车厢列表之间的关系表内容
select_query = 'SELECT ID,车型,车厢 FROM 接收CAN变量列表';
curs1 = exec(connection, select_query);
curs2 = fetch(curs1);
data22 = curs2.Data;
colnames = {'CAN_variable_ID', 'tram_type_ID', 'carriage_ID'};
% 查询到有效记录以后开始遍历
if 3 <= size(data22, 2)
    for index1 = 1 : size(data22, 1)
        % 切分车厢索引
        split_carriage_ID = strsplit(data22{index1, 3}, ';');
        
        % 切分车型索引
        split_tram_type_ID = strsplit(data22{index1, 2}, ';');
        
        % 搜索原接收CAN变量索引在新的表中所对应的索引
        [new_index1, ~] = find(data12{:, 9} == data22{index1, 1});
        
        % 遍历所有车厢
        for index2 = 1 : length(split_carriage_ID)
            % 搜索原车厢索引在新的表中所对应的索引
            [new_index2, ~] = find(data5{:, 2} == ...
                str2double(split_carriage_ID{index2}));
            
            % 遍历所有车型
            for index3 = 1 : length(split_tram_type_ID)
                % 搜索原车型索引在新的表中所对应的索引
                [new_index3, ~] = find(data6{:, 3} == ...
                    str2double(split_tram_type_ID{index3}));
                
                % 按照新表对应的索引插入记录
                insert(obj.database_connection, ...
                    'receive_CAN_variable_list_relationship_table', colnames, ...
                    {new_index1, new_index3, new_index2});
            end
        end
    end
end
close(curs2);
close(curs1);

%% 导入发送CAN变量列表、车型列表、车厢列表之间的关系表内容
select_query = 'SELECT ID,车型,车厢 FROM 发送CAN变量列表';
curs1 = exec(connection, select_query);
curs2 = fetch(curs1);
data23 = curs2.Data;
colnames = {'CAN_variable_ID', 'tram_type_ID', 'carriage_ID'};
% 查询到有效记录以后开始遍历
if 3 <= size(data23, 2)
    for index1 = 1 : size(data23, 1)
        % 切分车厢索引
        split_carriage_ID = strsplit(data23{index1, 3}, ';');
        
        % 切分车型索引
        split_tram_type_ID = strsplit(data23{index1, 2}, ';');
        
        % 搜索原发送CAN变量索引在新的表中所对应的索引
        [new_index1, ~] = find(data13{:, 9} == data23{index1, 1});
        
        % 遍历所有车厢
        for index2 = 1 : length(split_carriage_ID)
            % 搜索原车厢索引在新的表中所对应的索引
            [new_index2, ~] = find(data5{:, 2} == ...
                str2double(split_carriage_ID{index2}));
            
            % 遍历所有车型
            for index3 = 1 : length(split_tram_type_ID)
                % 搜索原车型索引在新的表中所对应的索引
                [new_index3, ~] = find(data6{:, 3} == ...
                    str2double(split_tram_type_ID{index3}));
                
                % 按照新表对应的索引插入记录
                insert(obj.database_connection, ...
                    'send_CAN_variable_list_relationship_table', colnames, ...
                    {new_index1, new_index3, new_index2});
            end
        end
    end
end
close(curs2);
close(curs1);

%% 导入接收TRDP变量列表、车型列表、车厢列表之间的关系表内容
select_query = 'SELECT ID,车型,车厢 FROM 接收TRDP变量列表';
curs1 = exec(connection, select_query);
curs2 = fetch(curs1);
data24 = curs2.Data;
colnames = {'TRDP_variable_ID', 'tram_type_ID', 'carriage_ID'};
% 查询到有效记录以后开始遍历
if 3 <= size(data24, 2)
    for index1 = 1 : size(data24, 1)
        % 切分车厢索引
        split_carriage_ID = strsplit(data24{index1, 3}, ';');
        
        % 切分车型索引
        split_tram_type_ID = strsplit(data24{index1, 2}, ';');
        
        % 搜索原接收TRDP变量索引在新的表中所对应的索引
        [new_index1, ~] = find(data14{:, 10} == data24{index1, 1});
        
        % 遍历所有车厢
        for index2 = 1 : length(split_carriage_ID)
            % 搜索原车厢索引在新的表中所对应的索引
            [new_index2, ~] = find(data5{:, 2} == ...
                str2double(split_carriage_ID{index2}));
            
            % 遍历所有车型
            for index3 = 1 : length(split_tram_type_ID)
                % 搜索原车型索引在新的表中所对应的索引
                [new_index3, ~] = find(data6{:, 3} == ...
                    str2double(split_tram_type_ID{index3}));
                
                % 按照新表对应的索引插入记录
                insert(obj.database_connection, ...
                    'receive_TRDP_variable_list_relationship_table', colnames, ...
                    {new_index1, new_index3, new_index2});
            end
        end
    end
end
close(curs2);
close(curs1);

%% 导入发送TRDP变量列表、车型列表、车厢列表之间的关系表内容
select_query = 'SELECT ID,车型,车厢 FROM 发送TRDP变量列表';
curs1 = exec(connection, select_query);
curs2 = fetch(curs1);
data25 = curs2.Data;
colnames = {'TRDP_variable_ID', 'tram_type_ID', 'carriage_ID'};
% 查询到有效记录以后开始遍历
if 3 <= size(data25, 2)
    for index1 = 1 : size(data25, 1)
        % 切分车厢索引
        split_carriage_ID = strsplit(data25{index1, 3}, ';');
        
        % 切分车型索引
        split_tram_type_ID = strsplit(data25{index1, 2}, ';');
        
        % 搜索原发送TRDP变量索引在新的表中所对应的索引
        [new_index1, ~] = find(data15{:, 10} == data25{index1, 1});
        
        % 遍历所有车厢
        for index2 = 1 : length(split_carriage_ID)
            % 搜索原车厢索引在新的表中所对应的索引
            [new_index2, ~] = find(data5{:, 2} == ...
                str2double(split_carriage_ID{index2}));
            
            % 遍历所有车型
            for index3 = 1 : length(split_tram_type_ID)
                % 搜索原车型索引在新的表中所对应的索引
                [new_index3, ~] = find(data6{:, 3} == ...
                    str2double(split_tram_type_ID{index3}));
                
                % 按照新表对应的索引插入记录
                insert(obj.database_connection, ...
                    'send_TRDP_variable_list_relationship_table', colnames, ...
                    {new_index1, new_index3, new_index2});
            end
        end
    end
end
close(curs2);
close(curs1);

%% 导入配置参数列表、车型列表、车厢列表之间的关系表内容
select_query = 'SELECT ID,车型,车厢 FROM 配置参数列表';
curs1 = exec(connection, select_query);
curs2 = fetch(curs1);
data26 = curs2.Data;
colnames = {'config_parameter_ID', 'tram_type_ID', 'carriage_ID'};
% 查询到有效记录以后开始遍历
if 3 <= size(data26, 2)
    for index1 = 1 : size(data26, 1)
        % 切分车厢索引
        split_carriage_ID = strsplit(data26{index1, 3}, ';');
        
        % 切分车型索引
        split_tram_type_ID = strsplit(data26{index1, 2}, ';');
        
        % 搜索原配置参数索引在新的表中所对应的索引
        [new_index1, ~] = find(data16{:, 4} == data26{index1, 1});
        
        % 遍历所有车厢
        for index2 = 1 : length(split_carriage_ID)
            % 搜索原车厢索引在新的表中所对应的索引
            [new_index2, ~] = find(data5{:, 2} == ...
                str2double(split_carriage_ID{index2}));
            
            % 遍历所有车型
            for index3 = 1 : length(split_tram_type_ID)
                % 搜索原车型索引在新的表中所对应的索引
                [new_index3, ~] = find(data6{:, 3} == ...
                    str2double(split_tram_type_ID{index3}));
                
                % 按照新表对应的索引插入记录
                insert(obj.database_connection, ...
                    'config_parameter_list_relationship_table', colnames, ...
                    {new_index1, new_index3, new_index2});
            end
        end
    end
end
close(curs2);
close(curs1);

%% 关闭Access数据库连接
close(connection);

%% 提示操作成功
fprintf('***将Access数据库内容导入SQLite数据库【%s】成功***\n', ...
    obj.database_file_path);

end
