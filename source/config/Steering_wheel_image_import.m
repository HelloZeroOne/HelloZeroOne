% 导入方向盘图片为点集
function [image_points, center_point] = Steering_wheel_image_import(jpg_file_name, theta)
%   1.输入参数：
%       (1)x                   jpg图片文件名，字符数组或字符串
%       (2)theta               图片导入初始旋转角度，实数，rad
%   2.输出参数：
%       (1)image_points        处理成像素点后的图片点集，正整数，像素坐标
%       (2)center_point        图片中心坐标，实数，像素坐标

%% 导入图片
image_data = imread(jpg_file_name);

% 获取图片中心点坐标
x = (1 + size(image_data, 1)) / 2;
y = (1 + size(image_data, 2)) / 2;
center_point = [x, y];

%% 将彩色图片转换为灰度图
gray_data = rgb2gray(image_data);

%% 提取灰度小于200的像素点作为方向盘的组成部分，记录坐标
[row, col] = find(200 > gray_data);
original_image_points = [row, col];

%% 计算转换矩阵
% 旋转矩阵
rotate_matrix = [cos(theta), sin(theta); -sin(theta), cos(theta)];

% 平移矩阵
translation_matrix = [x, y];

%% 将因导入过程中坐标变换造成的初始旋转角度抵消，使图片回正
image_points = (original_image_points - translation_matrix) * ...
    rotate_matrix + translation_matrix;

end
