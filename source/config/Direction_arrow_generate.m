% 在地图上绘制车辆行驶方向箭头
function [root_point_x, root_point_y, direction_x, direction_y] = ...
    Direction_arrow_generate(x, y, theta)
%   1.输入参数：
%       (1)x                   车辆位置x坐标，实数，m
%       (2)y                   车辆位置y坐标，实数，m
%       (3)theta               车辆横摆角，实数，rad
%   2.输出参数：
%       (1)root_point_x        箭头根部x坐标，实数，m
%       (2)root_point_y        箭头根部y坐标，实数，m
%       (3)direction_x         箭头方向x分量，实数，m
%       (4)direction_y         箭头方向y分量，实数，m

%% 初始化
length = 10;   % 车长，正实数，m，取第一节车厢长度
L0     = 1.75; % 车头到第一轴的距离，正实数，m

%% 计算转换矩阵
% 旋转矩阵
rotate_matrix = [cos(theta), sin(theta); -sin(theta), cos(theta)];

% 平移矩阵
translation_matrix = [x, y];

%% 箭头参数生成
% 初始箭头头、尾点矩阵
arrow_points_original = [L0 - length, 0; 0, 0];

% 旋转平移
arrow_points_current = arrow_points_original * rotate_matrix + translation_matrix;

% 箭头根部坐标
root_point_x = arrow_points_current(1, 1);
root_point_y = arrow_points_current(1, 2);

% 初始箭头方向
direction_x = arrow_points_current(2, 1) - arrow_points_current(1, 1);
direction_y = arrow_points_current(2, 2) - arrow_points_current(1, 2);

end
