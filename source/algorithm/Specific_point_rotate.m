% 绕指定点旋转指定角度
function [processed_points] = Specific_point_rotate(original_points, specific_point, theta)
%   1.输入参数：
%       (1)original_points     原始点坐标集，实数，无量纲，n×2矩阵
%       (2)specific_point      旋转基点坐标，实数，无量纲
%       (3)theta               期望旋转的角度，实数，rad
%   2.输出参数：
%       (1)processed_points    处理后的点坐标集，实数，无量纲，n×2矩阵

%% 计算转换矩阵
% 旋转矩阵
rotate_matrix = [cos(theta), sin(theta); -sin(theta), cos(theta)];

% 平移矩阵
translation_matrix = specific_point - [0, 0];

%% 将原始点集与指定点一同移动到原点，旋转指定角度后，再一同移动回指定点
processed_points = (original_points - translation_matrix) * ...
    rotate_matrix + translation_matrix;

end
