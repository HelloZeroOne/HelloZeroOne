% 获取A0切换阈值
function A0_switch_threshold = Get_A0_switch_threshold(obj)
%   1.输入参数：
%       (1)obj                    MAINTENANCETOOLDRIVER类的一个实例
%   2.输出参数：
%       (1)A0_switch_threshold    切换A0到第二阶段的方向盘转角阈值，实数，单位：deg

% 尝试运行，如果失败则弹出提示框，便于在其他电脑上独立运行时排查问题
try
    A0_switch_threshold = Local_function_get_A0_switch_threshold(obj.telnet_object);
catch
    uialert(obj.UI_figure, '获取A0切换阈值时出现异常.', '错误提示');
end

end

% ----- Local function GET_A0_SWITCH_THRESHOLD -----
function result = Local_function_get_A0_switch_threshold(tcpip_object)
%   1.输入参数：
%       (1)tcpip_object    TCP/IP连接对象
%   2.输出参数：
%       (1)result          切换A0到第二阶段的方向盘转角阈值，实数，单位：deg

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
if 17 > length(value)
    result = 0;
else
    result = sscanf(value{17}, '%f');
end

end
