% 设置嵌入式系统时间
function [] = Set_embeded_system_time(obj)
%   1.输入参数：
%       (1)obj    MAINTENANCETOOLDRIVER类的一个实例
%   2.输出参数：无

% 尝试运行，如果失败则弹出提示框，便于在其他电脑上独立运行时排查问题
try
    Local_function_set_embeded_system_time(obj.telnet_object);
catch
    uialert(obj.UI_figure, '设置嵌入式系统时间出现异常.', '错误提示');
end

end

% ----- Local function SET_EMBEDED_SYSTEM_TIME -----
function [] = Local_function_set_embeded_system_time(tcpip_object)
%   1.输入参数：
%       (1)tcpip_object    TCP/IP连接对象
%   2.输出参数：无

%% Telnet设置系统时间
telnet_command = sprintf('System_time_set %d,%d,%d,%d,%d,%d,%d\n', ...
    (year(datetime('now')) - 2000), month(datetime('now')), ...
    day(datetime('now')), weekday(datetime('now')), hour(datetime('now')), ...
    minute(datetime('now')), round(second(datetime('now'))));
write(tcpip_object, telnet_command);
pause(0.1);

while(0 >= tcpip_object.NumBytesAvailable)
    drawnow
end

read(tcpip_object, tcpip_object.NumBytesAvailable, "char");

end
