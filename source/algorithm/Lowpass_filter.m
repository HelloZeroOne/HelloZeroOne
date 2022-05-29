% 一阶低通滤波器
function [y_filter] = Lowpass_filter(y_current, y_previous, coeff)
%   1.输入参数：
%       (1)y_current     本周期数据
%       (2)y_previous    上周期数据
%       (3)coeff         低通滤波系数,该系数取值范围为0~1，值越大，曲线越平滑
%   2.输出参数：
%       (1)y_filter      滤波后的数据

%% 参数传递
% 对输入的低通滤波系数进行数值范围限制
alpha = max(min(coeff, 1), 0); 

%% 公式计算
y_filter = alpha * y_current + (1 - alpha) * y_previous;

end

