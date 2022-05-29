% 路径插值
function [interpolated_path] = Path_interpolate(original_path)
%   1.输入参数：
%       (1)original_path        待插值的原始路径，矩阵，至少包含前3列
%          ->第1列为x，第2列为y，第3列为theta(rad)
%   2.输出参数：
%       (1)interpolated_path    插值后的路径，矩阵，至少包含前3列
%          ->第1列为x，第2列为y，第3列为theta(deg)

%% 初始化
% 计算原始路径累计长度
delta_x = original_path(2 : end, 1) - original_path(1 : end - 1, 1);
delta_y = original_path(2 : end, 2) - original_path(1 : end - 1, 2);
length = sum(sqrt(delta_x.^2 + delta_y.^2));

% 插值路点间隔
delta_s = 0.01;

% 创建插值路径，前三列依次为x(m)，y(m)，theta(deg)
interpolated_path = zeros(round(length / delta_s) + 100, size(original_path, 2));

% 其他辅助变量
previous_tail_x          = original_path(1, 1); % 上一个循环结束生成的插值点序列尾部点x
previous_tail_y          = original_path(1, 2); % 上一个循环结束生成的插值点序列尾部点y
previous_tail_theta      = original_path(1, 3); % 上一个循环结束生成的插值点序列尾部点theta
temp_index               = 1;                   % 临时索引，用于拼接插值路点

%% 遍历所有路点进行三次样条曲线插值
for index = 1 : size(original_path, 1) - 1
    % 调用两点之间三次样条曲线插值函数，起始点为上一个循环结束生成的插值点序列尾部点，确保点序列间隔均匀
    [temp_x, temp_y, temp_theta, ~] = Two_point_cubic_interpolate(...
        previous_tail_x, previous_tail_y, previous_tail_theta, ...
        original_path(index + 1, 1), original_path(index + 1, 2), ...
        original_path(index + 1, 3), delta_s);
    
    % 将每次插值后的点序列（除尾部最后一个点）补到上一个循环结束生成的插值点序列末尾
    interpolated_path(temp_index : temp_index + size(temp_x, 1) - 2, 1) = ...
        temp_x(1 : end - 1);
    interpolated_path(temp_index : temp_index + size(temp_y, 1) - 2, 2) = ...
        temp_y(1 : end - 1);
    interpolated_path(temp_index : temp_index + size(temp_theta, 1) - 2, 3) = ...
        rad2deg(temp_theta(1 : end - 1));
    
    % 将原始路径的其他属性复制到插值后的点序列
    interpolated_path(temp_index : temp_index + size(temp_x, 1) - 2, 4 : end) = ...
        repmat(original_path(index, 4 : end), size(temp_x, 1) - 1, 1);
    
    % 更新上一个循环结束生成的插值点序列尾部点
    previous_tail_x = temp_x(end);
    previous_tail_y = temp_y(end);
    previous_tail_theta = temp_theta(end);
    
    % 更新临时索引
    temp_index = temp_index + size(temp_x, 1) - 1;
end

%% 补充最后一个插值路点
interpolated_path(temp_index, 1) = previous_tail_x;
interpolated_path(temp_index, 2) = previous_tail_y;
interpolated_path(temp_index, 3) = rad2deg(previous_tail_theta);

%% 补充原始路径终点
interpolated_path(temp_index + 1, 1) = original_path(end, 1);
interpolated_path(temp_index + 1, 2) = original_path(end, 2);
interpolated_path(temp_index + 1, 3) = rad2deg(rem(original_path(end, 3) + ...
    2 * pi, 2 * pi));

%% 将原始路径的其他属性复制到插值后的点序列
interpolated_path(temp_index : temp_index + 1, 4 : end) = repmat(...
    original_path(end, 4 : end), 2, 1);

%% 清除多余的无效零点
interpolated_path(all(interpolated_path == 0, 2), :) = [];

end
