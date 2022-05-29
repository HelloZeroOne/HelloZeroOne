% 刷新ADAS配置文件
function [] = ADAS_config_file_refresh(obj, file_name)
%   1.输入参数：
%       (1)obj          MAINTENANCETOOLDRIVER类的一个实例
%       (2)file_name    配置文件名称，字符数组
%   2.输出参数：无

% 尝试运行，如果失败则弹出提示框，便于在其他电脑上独立运行时排查问题
try
    Local_function_ADAS_config_file_refresh(obj.telnet_object, ...
        obj.tram_type_symbols, obj.tram_type_index, obj.cab_index, file_name);
catch
    uialert(obj.UI_figure, '刷新ADAS配置文件时出现异常.', '错误提示');
end

end

% ----- Local function ADAS_CONFIG_FILE_REFRESH -----
function [] = Local_function_ADAS_config_file_refresh(tcpip_object, ...
    tram_type_symbols, tram_type_index, cab_index, file_name)
%   1.输入参数：
%       (1)tcpip_object         TCP/IP连接对象
%       (2)tram_type_symbols    英文版车型代号，cell
%       (3)tram_type_index      车型索引，double
%       (4)cab_index            驾驶室索引，double
%       (5)file_name            配置文件名称，字符数组
%   2.输出参数：无

%% Telnet控制指令初始化
telnet_unlock_command1 = ['ucmd', newline];
telnet_unlock_command2 = ['uk', newline];

%% 控制器解锁
write(tcpip_object, telnet_unlock_command1);
pause(0.1);

while(0 >= tcpip_object.NumBytesAvailable)
    drawnow
end

read(tcpip_object, tcpip_object.NumBytesAvailable);

write(tcpip_object, telnet_unlock_command2);
pause(0.1);

while(0 >= tcpip_object.NumBytesAvailable)
    drawnow
end

read(tcpip_object, tcpip_object.NumBytesAvailable);

%% 建立FTP连接
ftp_object = ftp(tcpip_object.Address, 'G300PU', 'G300PU');

%% 删除控制器内原有配置文件
cd(ftp_object, 'tffs');
files_list = dir(ftp_object);
index = strcmp({files_list(:).name}, file_name) == 1;
file_result = files_list(index);
if ~isempty(file_result)
    delete(ftp_object, file_result.name);
end

%% 根据输入的驾驶室索引、车型索引，生成目标码所在文件夹路径
if 0 == tram_type_index
    error('未定义的车型.');
else
    if 1 == cab_index
        software_files_directory_path = [getenv('temp'), ...
            '\UpdateFiles\01-PU300\', char(tram_type_symbols{...
            tram_type_index + 1}), '\MC1\'];
    elseif 2 == cab_index
        software_files_directory_path = [getenv('temp'), ...
            '\UpdateFiles\01-PU300\', char(tram_type_symbols{...
            tram_type_index + 1}), '\MC2\'];
    else
        error('未定义的驾驶室代号.');
    end
end

%% 上传ADAS配置文件
mput(ftp_object, [software_files_directory_path, file_name]);

%% 文件上传完毕后关闭FTP连接
close(ftp_object);

end
