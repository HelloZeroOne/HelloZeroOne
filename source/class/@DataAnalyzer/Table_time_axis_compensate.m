% 为表格数据集拆分构建时分秒三列信号，补偿时间轴精度
function [obj] = Table_time_axis_compensate(obj)
%   1.输入参数：
%       (1)obj    DATAANALYZER类的一个实例
%   2.输出参数：
%       (1)obj    DATAANALYZER类的一个实例

%% 将原始时间轴换算成绝对时间，分割为时、分、秒三个信号，以便在sdi中定位时间点
if ~isempty(obj.data_collection.('time_axis'))
    
    % 按照时间类型的数据进行处理
    absolute_time = datetime(obj.data_collection.('time_axis'), ...
        'ConvertFrom', 'posixtime', 'Format', 'HH:mm:ss.SSS');
    [hour, minute, second] = hms(absolute_time);
    if ~isempty(obj.data_collection)
        obj.data_collection.('时间轴-时') = hour;
        obj.data_collection.('时间轴-分') = minute;
        obj.data_collection.('时间轴-秒') = second;
    end
    
    % 检查数据中是否存在重复时间，通常的数据记录精度只到秒级，存在大量重复时间
    [duplicate_value, ~, unique_value, duplicate_times] = ...
        Duplicate_value_check(absolute_time);
    
    % 如果时间重复，需要补偿精度
    if ~isempty(duplicate_value)
        
        % 计算唯一时间的最小增量，换算到毫秒级
        delta_time = min(diff(unique_value));
        [~, ~, delta_second] = hms(delta_time);
        delta_milliseconds = delta_second ./ duplicate_times;
        
        % 构建精度补偿列向量
        compensation_vector = zeros(size(absolute_time));
        sum_duplicate_times = cumsum(duplicate_times);
        
        % 辅助索引初始化
        temp_index = 1;
        
        % 为数据集中间部分构建时间精度补偿向量
        for index = 1 : length(duplicate_times)
            
            % 采用最小时间增量对重复时间进行线性插值补偿
            compensation_vector(temp_index : sum_duplicate_times(index)) = ...
                transpose(0 : duplicate_times(index) - 1) * delta_milliseconds(index);
            
            % 更新辅助索引
            temp_index = temp_index + duplicate_times(index);
            
        end
        
        % 为数据集时间轴补偿时间精度
        obj.data_collection.('time_axis') = ...
            obj.data_collection.('time_axis') + compensation_vector;
        
    end
    
end

end
