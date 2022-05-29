% 断开Telnet连接
function [] = Telnet_disconnect(obj)
%   1.输入参数：
%       (1)obj    MAINTENANCETOOLDRIVER类的一个实例
%   2.输出参数：无

% 尝试运行，如果失败则弹出提示框，便于在其他电脑上独立运行时排查问题
try
    Local_function_telnet_disconnect(obj.telnet_object);
catch
    uialert(obj.UI_figure, '断开Telnet时出现异常.', '错误提示');
end

end

% ----- Local function TELNET_DISCONNECT -----
function [] = Local_function_telnet_disconnect(tcpip_object)
%   1.输入参数：
%       (1)tcpip_object    TCP/IP连接对象
%   2.输出参数：无

% 清空数据.
flush(tcpip_object);

end
