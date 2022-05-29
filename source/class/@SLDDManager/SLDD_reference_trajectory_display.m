% 显示数据字典中的参考轨迹
function [] = SLDD_reference_trajectory_display(obj, plot_enable)
%   1.输入参数：
%       (1)obj            SLDDMANAGER类的一个实例
%       (2)plot_enable    绘图使能，逻辑类型，不输入该参数默认为false
%   2.输出参数：无

%% 输入参数不够2个时将绘图使能设置为默认值false
if 2 > nargin
    plot_enable = false;
end

%% 打开数据字典
dictionary_object = Simulink.data.dictionary.open(obj.SLDD_file_path);

%% 获取数据字典中的设计数据
design_data_object = getSection(dictionary_object, 'Design Data');

%% 获取数据字典中的参考轨迹相关对象
% 轨迹簇实例
reference_trajectories_object = find(design_data_object, 'Name', 'ReferenceTrajectories');
if ~isempty(reference_trajectories_object)
    reference_trajectories = getValue(reference_trajectories_object);
else
    close(dictionary_object);
    warning('***在数据字典中未发现有效参考轨迹信息***');
    return;
end

% 获取结构体参考轨迹成员名称
reference_trajectory_namelist = fieldnames(reference_trajectories);

% 统计参考轨迹条数
reference_trajectory_number = length(reference_trajectory_namelist);

% 根据参考轨迹条数创建REFERENCETRAJECTORY类的实例
reference_trajectory_obj(reference_trajectory_number, 1) = ReferenceTrajectory;

%% 读取数据字典中参考轨迹信息
[~, dictionary_name, ~] = fileparts(obj.SLDD_file_path);
fprintf('$数据字典【%s】中的轨迹序列如下:\n', dictionary_name);
for index = 1 : reference_trajectory_number
    % 获取当前索引对应的轨迹对象
    temp_trajectories_object = find(design_data_object, 'Name', ...
        sprintf('CONFIG_TRAJECTORY%d', index));
    if ~isempty(temp_trajectories_object)
        temp_trajectories_bus = getValue(temp_trajectories_object);
        fprintf('%d - %s\n', index, temp_trajectories_bus.Description);
    else
        close(dictionary_object);
        warning('***没有找到【%d号】参考轨迹信息***', index);
        return;
    end
    
    % 更新参考轨迹对象属性
    reference_trajectory_obj(index, 1).name = sprintf(...
        '\\fontname{Times New Roman}%d - \\fontname{宋体}%s', ...
        index, temp_trajectories_bus.Description);
    reference_trajectory_obj(index, 1).way_point_properties = struct2table(...
        reference_trajectories.(reference_trajectory_namelist{index}));
end

%% 如果绘图使能有效，选择感兴趣的参考轨迹绘图查看
if plot_enable
    % 需要绘图的轨迹索引（多条轨迹采用下划线_连接）
    input_info = input(...
        '->请输入需要绘图的轨迹索引（多条轨迹采用下划线_连接） [回车默认不绘图]: ', 's');
    if isempty(input_info)
        input_info = "0";
    end
    
    % 将待绘图轨迹索引分割为索引集
    plot_trajectory_index_array = str2double(regexp(input_info, '_', 'split'));
    
    % 如果索引集中不含0，遍历索引级绘图
    if ~ismember(0, plot_trajectory_index_array)
        for index = 1 : length(plot_trajectory_index_array)
            reference_trajectory_obj(plot_trajectory_index_array(index), ...
                1).Reference_trajectory_display('continuous');
        end
    end
end

%% 关闭数据字典
close(dictionary_object);

end
