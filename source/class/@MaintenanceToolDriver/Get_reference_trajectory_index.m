% 获取参考轨迹索引
function reference_trajectory_index = Get_reference_trajectory_index(obj)
%   1.输入参数：
%       (1)obj                           MAINTENANCETOOLDRIVER类的一个实例
%   2.输出参数：
%       (1)reference_trajectory_index    参考轨迹索引，正整数，无量纲

% 尝试运行，如果失败则弹出提示框，便于在其他电脑上独立运行时排查问题
try
    reference_trajectory_index = Local_function_get_reference_trajectory_index(obj.telnet_object);
catch
    uialert(obj.UI_figure, '获取参考轨迹索引时出现异常.', '错误提示');
end

end

% ----- Local function GET_REFERENCE_TRAJECTORY_INDEX -----
function result = Local_function_get_reference_trajectory_index(tcpip_object)
%   1.输入参数：
%       (1)tcpip_object    TCP/IP连接对象
%   2.输出参数：
%       (1)result          参考轨迹索引，正整数，无量纲

%% Telnet查询参考轨迹索引信息
telnet_command = ['MMU_reference_trajectory_index_show', newline];
write(tcpip_object, telnet_command);
pause(0.1);

while 0 >= tcpip_object.NumBytesAvailable
    drawnow;
end

response = read(tcpip_object, tcpip_object.NumBytesAvailable, "char");
value = regexp(response, '\d+', 'match');

%% 无法按指定格式识别到数据时，说明没有初始版本软件，强制定义数值为0
if 1 > length(value)
    result = 0;
else
    result = sscanf(value{1}, '%d');
end

end
