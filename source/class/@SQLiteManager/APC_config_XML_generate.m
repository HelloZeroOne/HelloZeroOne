% 从SQLite数据库生成应用协议编解码配置XML结构文件
function [obj] = APC_config_XML_generate(obj)
%   1.输入参数：
%       (1)obj    SQLITEMANAGER类的一个实例
%   2.输出参数：
%       (1)obj    SQLITEMANAGER类的一个实例

%% 指定车型
% 获取车型列表
tram_type_list = obj.Database_table_export('tram_type_list');

% 提示信息选择车型
fprintf('$可选车型如下：\n');
fprintf('%s - %s\n', [string(1 : height(tram_type_list)); ...
    transpose(string(tram_type_list.('tram_type')))]);
tram_type_index = input('->请设置目标车型索引 [回车默认1]: ');
if isempty(tram_type_index) || 1 > tram_type_index
    tram_type_index = 1;
end
obj.specified_tram_type = tram_type_list.('tram_type'){tram_type_index};

%% 指定车厢
% 获取车厢列表
carriage_list = obj.Database_table_export('carriage_list');

% 提示信息选择车厢
fprintf('$可选车厢如下：\n');
fprintf('%s - %s\n', [string(1 : height(carriage_list)); ...
    transpose(string(carriage_list.('carriage')))]);
carriage_index = input('->请设置目标车厢索引 [回车默认1]: ');
if isempty(carriage_index) || 1 > carriage_index
    carriage_index = 1;
end
obj.specified_carriage = carriage_list.('carriage'){carriage_index};

%% 数据源、定制化XML结构初始化
% 应用协议编解码配置表格初始化
obj = obj.APC_config_table_initialize;

% 应用协议编解码配置XML结构初始化
obj = obj.APC_config_XML_initialize;

%% 从数据源生成定制化的XML结构内容
% 配置参数清单从table格式转换为XML格式
obj = obj.Config_parameter_list_table2XML_convert;

% 接收CAN消息清单从table格式转换为XML格式
obj = obj.Receive_CAN_message_list_table2XML_convert;

% 发送CAN消息清单从table格式转换为XML格式
obj = obj.Send_CAN_message_list_table2XML_convert;

% 接收TRDP过程数据清单从table格式转换为XML格式
obj = obj.Receive_TRDP_process_data_list_table2XML_convert;

% 发送TRDP过程数据清单从table格式转换为XML格式
obj = obj.Send_TRDP_process_data_list_table2XML_convert;

% 数字量输入清单从table格式转换为XML格式
obj = obj.Digital_input_list_table2XML_convert;

% 数字量输出清单从table格式转换为XML格式
obj = obj.Digital_output_list_table2XML_convert;

% 接收TCP连接ASCII码清单从table格式转换为XML格式
obj = obj.Receive_TCP_ASCII_list_table2XML_convert;

% 端口临时数据变量清单从table格式转换为XML格式
obj = obj.Port_data_variable_list_table2XML_convert;

% 接收CAN变量清单从table格式转换为XML格式
obj = obj.Receive_CAN_variable_list_table2XML_convert;

% 发送CAN变量清单从table格式转换为XML格式
obj = obj.Send_CAN_variable_list_table2XML_convert;

% 接收TRDP变量清单从table格式转换为XML格式
obj = obj.Receive_TRDP_variable_list_table2XML_convert;

% 发送TRDP变量清单从table格式转换为XML格式
obj = obj.Send_TRDP_variable_list_table2XML_convert;

% 数字量输入变量清单从table格式转换为XML格式
obj = obj.Digital_input_variable_list_table2XML_convert;

% 数字量输出变量清单从table格式转换为XML格式
obj = obj.Digital_output_variable_list_table2XML_convert;

% 接收TCP连接ASCII码变量清单从table格式转换为XML格式
obj = obj.Receive_TCP_ASCII_variable_list_table2XML_convert;

%% 定制化的XML结构写入指定文件
obj.APC_config_XML_write;

end
