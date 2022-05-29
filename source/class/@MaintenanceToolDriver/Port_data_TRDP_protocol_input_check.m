% 端口临时数据TRDP协议输入检查
function [current_value, nonzero_number] = ...
    Port_data_TRDP_protocol_input_check(obj, variable_name)
%   1.输入参数：
%       (1)obj               MAINTENANCETOOLDRIVER类的一个实例
%       (2)variable_name     变量名称，字符数组或字符串
%   2.输出参数：
%       (1)current_value     变量当前数值，double
%       (2)nonzero_number    其他变量数值非零的数量，double

% 尝试运行，如果失败则弹出提示框，便于在其他电脑上独立运行时排查问题
try
    [current_value, nonzero_number] = ...
        Local_function_port_data_TRDP_protocol_input_check(obj.telnet_object, variable_name);
catch
    uialert(obj.UI_figure, '端口临时数据TRDP协议输入检查时出现异常.', '错误提示');
end

end

% ----- Local function PORT_DATA_TRDP_PROTOCOL_INPUT_CHECK -----
function [current_value, nonzero_number] = ...
    Local_function_port_data_TRDP_protocol_input_check(tcpip_object, variable_name)
%   1.输入参数：
%       (1)tcpip_object      TCP/IP连接对象
%       (2)variable_name     变量名称，字符数组或字符串
%   2.输出参数：
%       (1)current_value     变量当前数值，double
%       (2)nonzero_number    其他变量数值非零的数量，double

%% Telnet查询端口临时数据TRDP协议输入数值
telnet_command = ['APC_port_data_TRDP_protocol_input_check "ADAS","', ...
    char(variable_name), '"', newline];
write(tcpip_object, telnet_command);
pause(0.1);

while(0 >= tcpip_object.NumBytesAvailable)
    drawnow
end

response = read(tcpip_object, tcpip_object.NumBytesAvailable, "char");
value = regexp(response, '(?<=\:\s)[+-]?\d+\.?\d*', 'match');

current_value = sscanf(value{1}, '%f');
nonzero_number = sscanf(value{2}, '%d');

end
