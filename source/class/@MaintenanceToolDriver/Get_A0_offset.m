% 获取A0偏置值
function A0_offset = Get_A0_offset(obj)
%   1.输入参数：
%       (1)obj          MAINTENANCETOOLDRIVER类的一个实例
%   2.输出参数：
%       (1)A0_offset    A0偏置值，实数，单位：m

% 尝试运行，如果失败则弹出提示框，便于在其他电脑上独立运行时排查问题
try
    A0_offset = Local_function_get_A0_offset(obj.telnet_object);
catch
    uialert(obj.UI_figure, '获取A0偏置值时出现异常.', '错误提示');
end

end

% ----- Local function GET_A0_OFFSET -----
function result = Local_function_get_A0_offset(tcpip_object)
%   1.输入参数：
%       (1)tcpip_object    TCP/IP连接对象
%   2.输出参数：
%       (1)result          A0偏置值，实数，单位：m

%% Telnet查询控制参数
telnet_command = ['Control_parameter_show', newline];
write(tcpip_object, telnet_command);
pause(0.1);

while(0 >= tcpip_object.NumBytesAvailable)
    drawnow
end

response = read(tcpip_object, tcpip_object.NumBytesAvailable, "char");
value = regexp(response, '[+-]?\d+\.?\d*', 'match');

%% 无法按指定格式识别到数据时，说明没有初始版本软件，强制定义数值为0
if 8 > length(value)
    result = 0;
else
    result = sscanf(value{8}, '%f');
end

end
