% 平均值滤波
function [y_filter] = Average_filter(y_queue, N)
%   1.输入参数：
%       (1)y_queue     待滤波数据序列
%       (2)N           待滤波数据序列长度
%   2.输出参数：
%       (1)y_filter    滤波后的数据

%% 初始化
y_filter = 0;

%% 平均值滤波
% 序列求和
for index = 1 : N
    y_filter = y_filter + y_queue(index);
end

% 对序列和取平均值得到滤波后的数据
y_filter = y_filter / N;

end

