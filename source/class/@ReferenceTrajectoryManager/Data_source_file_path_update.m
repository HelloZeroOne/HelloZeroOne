% 更新数据源文件路径
function [obj] = Data_source_file_path_update(obj)
%   1.输入参数：
%       (1)obj    REFERENCETRAJECTORYMANAGER类的一个实例
%   2.输出参数：无
%       (1)obj    REFERENCETRAJECTORYMANAGER类的一个实例

%% 初始化
% 新增数据源文件使能字符串
add_data_source_file_enable_string = 'Y';

% 数据源文件索引
data_source_file_index = 2;

% 清空数据源文件路径
obj.data_source_file_path = string.empty;

% 轨迹暂存文件管理目录
trajectory_storage_directory = fullfile(pwd, '../data/trajectory/storage/');

%% 更新第1个数据源文件（主文件）路径
% 选择inspector导出的数据记录文件
[recorded_file, recorded_file_path] = uigetfile({'*.mat', 'SDI files (*.mat)'; ...
    '*.xls', 'TDS files (*.xls)'}, '请选择第1个路点采集数据记录文件（主文件）');
if isequal(0, recorded_file)
    warning('未选择路点采集数据记录文件！');
    return;
end

% 获取原始数据源文件扩展名
[~, ~, data_source_file_extension] = fileparts(recorded_file);

% 按指定格式拼接数据源文件名
data_source_file_name = append(obj.name, '_数据源文件_', num2str(1), ...
    data_source_file_extension);

% 保存数据源文件路径
obj.data_source_file_path(1) = fullfile(trajectory_storage_directory, ...
    obj.name, data_source_file_name);

% 复制文件到轨迹暂存目录下轨迹名称对应的文件夹中
copyfile(fullfile(recorded_file_path, recorded_file), obj.data_source_file_path(1));

%% 按需更新数据源文件路径
while contains(add_data_source_file_enable_string, {'Y', 'y', 'YES', 'Yes', 'yes'})
    tips = sprintf('->是否新增%d号数据源文件?（Y/N） [回车默认N]: ', data_source_file_index);
    input_enable_string = input(tips, 's');
    if isempty(input_enable_string)
        input_enable_string  = 'N';
    end
    
    if contains(input_enable_string, {'Y', 'y', 'YES', 'Yes', 'yes'})
        
        % 选择inspector导出的数据记录文件
        data_source_file_choose_tips = sprintf('请选择第%d个路点采集数据记录文件', ...
            data_source_file_index);
        [temp_recorded_file, temp_recorded_file_path] = uigetfile({'*.mat', ...
            'SDI files (*.mat)'; '*.xls', 'TDS files (*.xls)'}, ...
            data_source_file_choose_tips);
        if isequal(0, temp_recorded_file)
            warning('未选择路点采集数据记录文件！');
            return;
        end
        
        % 获取原始数据源文件扩展名
        [~, ~, temp_data_source_file_extension] = fileparts(temp_recorded_file);
        
        % 按指定格式拼接数据源文件名
        temp_data_source_file_name = append(obj.name, '_数据源文件_', ...
            num2str(data_source_file_index), temp_data_source_file_extension);
        
        % 保存数据源文件路径
        obj.data_source_file_path(data_source_file_index) = fullfile(...
            trajectory_storage_directory, obj.name, temp_data_source_file_name);
        
        % 复制文件到轨迹暂存目录下轨迹名称对应的文件夹中
        copyfile(fullfile(temp_recorded_file_path, temp_recorded_file), ...
            obj.data_source_file_path(data_source_file_index));
        
    end
    
    % 更新使能结果、数据源文件索引
    add_data_source_file_enable_string = input_enable_string;
    data_source_file_index = data_source_file_index + 1;
    
end

%% 设置直接使用组合惯导位姿换算使能
GNSS_pose_convert_enable_string = input(...
    '->是否直接使用组合惯导位姿换算相对东北天坐标（Y/N） [回车默认N]: ', 's');
if isempty(GNSS_pose_convert_enable_string)
    GNSS_pose_convert_enable_string = 'N';
end
if contains(GNSS_pose_convert_enable_string, ...
        {'Y', 'y', 'YES', 'Yes', 'yes'})
    obj.GNSS_pose_convert_enable = true;
else
    obj.GNSS_pose_convert_enable = false;
end

end
