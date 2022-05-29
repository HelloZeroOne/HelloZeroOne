% 刷新参考轨迹文件
function [] = Reference_trajectory_refresh(obj, trajectory_file_name)
%   1.输入参数：
%       (1)obj    MAINTENANCETOOLDRIVER类的一个实例
%   2.输出参数：无

% 尝试运行，如果失败则弹出提示框，便于在其他电脑上独立运行时排查问题
try
    Local_function_reference_trajectory_refresh(obj.telnet_object, ...
        trajectory_file_name);
catch
    uialert(obj.UI_figure, '刷新参考轨迹文件时出现异常.', '错误提示');
end

end

% ----- Local function REFERENCE_TRAJECTORY_REFRESH -----
function [] = Local_function_reference_trajectory_refresh(tcpip_object, ...
    trajectory_file_name)
%   1.输入参数：
%       (1)tcpip_object            TCP/IP连接对象
%       (2)trajectory_file_name    待更新的参考轨迹文件名，字符数组
%   2.输出参数：无

%% 拆分文件名，剥离路径信息
[~, name_part, extension_part] = fileparts(trajectory_file_name);
temp_file_name = [name_part, extension_part];

%% Telnet控制指令初始化
telnet_unlock_command1 = ['ucmd', newline];
telnet_unlock_command2 = ['uk', newline];

%% 控制器解锁
write(tcpip_object, telnet_unlock_command1);
pause(0.1);

while 0 >= tcpip_object.NumBytesAvailable
    drawnow;
end

read(tcpip_object, tcpip_object.NumBytesAvailable);

write(tcpip_object, telnet_unlock_command2);
pause(0.1);

while 0 >= tcpip_object.NumBytesAvailable
    drawnow;
end

read(tcpip_object, tcpip_object.NumBytesAvailable);

%% 建立FTP连接
ftp_object = ftp(tcpip_object.Address, 'G300PU', 'G300PU');

%% 删除控制器内原有配置文件
cd(ftp_object, 'tffs');
files_list = dir(ftp_object);
index = strcmp({files_list(:).name}, temp_file_name) == 1;
file_result = files_list(index);
if ~isempty(file_result)
    delete(ftp_object, file_result.name);
end

%% 合成参考轨迹所在文件夹路径
software_files_directory_path = [getenv('temp'), ...
    '\UpdateFiles\Reference_trajectories\'];

%% 上传ADAS配置文件
mput(ftp_object, [software_files_directory_path, temp_file_name]);

%% 文件上传完毕后关闭FTP连接
close(ftp_object);

end
