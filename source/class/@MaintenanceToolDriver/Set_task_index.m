% 设置任务代号
function [] = Set_task_index(obj, input_value)
%   1.输入参数：
%       (1)obj            MAINTENANCETOOLDRIVER类的一个实例
%       (2)input_value    期望的任务代号，正整数，无量纲
%   2.输出参数：无

% 尝试运行，如果失败则弹出提示框，便于在其他电脑上独立运行时排查问题
try
    Local_function_set_task_index(obj.telnet_object, input_value);
catch
    uialert(obj.UI_figure, '设置任务代号时出现异常.', '错误提示');
end

end

% ----- Local function SET_TASK_INDEX -----
function [] = Local_function_set_task_index(tcpip_object, value)
%   1.输入参数：
%       (1)tcpip_object    TCP/IP连接对象
%       (2)value           期望的任务代号，正整数，无量纲
%   2.输出参数：无

%% 限制设置的数值范围，转化为整数形式
if 255 < value
    temp_value = 255;
elseif 0 > value
    temp_value = 0;
else
    temp_value = value;
end
int_value = round(temp_value);

%% Telnet设置参数
telnet_command = sprintf('ADAS_task_index_set %d\n', int_value);
write(tcpip_object, telnet_command);
pause(0.1);

while 0 >= tcpip_object.NumBytesAvailable
    drawnow;
end

read(tcpip_object, tcpip_object.NumBytesAvailable, "char");

end
