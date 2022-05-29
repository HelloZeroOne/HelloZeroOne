% 设置相对坐标原点纬度
function [] = Set_grid_origin_latitude(obj, set_value)
%   1.输入参数：
%       (1)obj          MAINTENANCETOOLDRIVER类的一个实例
%       (2)set_value    设置数值，string
%   2.输出参数：无

% 尝试运行，如果失败则弹出提示框，便于在其他电脑上独立运行时排查问题
try
    Local_function_set_grid_origin_latitude(obj.telnet_object, set_value);
catch
    uialert(obj.UI_figure, '设置相对坐标原点纬度时出现异常.', '错误提示');
end

end

% ----- Local function SET_GRID_ORIGIN_LATITUDE -----
function [] = Local_function_set_grid_origin_latitude(tcpip_object, set_value)
%   1.输入参数：
%       (1)tcpip_object    TCP/IP连接对象
%       (2)set_value       设置数值，string
%   2.输出参数：无

%% Telnet设置相对坐标原点纬度数值
telnet_command = ['MMU_grid_origin_latitude_set "', char(set_value), '"', newline];
write(tcpip_object, telnet_command);
pause(0.1);

while 0 >= tcpip_object.NumBytesAvailable
    drawnow;
end

read(tcpip_object, tcpip_object.NumBytesAvailable, "char");

end
