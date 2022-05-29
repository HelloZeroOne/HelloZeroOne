% 获取原始方向盘转角
function original_steering_wheel_angle = Get_original_steering_wheel_angle(obj)
%   1.输入参数：
%       (1)obj                              MAINTENANCETOOLDRIVER类的一个实例
%   2.输出参数：
%       (1)original_steering_wheel_angle    原始方向盘转角，实数，单位：deg

% 尝试运行，如果失败则弹出提示框，便于在其他电脑上独立运行时排查问题
try
    original_steering_wheel_angle = ...
        Local_function_get_original_steering_wheel_angle(obj.telnet_object);
catch
    uialert(obj.UI_figure, '获取原始方向盘转角时出现异常.', '错误提示');
end

end

% ----- Local function GET_ORIGINAL_STEERING_WHEEL_ANGLE -----
function result = Local_function_get_original_steering_wheel_angle(tcpip_object)
%   1.输入参数：
%       (1)tcpip_object    TCP/IP连接对象
%   2.输出参数：
%       (1)result          原始方向盘转角，实数，单位：deg

%% Telnet查询自动转向控制器数据
telnet_command = ['Auto_steering_ECU_data_show', newline];
write(tcpip_object, telnet_command);
pause(0.1);

while(0 >= tcpip_object.NumBytesAvailable)
    drawnow
end

response = read(tcpip_object, tcpip_object.NumBytesAvailable, "char");
value = regexp(response, '[+-]?\d+\.?\d*', 'match');

%% 无法按指定格式识别到数据时，说明没有初始版本软件，强制定义数值为0
if 3 > length(value)
    result = 0;
else
    result = sscanf(value{1}, '%f');
end

end
