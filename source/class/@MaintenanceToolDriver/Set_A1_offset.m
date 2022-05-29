% 设置A1偏置值
function [] = Set_A1_offset(obj, input_value)
%   1.输入参数：
%       (1)obj            MAINTENANCETOOLDRIVER类的一个实例
%       (2)input_value    期望的A1偏置值，实数，无量纲
%   2.输出参数：无

% 尝试运行，如果失败则弹出提示框，便于在其他电脑上独立运行时排查问题
try
    Local_function_set_A1_offset(obj.telnet_object, input_value);
catch
    uialert(obj.UI_figure, '设置A1偏置值时出现异常.', '错误提示');
end

end

% ----- Local function SET_A1_OFFSET -----
function [] = Local_function_set_A1_offset(tcpip_object, value)
%   1.输入参数：
%       (1)tcpip_object    TCP/IP连接对象
%       (2)value           期望的A1偏置值，实数，无量纲
%   2.输出参数：无

%% 限制设置的数值范围，转化为整数形式
if 0.05 < value
    temp_value = 0.05;
elseif -0.05 > value
    temp_value = -0.05;
else
    temp_value = value;
end
int_value = round(temp_value * 1000);

%% Telnet设置参数
telnet_command = sprintf('A1_offset_set %d,1000\n', int_value);
write(tcpip_object, telnet_command);
pause(0.1);

while(0 >= tcpip_object.NumBytesAvailable)
    drawnow
end

read(tcpip_object, tcpip_object.NumBytesAvailable, "char");

end
