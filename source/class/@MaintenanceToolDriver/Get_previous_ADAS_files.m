% 获取控制器内原有ADAS文件
function [] = Get_previous_ADAS_files(obj)
%   1.输入参数：
%       (1)obj    MAINTENANCETOOLDRIVER类的一个实例
%   2.输出参数：无

% 尝试运行，如果失败则弹出提示框，便于在其他电脑上独立运行时排查问题
try
    Local_function_get_previous_ADAS_files(obj.telnet_object, obj.cab_index);
catch
    uialert(obj.UI_figure, '获取控制器内原有ADAS文件时出现异常.', '错误提示');
end

end

% ----- Local function GET_PREVIOUS_ADAS_FILES -----
function [] = Local_function_get_previous_ADAS_files(tcpip_object, cab_index)
%   1.输入参数：
%       (1)tcpip_object    TCP/IP连接对象
%       (2)cab_index       驾驶室索引，double
%   2.输出参数：无

%% 建立FTP连接
ftp_object = ftp(tcpip_object.Address, 'G300PU', 'G300PU');

%% 进入tffs目录
cd(ftp_object, 'tffs');

%% 根据输入的驾驶室代号，区分车头，选择本地对应车头子文件夹路径
if 1 == cab_index
    backup_directory_path = [getenv('temp'), '\PreviousFilesBackup\MC1'];
elseif 2 == cab_index
    backup_directory_path = [getenv('temp'), '\PreviousFilesBackup\MC2'];
else
    error('未定义的驾驶室代号.');
end

%% 下载控制器内原有文件到本地对应车头子文件夹下
mget(ftp_object, 'ADAS.out', backup_directory_path);
pause(.5);
mget(ftp_object, 'ADASCFG.xml', backup_directory_path);
pause(.5);
mget(ftp_object, 'can_config.xml', backup_directory_path);
pause(.5);
mget(ftp_object, 'MMUCFG.xml', backup_directory_path);
pause(.5);
mget(ftp_object, 'device_config.xml', backup_directory_path);
mget(ftp_object, 'G300CFG.xml', backup_directory_path);
mget(ftp_object, 'start.txt', backup_directory_path);
mget(ftp_object, 'TRDPCFG.xml', backup_directory_path);

%% 文件下载完毕后等待3s，确保文件传输完毕，再关闭FTP连接
pause(3);
close(ftp_object);

end
