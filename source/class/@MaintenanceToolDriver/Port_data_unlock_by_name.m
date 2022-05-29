% 通过变量名解锁端口临时数据
function [] = Port_data_unlock_by_name(obj, variable_name)
%   1.输入参数：
%       (1)obj              MAINTENANCETOOLDRIVER类的一个实例
%       (2)variable_name    变量名称，字符数组或字符串
%   2.输出参数：无

% 尝试运行，如果失败则弹出提示框，便于在其他电脑上独立运行时排查问题
try
    Local_function_port_data_unlock_by_name(obj.telnet_object, variable_name);
catch
    uialert(obj.UI_figure, '通过变量名解锁端口临时数据时出现异常.', '错误提示');
end

end

% ----- Local function PORT_DATA_UNLOCK_BY_NAME -----
function [] = Local_function_port_data_unlock_by_name(tcpip_object, variable_name)
%   1.输入参数：
%       (1)tcpip_object     TCP/IP连接对象
%       (2)variable_name    变量名称，字符数组或字符串
%   2.输出参数：无

%% Telnet解锁变量
telnet_command = ['APC_port_data_unlock_by_name "ADAS","', char(variable_name), ...
    '"', newline];
write(tcpip_object, telnet_command);
pause(0.1);

while(0 >= tcpip_object.NumBytesAvailable)
    drawnow
end

read(tcpip_object, tcpip_object.NumBytesAvailable, "char");

end
