% 建立Telnet连接
function obj = Telnet_connect(obj)
%   1.输入参数：
%       (1)obj    MAINTENANCETOOLDRIVER类的一个实例
%   2.输出参数：
%       (1)obj    MAINTENANCETOOLDRIVER类的一个实例

% 尝试运行，如果失败则弹出提示框，便于在其他电脑上独立运行时排查问题
try
    obj.telnet_object = Local_function_telnet_connect(obj.target_IP);
catch
    error_text = sprintf('无法连接目标 %s.', obj.target_IP);
    uialert(obj.UI_figure, error_text, '错误提示');
end

end

% ----- Local function TELNET_CONNECT -----
function tcpip_object = Local_function_telnet_connect(IP)
%   1.输入参数：
%       (1)IP              目标IP，字符数组
%   2.输出参数：
%       (1)tcpip_object    TCP/IP连接对象

%% 初始化
target_port = 23;

%% 建立TCP/IP连接
tcpip_object = tcpclient(IP, target_port);
pause(0.1)
read(tcpip_object, tcpip_object.NumBytesAvailable);

end
