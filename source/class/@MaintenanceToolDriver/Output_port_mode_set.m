% 输出端口模式设置
function [] = Output_port_mode_set(obj, mode_index)
%   1.输入参数：
%       (1)obj           MAINTENANCETOOLDRIVER类的一个实例
%       (2)mode_index    模式索引，double
%   2.输出参数：无

% 尝试运行，如果失败则弹出提示框，便于在其他电脑上独立运行时排查问题
try
    Local_function_output_port_mode_set(obj.telnet_object, mode_index);
catch
    uialert(obj.UI_figure, '输出端口模式设置时出现异常.', '错误提示');
end

end

% ----- Local function OUTPUT_PORT_MODE_SET -----
function [] = Local_function_output_port_mode_set(tcpip_object, mode_index)
%   1.输入参数：
%       (1)tcpip_object    TCP/IP连接对象
%       (2)mode_index      模式索引，double
%   2.输出参数：无

%% Telnet设置输出端口模式
telnet_command = ['Output_port_mode_set ', num2str(mode_index), newline];
write(tcpip_object, telnet_command);
pause(0.1);

while(0 >= tcpip_object.NumBytesAvailable)
    drawnow
end

read(tcpip_object, tcpip_object.NumBytesAvailable);

end
