% 热重启控制器
function [] = Telnet_reboot(obj)
%   1.输入参数：
%       (1)obj    MAINTENANCETOOLDRIVER类的一个实例
%   2.输出参数：无

% 尝试运行，如果失败则弹出提示框，便于在其他电脑上独立运行时排查问题
try
    Local_function_telnet_reboot(obj.telnet_object);
catch
    uialert(obj.UI_figure, '热重启控制器时出现异常.', '错误提示');
end

end

% ----- Local function TELNET_REBOOT -----
function [] = Local_function_telnet_reboot(tcpip_object)
%   1.输入参数：
%       (1)tcpip_object    TCP/IP连接对象
%   2.输出参数：无

%% Telnet热重启
telnet_command = ['reboot', newline];

write(tcpip_object, telnet_command);

end
