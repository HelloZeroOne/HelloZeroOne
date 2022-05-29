% 设置第二阶段A0偏置值
function [] = Set_A0_s2_offset(obj, input_value)
%   1.输入参数：
%       (1)obj            MAINTENANCETOOLDRIVER类的一个实例
%       (2)input_value    期望的第二阶段A0偏置值，实数，单位：m
%   2.输出参数：无

% 尝试运行，如果失败则弹出提示框，便于在其他电脑上独立运行时排查问题
try
    Local_function_set_A0_s2_offset(obj.telnet_object, input_value);
catch
    uialert(obj.UI_figure, '设置第二阶段A0偏置值时出现异常.', '错误提示');
end

end

% ----- Local function SET_A0_S2_OFFSET -----
function [] = Local_function_set_A0_s2_offset(tcpip_object, value)
%   1.输入参数：
%       (1)tcpip_object    TCP/IP连接对象
%       (2)value           期望的第二阶段A0偏置值，实数，单位：m
%   2.输出参数：无

%% 限制设置的数值范围，转化为整数形式
if 0.2 < value
    temp_value = 0.2;
elseif -0.2 > value
    temp_value = -0.2;
else
    temp_value = value;
end
int_value = round(temp_value * 100);

%% Telnet设置参数
telnet_command = sprintf('YongXiu_A0_offset_step2_set %d,100\n', int_value);
write(tcpip_object, telnet_command);
pause(0.1);

while(0 >= tcpip_object.NumBytesAvailable)
    drawnow
end

read(tcpip_object, tcpip_object.NumBytesAvailable, "char");

end
