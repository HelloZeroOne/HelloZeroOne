% 获取横向控制软件版本
function software_version = Get_lateral_control_software_version(obj)
%   1.输入参数：
%       (1)obj                 MAINTENANCETOOLDRIVER类的一个实例
%   2.输出参数：
%       (1)software_version    软件版本，字符数组

% 尝试运行，如果失败则弹出提示框，便于在其他电脑上独立运行时排查问题
try
    software_version = Local_function_get_lateral_control_software_version(...
        obj.telnet_object);
catch
    uialert(obj.UI_figure, '获取横向控制软件版本时出现异常.', '错误提示');
end

end

% ----- Local function GET_LATERAL_CONTROL_SOFTWARE_VERSION -----
function software_version = ...
    Local_function_get_lateral_control_software_version(tcpip_object)
%   1.输入参数：
%       (1)tcpip_object        TCP/IP连接对象
%   2.输出参数：
%       (1)software_version    软件版本，字符数组

%% Telnet查询应用软件版本
telnet_command = ['ADAS_software_version_show', newline];
write(tcpip_object, telnet_command);
pause(0.1);

while(0 >= tcpip_object.NumBytesAvailable)
    drawnow
end

response = read(tcpip_object, tcpip_object.NumBytesAvailable, "char");
value = regexp(response, '\d+', 'match');

%% 无法按指定格式识别到3个小版本号时，说明没有初始版本软件，强制定义版本号为V0.0.0
if 3 > length(value)
    software_version = 'V0.0.0';
else
    software_version = sprintf('V%s.%s.%s', value{1}, value{2}, value{3});
end

end
