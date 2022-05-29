% 设置地图管理单元的参考轨迹索引
function [] = Set_reference_trajectory_index(obj, set_value)
%   1.输入参数：
%       (1)obj          MAINTENANCETOOLDRIVER类的一个实例
%       (2)set_value    设置数值，double
%   2.输出参数：无

% 尝试运行，如果失败则弹出提示框，便于在其他电脑上独立运行时排查问题
try
    Local_function_set_reference_trajectory_index(obj.telnet_object, set_value);
catch
    uialert(obj.UI_figure, '设置地图管理单元的参考轨迹索引时出现异常.', '错误提示');
end

end

% ----- Local function SET_REFERENCE_TRAJECTORY_INDEX -----
function [] = Local_function_set_reference_trajectory_index(tcpip_object, set_value)
%   1.输入参数：
%       (1)tcpip_object    TCP/IP连接对象
%       (2)set_value       设置数值，double
%   2.输出参数：无

%% Telnet设置地图管理单元的参考轨迹索引
telnet_command = ['MMU_reference_trajectory_index_set ', num2str(round(set_value)), newline];
write(tcpip_object, telnet_command);
pause(0.1);

while 0 >= tcpip_object.NumBytesAvailable
    drawnow;
end

read(tcpip_object, tcpip_object.NumBytesAvailable, "char");

end
