% 轨迹曲率分析
function [analysis_table] = Trajectory_curvature_analyze(trajectory_data_table)
%   1.输入参数：
%       (1)trajectory_data_table     轨迹数据表格，必须拥有curvature、cumulative_length列
%   2.输出参数：
%       (1)analysis_table            分析结果表格

%% 数据预处理
% 初始化
sampling_frequency = 20;                                          % 采样频率，Hz
curvature_original = trajectory_data_table.('curvature');         % 原始曲率，1/m
queue_length       = length(curvature_original);                  % 输入信号长度，无量纲
input_queue        = zeros(queue_length, 1);                      % 输入信号序列，无量纲
frequency_queue    = transpose(sampling_frequency * (...          % 频率序列，Hz
    0 : (floor(queue_length / 2))) / queue_length);
epsilon            = 1e8;                                         % 采样精度，无量纲（可用于零值判断）

% 输入原始曲率
for index = 1 : queue_length
    if epsilon > abs(curvature_original(index)) || ...
            1 == curvature_original(index) || ...
            length(curvature_original) == curvature_original(index)
        input_queue(index) = curvature_original(index);
    else
        input_queue(index) = mean([curvature_original(index - 1), ...
            curvature_original(index + 1)]);
    end
end

%% 对轨迹数据记录文件中的曲率信号进行FFT分析
% 对输入序列进行傅里叶变换
input_fft = fft(input_queue);

% 计算双侧频谱P2，然后基于P2和偶数信号长度queue_length计算单侧频谱P1
spectrum_input2 = abs(input_fft / queue_length);
spectrum_input1 = spectrum_input2(1 : floor(queue_length / 2) + 1);
spectrum_input1(2 : end - 1) = 2 * spectrum_input1(2 : end - 1);

%% 对原始曲率信号进行低通滤波
% 初始化
curvature_lowpass    = zeros(queue_length, 1);
curvature_lowpass(1) = input_queue(1);
lowpass_coefficient  = 0.08;

% 对输入信号序列逐一进行低通滤波
for index = 2 : queue_length
    curvature_lowpass(index) = Lowpass_filter(input_queue(index), ...
        curvature_lowpass(index - 1), lowpass_coefficient);
end

%% 对低通滤波曲率信号进行平均值滤波
% 初始化
filter_buffer_length = 30;
curvature_average    = zeros(queue_length, 1);
filter_buffer        = curvature_lowpass(1 : filter_buffer_length);

% 对于前filter_buffer_length个平均值滤波后的曲率，直接采用对应的低通滤波曲率
curvature_average(1 : filter_buffer_length) = curvature_lowpass(1 : filter_buffer_length);

% 对于filter_buffer_length之后的低通滤波曲率进行平均值滤波后的曲率
for index1 = filter_buffer_length + 1 : queue_length
    % 更新滤波缓存数据
    for index2 = 2 : filter_buffer_length
        filter_buffer(index2 - 1) = filter_buffer(index2);        
    end
    filter_buffer(filter_buffer_length) = curvature_lowpass(index1);
    
    % 采样滤波缓存内数据进行平均值滤波
    curvature_average(index1) = Average_filter(filter_buffer, filter_buffer_length);
end

%% 合成分析结果表格
% 先将相关信号合成临时结构体
temp_struct.('frequency') = frequency_queue;
temp_struct.('original_curvature_spectrum') = spectrum_input1;
temp_struct.('cumulative_length') = trajectory_data_table.('cumulative_length');
temp_struct.('original_curvature') = curvature_original;
temp_struct.('lowpass_curvature') = curvature_lowpass;
temp_struct.('average_curvature') = curvature_average;

% 再将临时结构体转化成分析结果表格(为了将长度不规则的信号用NaN补齐)
analysis_table = Irregular_struct2table(temp_struct);

end
