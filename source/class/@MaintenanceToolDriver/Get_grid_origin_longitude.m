% 获取相对坐标原点经度数值
function grid_origin_longitude = Get_grid_origin_longitude(obj)
%   1.输入参数：
%       (1)obj                      MAINTENANCETOOLDRIVER类的一个实例
%   2.输出参数：
%       (1)grid_origin_longitude    相对坐标原点经度数值，实数，单位：deg

% 尝试运行，如果失败则弹出提示框，便于在其他电脑上独立运行时排查问题
try
    grid_origin_longitude = Local_function_get_grid_origin_longitude(obj.telnet_object);
catch
    uialert(obj.UI_figure, '获取相对坐标原点经度数值时出现异常.', '错误提示');
end

end

% ----- Local function GET_GRID_ORIGIN_LONGITUDE -----
function result = Local_function_get_grid_origin_longitude(tcpip_object)
%   1.输入参数：
%       (1)tcpip_object    TCP/IP连接对象
%   2.输出参数：
%       (1)result          相对坐标原点经度数值，实数，单位：deg

%% Telnet查询相对坐标原点信息
telnet_command = ['MMU_grid_origin_info_show', newline];
write(tcpip_object, telnet_command);
pause(0.1);

while 0 >= tcpip_object.NumBytesAvailable
    drawnow;
end

response = read(tcpip_object, tcpip_object.NumBytesAvailable, "char");
value = regexp(response, '[+-]?\d+\.?\d*', 'match');

%% 无法按指定格式识别到数据时，说明没有初始版本软件，强制定义数值为0
if 2 > length(value)
    result = 0;
else
    result = sscanf(value{2}, '%f');
end

end
