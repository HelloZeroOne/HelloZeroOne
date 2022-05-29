% 从SQLite数据库生成单一应用协议编解码配置XML结构文件
function [obj] = Single_APC_config_XML_generate(obj)
%   1.输入参数：
%       (1)obj    SQLITEMANAGER类的一个实例
%   2.输出参数：
%       (1)obj    SQLITEMANAGER类的一个实例

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
