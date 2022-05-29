% 一阶低通平均值滤波器
function [y_filter] = Lowpass_average_filter(y_queue, coeff, N)
%   1.输入参数：
%       (1)y_queue       待滤波数据序列
%       (2)coeff         低通滤波系数,该系数取值范围为0~1，值越大，曲线越平滑
%       (3)N             待滤波数据序列长度
%   2.输出参数：
%       (1)y_filter      滤波后的数据

%% 数据预处理
% 初始化
queue_length = length(y_queue);                  % 输入信号序列长度，无量纲
input_queue  = zeros(queue_length, 1);           % 输入信号序列，无量纲

% 输入原始信号
for index = 1 : queue_length
    if (-1e8 < y_queue(index) && 1e8 > y_queue(index)) || ...
            1 == y_queue(index) || ...
            length(y_queue) == y_queue(index)
        input_queue(index) = y_queue(index);
    else
        input_queue(index) = mean([y_queue(index - 1), ...
            y_queue(index + 1)]);
    end
end

%% 对原始信号进行低通滤波
% 初始化
y_lowpass    = zeros(queue_length, 1);
y_lowpass(1) = input_queue(1);

% 对输入信号序列逐一进行低通滤波
for index = 2 : queue_length
    y_lowpass(index) = Lowpass_filter(input_queue(index), y_lowpass(index - 1), coeff);
end

%% 对低通滤波信号进行平均值滤波
% 初始化
y_average     = zeros(queue_length, 1);
filter_buffer = y_lowpass(1 : N);

% 对于前N个平均值滤波后的信号，直接采用对应的低通滤波信号
y_average(1 : N) = y_lowpass(1 : N);

% 对于N之后的低通滤波信号进行平均值滤波
for index1 = N + 1 : queue_length
    % 更新滤波缓存数据
    for index2 = 2 : N
        filter_buffer(index2 - 1) = filter_buffer(index2);        
    end
    filter_buffer(N) = y_lowpass(index1);
    
    % 采样滤波缓存内数据进行平均值滤波
    y_average(index1) = Average_filter(filter_buffer, N);
end

%% 采用最后平均值滤波的结果输出
y_filter = y_average;

end

