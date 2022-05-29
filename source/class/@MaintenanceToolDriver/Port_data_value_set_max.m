% 端口临时数据设置为最大值
function [] = Port_data_value_set_max(obj, variable_name)
%   1.输入参数：
%       (1)obj              MAINTENANCETOOLDRIVER类的一个实例
%       (2)variable_name    变量名称，字符数组或字符串
%   2.输出参数：无

% 尝试运行，如果失败则弹出提示框，便于在其他电脑上独立运行时排查问题
try
    Local_function_port_data_value_set_max(obj.telnet_object, variable_name);
catch
    uialert(obj.UI_figure, '端口临时数据设置为最大值时出现异常.', '错误提示');
end

end

% ----- Local function PORT_DATA_VALUE_SET_MAX -----
function [] = Local_function_port_data_value_set_max(tcpip_object, variable_name)
%   1.输入参数：
%       (1)tcpip_object     TCP/IP连接对象
%       (2)variable_name    变量名称，字符数组或字符串
%   2.输出参数：无

%% Telnet设置变量数值为最大值
telnet_command = ['APC_port_data_value_set_max "ADAS","', char(variable_name), ...
    '"', newline];
write(tcpip_object, telnet_command);
pause(0.1);

while(0 >= tcpip_object.NumBytesAvailable)
    drawnow
end

read(tcpip_object, tcpip_object.NumBytesAvailable, "char");

end
