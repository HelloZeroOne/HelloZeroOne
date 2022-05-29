% 通过变量名查看端口临时数据数值
function current_value = Port_data_value_show_by_name(obj, variable_name)
%   1.输入参数：
%       (1)obj              MAINTENANCETOOLDRIVER类的一个实例
%       (2)variable_name    变量名称，字符数组或字符串
%   2.输出参数：
%       (1)current_value    变量当前周期数值，double

% 尝试运行，如果失败则弹出提示框，便于在其他电脑上独立运行时排查问题
try
    current_value = Local_function_port_data_value_show_by_name(...
        obj.telnet_object, variable_name);
catch
    uialert(obj.UI_figure, '通过变量名查看端口临时数据数值时出现异常.', '错误提示');
end

end

% ----- Local function PORT_DATA_VALUE_SHOW_BY_NAME -----
function current_value = Local_function_port_data_value_show_by_name(...
    tcpip_object, variable_name)
%   1.输入参数：
%       (1)tcpip_object     TCP/IP连接对象
%       (2)variable_name    变量名称，字符数组或字符串
%   2.输出参数：
%       (1)current_value    变量当前周期数值，double

%% Telnet查询变量数值
telnet_command = ['APC_port_data_value_show_by_name "ADAS","', char(variable_name), ...
    '"', newline];
write(tcpip_object, telnet_command);
pause(0.1);

while(0 >= tcpip_object.NumBytesAvailable)
    drawnow
end

response = read(tcpip_object, tcpip_object.NumBytesAvailable, "char");
value = regexp(response, '(?<=\:\s)[+-]?\d+\.?\d*', 'match');

current_value = sscanf(value{1}, '%f');

end
