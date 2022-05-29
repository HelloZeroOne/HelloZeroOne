% 在地图上绘制车辆
function [vehicle_points_x, vehicle_points_y] = Vehicle_rectangle_generate(x, y, theta)
%   1.输入参数：
%       (1)x                   车辆位置x坐标，实数，m
%       (2)y                   车辆位置y坐标，实数，m
%       (3)theta               车辆横摆角，实数，rad
%   2.输出参数：
%       (1)vehicle_points_x    车辆矩形4个角的位置x坐标，实数，m
%       (2)vehicle_points_y    车辆矩形4个角的位置y坐标，实数，m

%% 初始化
length = 10;   % 车长，正实数，m，取第一节车厢长度
width  = 2.65; % 车宽，正实数，m
L0     = 1.75; % 车头到第一轴的距离，正实数，m

%% 计算转换矩阵
% 旋转矩阵
rotate_matrix = [cos(theta), sin(theta); -sin(theta), cos(theta)];

% 平移矩阵
translation_matrix = [x, y];

%% 车辆矩形块生成
% 矩形块点集
points = [L0, width / 2; L0 - length, width / 2; ...
    L0 - length, -width / 2; L0, -width / 2];

% 旋转平移
vehicle_points = points * rotate_matrix + translation_matrix;
vehicle_points_x = vehicle_points(:, 1);
vehicle_points_y = vehicle_points(:, 2);

end
