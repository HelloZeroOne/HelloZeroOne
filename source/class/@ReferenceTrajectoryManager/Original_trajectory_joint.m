% 接合原始轨迹
function [jointed_trajectory] = Original_trajectory_joint(obj)
%   1.输入参数：
%       (1)obj                   REFERENCETRAJECTORYMANAGER类的一个实例
%   2.输出参数：
%       (1)jointed_trajectory    接合后的轨迹，矩阵，至少包含前7列
%          ->第1列，路点x坐标，实数，m
%          ->第2列，路点y坐标，实数，m
%          ->第3列，路点横摆角，实数，deg
%          ->第4列，区间代号，正整数，无量纲
%          ->第5列，整车车速，非负实数，km/h
%          ->第6列，视觉循迹优先级，自然数，无量纲
%          ->第7列，GNSS循迹优先级，自然数，无量纲

%% 初始化
% 开始采样的车速阈值，km/h
speed_threshold = 0.5;

% 考虑G300数据记录而设置的信号重命名映射表格
signal_rename_mapping_table_file_path = ...
    'Signal_rename_G300_TDS_data_original_trajectory_joint.xlsx';

%% 读取轨迹生成模板表格
trajectory_generate_template_table = readtable(...
    obj.mapping_file_path, 'PreserveVariableNames', true);

%% 解析数据源文件数量
data_source_file_number = size(obj.data_source_file_path, 1);
if 1 > data_source_file_number
    error('无可用数据源文件！');
end

% 与轨迹生成模板表格中定义的数据源数量对比，不匹配的话报错
trajectory_data_source_number = length(unique(...
    trajectory_generate_template_table.('数据源代号')));
if ~isequal(trajectory_data_source_number, data_source_file_number)
    error('数据源文件数量与轨迹生成模板表格中定义的不一致！');
end

%% 遍历导出所有数据源文件内与参考轨迹相关的数据
source_path = cell(data_source_file_number, 1);
for index1 = 1 : data_source_file_number
    
    % 关联的任务ID
    related_task_ID_string = strjoin(transpose(string(...
        trajectory_generate_template_table.('关联的任务ID')(ismember(...
        trajectory_generate_template_table.('数据源代号'), index1), :))), '_');
    
    % 创建数据分析器对象的一个实例
    data_analyzer = DataAnalyzer(obj.data_source_file_path(index1), [...
        '轨迹数据源', char(string(index1))]);
    
    % 为了兼容G300数据记录，导入信号重命名映射表格
    data_analyzer = data_analyzer.Signal_rename_mapping_table_import(...
        signal_rename_mapping_table_file_path);
    
    % 根据直接使用组合惯导位姿换算使能状态获取数据解析文件中的指定信号，并处理
    if obj.GNSS_pose_convert_enable
        
        % 从数据文件中导出数据到数据集中
        data_analyzer = data_analyzer.Record_file_data_export(...
            'task_ID', 'Heading', 'Latitude', 'Longitude', 'tram_speed');
        
        % 如果经纬度超过正常范围，说明数据源是G300平台DR300记录文件，需要乘以10~-7的系数换算成实际值
        if 90 < abs(data_analyzer.data_collection.('Latitude')(1)) || ...
                180 < abs(data_analyzer.data_collection.('Longitude')(1))
            data_analyzer.data_collection.('Latitude') = ...
                data_analyzer.data_collection.('Latitude') * 1e-7;
            data_analyzer.data_collection.('Longitude') = ...
                data_analyzer.data_collection.('Longitude') * 1e-7;
        end
        
        % 将组合惯导给出的位置信息转换成“局部切平面直角坐标系”（东北天ENU)
        for index3 = 1 : height(data_analyzer.data_collection)
            [data_analyzer.data_collection.('ENU_x')(index3), ...
                data_analyzer.data_collection.('ENU_y')(index3), ~] = ...
                GNSS_pose2relative_ENU_m(str2double(obj.grid_origin_latitude), ...
                str2double(obj.grid_origin_longitude), 0, ...
                data_analyzer.data_collection.('Latitude')(index3), ...
                data_analyzer.data_collection.('Longitude')(index3), 0);
        end
        
        % 根据组合惯导航向角换算东北天坐标系下横摆角，取模到-180~180度范围内
        data_analyzer.data_collection.('ENU_yaw_angle') = mod(90 - ...
            data_analyzer.data_collection.('Heading') + 540, 360) - 180;
        
    else
        data_analyzer = data_analyzer.Record_file_data_export(...
            'task_ID', 'ENU_yaw_angle', 'ENU_x', 'ENU_y', 'tram_speed');
    end
    
    % 删除参考轨迹表格中的无效数据
    data_analyzer = data_analyzer.Invalid_table_data_delete(...
        related_task_ID_string, speed_threshold);
    
    % 构建指定路径矩阵
    source_path{index1} = [data_analyzer.data_collection.('ENU_x'), ...
        data_analyzer.data_collection.('ENU_y'), ...
        data_analyzer.data_collection.('ENU_yaw_angle'), ...
        data_analyzer.data_collection.('task_ID'), ...
        data_analyzer.data_collection.('tram_speed'), ...
        zeros(height(data_analyzer.data_collection), 2)];
    
    % 删除后退路点
    source_path{index1} = Backward_way_point_delete(source_path{index1});
    
    % 从轨迹生成模板表格中提取本数据源对应的区间代号
    segment_ID = trajectory_generate_template_table.('区间代号')(ismember(...
        trajectory_generate_template_table.('数据源代号'), index1));
    
    % 生成源路径的任务ID属性关联的分区代号序列
    source_path_segment_ID = zeros(size(source_path{index1}, 1), 1);
    for index2 = 1 : length(segment_ID)
        
        % 将关联任务ID分割为独立任务ID
        related_task_ID = str2double(unique(regexp(string(...
            trajectory_generate_template_table.('关联的任务ID')(ismember(...
            trajectory_generate_template_table.('区间代号'), ...
            segment_ID(index2)))), '_', 'split')));
        
        % 将源路径路点的任务ID映射为对应的区间代号
        source_path_segment_ID(ismember(source_path{index1}(:, 4), ...
            related_task_ID)) = segment_ID(index2);
        
    end
    
    % 将源路径的任务ID属性用关联的分区代号替换
    source_path{index1}(:, 4) = source_path_segment_ID;
end

%% 从指定数据源路径中提取原始参考路径
% 初始化
jointed_trajectory = zeros(size(cell2mat(source_path)));
original_path_index = 1;

% 按照轨迹生成表格定义的区间顺序依次填充原始参考路径
for index = 1 : height(trajectory_generate_template_table)
    
    % 在轨迹生成表格中确定数据源索引
    data_source_index = trajectory_generate_template_table.('数据源代号')(index);
    
    % 根据数据源索引、区间代号提取待填充的源路径
    temp_path = source_path{data_source_index}(...
        ismember(source_path{data_source_index}(:, 4), ...
        trajectory_generate_template_table.('区间代号')(index)), :);
    
    % 对于首个区间之后的区间，根据数据源代号大小关系决定是否进行裁剪适配
    if 1 < index
        
        % 轨迹生成表格上一行的数据源代号小于本行代号时，采用前一段源路径的终点限制
        % 本段源路径的起点（搜索本段源路径与前一段源路径终点最近的点）
        if trajectory_generate_template_table.('数据源代号')(index) > ...
                trajectory_generate_template_table.('数据源代号')(index - 1)
            temp_path_start_index = dsearchn(temp_path(:, 1 : 2), ...
                jointed_trajectory(original_path_index - 1, 1 : 2));
            temp_path(1 : temp_path_start_index, :) = [];
        end
        
        % 轨迹生成表格上一行的数据源代号大于本行代号时，采用本段源路径的起点限制
        % 前一段源路径的终点（搜索前一段源路径与本段源路径起点最近的点）
        if trajectory_generate_template_table.('数据源代号')(index) < ...
                trajectory_generate_template_table.('数据源代号')(index - 1)
            original_path_end_index = dsearchn(jointed_trajectory(1 : ...
                original_path_index - 1, 1 : 2), temp_path(1, 1 : 2));
            jointed_trajectory(original_path_end_index + 1 : original_path_index, ...
                :) = zeros(size(jointed_trajectory(original_path_end_index + 1 : ...
                original_path_index, :)));
            original_path_index = original_path_end_index + 1;
        end
        
    end
    
    % 根据轨迹生成模板文件配置的循迹优先级设置待填充路径对应位置的数值
    temp_path(:, 6 : 7) = repmat([...
        trajectory_generate_template_table.('视觉循迹优先级')(index), ...
        trajectory_generate_template_table.('GNSS循迹优先级')(index)], ...
        size(temp_path, 1), 1);
    
    % 计算待填充的源路径路点数量
    temp_way_point_number = size(temp_path, 1);
    
    % 填充源路径到原始参考路径指定位置
    jointed_trajectory(original_path_index : original_path_index + ...
        temp_way_point_number - 1, :) = temp_path;
    
    % 更新原始参考路径填充辅助索引
    original_path_index = original_path_index + temp_way_point_number;
    
end

%% 清除原始参考路径中多余的无效零点
jointed_trajectory(all(jointed_trajectory == 0, 2), :) = [];

end
