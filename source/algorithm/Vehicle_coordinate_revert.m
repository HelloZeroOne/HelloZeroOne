% 车辆坐标系复原到大地平面直角坐标系
function [x_new, y_new] = Vehicle_coordinate_revert(x1, y1, x2, y2, theta)
%   1.输入参数：
%       (1)x1,y1                  大地坐标系下车辆当前点P1点x、y坐标，m
%       (2)x2,y2                  车辆坐标系下任意P2点x、y坐标，m
%       (3)theta                  大地坐标系下车辆当前点横摆角，radian
%   2.输出参数：
%       (1)x_new                  P2点在大地坐标系下的x坐标
%       (2)y_new                  P2点在大地坐标系下的y坐标

%% 坐标变换公式
x_new = x1 + x2 * cos(theta) - y2 * sin(theta);
y_new = y1 + x2 * sin(theta) + y2 * cos(theta);

end

