% 删除表格中的无效数据
function [obj] = Invalid_table_data_delete(obj, related_task_ID_string, ...
    speed_threshold, related_segment_ID_string, related_time_piece_string)
%   1.输入参数：
%       (1)obj                          DATAANALYZER类的一个实例
%       (2)related_task_ID_string       关联的任务ID，字符串
%       (3)speed_threshold              开始采样的速度阈值，正实数，km/h
%       (4)related_task_ID_string       关联的区间代号，字符串，可选参数
%       (5)related_time_piece_string    关联的时间段，字符串，可选参数
%   2.输出参数：
%       (1)obj                          DATAANALYZER类的一个实例

%% 初始化
% 检查输入参数数量
if 5 > nargin
    related_segment_ID_string = "all";
    related_time_piece_string = "all";
end

% 两点重合间隔阈值，m
point_interval_threshold = 1e-3;

%% 去除模型刚开始运行时可能产生的随机数
obj.data_collection(1 : 2, :) = [];

%% 删除低速数据
obj.data_collection(speed_threshold > obj.data_collection.('tram_speed'), :) = [];

%% 删除重复定位数据
% 去除重复定位数据初始化
segment_length = zeros(height(obj.data_collection), 1);

% 计算相邻两点的距离
for index = 2 : height(obj.data_collection)
    segment_length(index) = norm([obj.data_collection.('ENU_x')(index) - ...
        obj.data_collection.('ENU_x')(index - 1), ...
        obj.data_collection.('ENU_y')(index) - ...
        obj.data_collection.('ENU_y')(index - 1)]);
end

% 通过两点距离小于阈值的条件剔除重复定位点，保留前一个定位点
temp_segment_length = [1; segment_length(2 : end)];
obj.data_collection(point_interval_threshold > temp_segment_length, :) = [];

%% 如果任务ID字符串不是all，提取指定任务ID的数据
if ~isequal("all", related_task_ID_string)
    % 将关联的任务ID分割为独立任务ID
    related_task_ID = str2double(unique(regexp(related_task_ID_string, ...
        '_', 'split')));
    
    % 筛取感兴趣的任务ID对应的数据
    obj.data_collection(~ismember(obj.data_collection.('task_ID'), ...
        related_task_ID), :) = [];
    
    % 如果筛取任务ID以后的表格为空，则报错
    if isempty(obj.data_collection)
        error('所选任务ID不存在！');
    end
end

%% 如果区间代号字符串不是all，提取指定区间代号的数据
if ~isequal("all", related_segment_ID_string)
    % 将关联的区间代号分割为独立区间代号
    related_segment_ID = str2double(unique(regexp(related_segment_ID_string, ...
        '_', 'split')));
    
    % 筛取感兴趣的区间代号对应的数据
    obj.data_collection(~ismember(obj.data_collection.(...
        'closest_point_segment_ID'), related_segment_ID), :) = [];
    
    % 如果筛取区间代号以后的表格为空，则报错
    if isempty(obj.data_collection)
        error('所选区间代号不存在！');
    end
end

%% 重建相对时间轴
% 如果起始时间不为0，则将时间轴伴随起点整体平移至起始时间为0的状态
if 0 < obj.data_collection.('time_axis')(1)
    obj.data_collection.('time_axis') = obj.data_collection.('time_axis') - ...
        obj.data_collection.('time_axis')(1);
end

%% 如果时间段字符串不是all，提取指定时间段的数据
if ~isequal("all", related_time_piece_string)
    % 将关联的时间段分割为独立时间
    related_time_piece = str2double(string(regexp(related_time_piece_string, ...
        '[:-]', 'split')));
    
    % 换算起始秒数
    start_second = related_time_piece(1) * 60 * 60 + ...
        related_time_piece(2) * 60 + related_time_piece(3);
    
    % 换算终止秒数
    end_second = related_time_piece(4) * 60 * 60 + ...
        related_time_piece(5) * 60 + related_time_piece(6);
        
    % 筛取感兴趣的时间段对应的数据
    obj.data_collection = obj.data_collection(start_second <= ...
        obj.data_collection.('time_axis') & end_second >= ...
        obj.data_collection.('time_axis'), :);
    
    % 如果筛取时间段以后的表格为空，则报错
    if isempty(obj.data_collection)
        error('所选时间段不存在！');
    end
end

end
