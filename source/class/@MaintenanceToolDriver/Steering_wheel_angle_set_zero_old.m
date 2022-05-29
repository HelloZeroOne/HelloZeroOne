% 备用指令设置方向盘机械零位
function [] = Steering_wheel_angle_set_zero_old(obj)
%   1.输入参数：
%       (1)obj    MAINTENANCETOOLDRIVER类的一个实例
%   2.输出参数：无

% 尝试运行，如果失败则弹出提示框，便于在其他电脑上独立运行时排查问题
try
    Local_function_steering_wheel_angle_set_zero_old(obj.telnet_object);
catch
    uialert(obj.UI_figure, '备用指令设置方向盘机械零位时出现异常.', '错误提示');
end

end

% ----- Local function STEERING_WHEEL_ANGLE_SET_ZERO_OLD -----
function [] = Local_function_steering_wheel_angle_set_zero_old(tcpip_object)
%   1.输入参数：
%       (1)tcpip_object    TCP/IP连接对象
%   2.输出参数：无

%% Telnet备用设置指令初始化
telnet_command1 = ['Steering_wheel_set_zero_old', newline];
telnet_command2 = ['Steering_wheel_set_normal_old', newline];

%% Telnet设置方向盘机械零位
write(tcpip_object, telnet_command1);
pause(6);
write(tcpip_object, telnet_command2);
pause(0.1);

while(0 >= tcpip_object.NumBytesAvailable)
    drawnow
end

read(tcpip_object, tcpip_object.NumBytesAvailable, "char");

end
