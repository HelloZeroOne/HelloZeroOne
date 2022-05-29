% 刷新ADAS软件
function [] = ADAS_software_refresh(obj)
%   1.输入参数：
%       (1)obj    MAINTENANCETOOLDRIVER类的一个实例
%   2.输出参数：无

% 尝试运行，如果失败则弹出提示框，便于在其他电脑上独立运行时排查问题
try
    Local_function_ADAS_software_refresh(obj.telnet_object, ...
        obj.tram_type_symbols, obj.tram_type_index, obj.cab_index);
catch
    uialert(obj.UI_figure, '刷新ADAS软件时出现异常.', '错误提示');
end

end

% ----- Local function ADAS_SOFTWARE_REFRESH -----
function [] = Local_function_ADAS_software_refresh(tcpip_object, ...
    tram_type_symbols, tram_type_index, cab_index)
%   1.输入参数：
%       (1)tcpip_object         TCP/IP连接对象
%       (2)tram_type_symbols    英文版车型代号，cell
%       (3)tram_type_index      车型索引，double
%       (4)cab_index            驾驶室索引，double
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

%% 删除控制器内可能存在的相关文件
cd(ftp_object, 'tffs');
files_list = dir(ftp_object);
index1 = strcmp({files_list(:).name}, 'ADAS.out') == 1;
file_result1 = files_list(index1);
index2 = strcmp({files_list(:).name}, 'ADASCFG.xml') == 1;
file_result2 = files_list(index2);
index3 = strcmp({files_list(:).name}, 'can_config.xml') == 1;
file_result3 = files_list(index3);
index4 = strcmp({files_list(:).name}, 'device_config.xml') == 1;
file_result4 = files_list(index4);
index5 = strcmp({files_list(:).name}, 'G300CFG.xml') == 1;
file_result5 = files_list(index5);
index6 = strcmp({files_list(:).name}, 'start.txt') == 1;
file_result6 = files_list(index6);
index7 = strcmp({files_list(:).name}, 'TRDPCFG.xml') == 1;
file_result7 = files_list(index7);
index8 = strcmp({files_list(:).name}, 'MMUCFG.xml') == 1;
file_result8 = files_list(index8);

if ~isempty(file_result1)
    delete(ftp_object, file_result1.name);
end
if ~isempty(file_result2)
    delete(ftp_object, file_result2.name);
end
if ~isempty(file_result3)
    delete(ftp_object, file_result3.name);
end
if ~isempty(file_result4)
    delete(ftp_object, file_result4.name);
end
if ~isempty(file_result5)
    delete(ftp_object, file_result5.name);
end
if ~isempty(file_result6)
    delete(ftp_object, file_result6.name);
end
if ~isempty(file_result7)
    delete(ftp_object, file_result7.name);
end
if ~isempty(file_result8)
    delete(ftp_object, file_result8.name);
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

%% 上传循迹控制软件目标码文件
mput(ftp_object, [getenv('temp'), '\UpdateFiles\01-PU300\00-Applications\ADAS.out']);
mput(ftp_object, [software_files_directory_path, 'ADASCFG.xml']);
mput(ftp_object, [software_files_directory_path, 'can_config.xml']);
mput(ftp_object, [software_files_directory_path, 'device_config.xml']);
mput(ftp_object, [software_files_directory_path, 'G300CFG.xml']);
mput(ftp_object, [software_files_directory_path, 'start.txt']);
mput(ftp_object, [software_files_directory_path, 'TRDPCFG.xml']);
mput(ftp_object, [software_files_directory_path, 'MMUCFG.xml']);

%% 文件上传完毕后关闭FTP连接
close(ftp_object);

end
