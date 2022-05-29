% 删除后退路点
function [processed_path] = Backward_way_point_delete(original_path)
%   1.输入参数：
%       (1)original_path     原始路径，矩阵，至少包括以下前3列
%          ->第一列，x坐标，实数，m
%          ->第二列，y坐标，实数，m
%          ->第三列，横摆角，实数，deg
%   2.输出参数：
%       (1)processed_path    处理后的路径，矩阵，与原始路径格式相同

%% 初始化
offset_angle_threshold = 45; % 向量方位角与横摆角的偏差阈值，deg

%% 计算向量方位角
% 向量方位角初始化，实数，rad
original_orientation_angle = zeros(size(original_path, 1), 1);

% 首尾两点分别采用第2点、倒数第2点的数值
for index = 2 : size(original_path, 1) - 1
    delta_y = original_path(index + 1, 2) - original_path(index - 1, 2);
    delta_x = original_path(index + 1, 1) - original_path(index - 1, 1);
    original_orientation_angle(index) = atan2(delta_y, delta_x);
end
original_orientation_angle(1) = original_orientation_angle(2);
original_orientation_angle(end) = original_orientation_angle(end - 1);

%% 提取向量方位角与横摆角差值（取模到-180~180度）绝对值小于等于阈值的路点
processed_path = original_path(offset_angle_threshold >= abs(mod(...
    rad2deg(original_orientation_angle) - original_path(:, 3) + 540, 360) - 180), :);

end
