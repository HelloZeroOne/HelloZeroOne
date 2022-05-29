% 车辆坐标系转换
function [x_new, y_new] = Vehicle_coordinate_transfer_m(x1, y1, x2, y2, theta)
%   1.输入参数：
%       (1)x1,y1                  车辆当前点P1点x、y坐标，m
%       (2)x2,y2                  任意P2点x、y坐标，m
%       (3)theta                  车辆当前点横摆角，radian
%   2.输出参数：
%       (1)x_new                  P2点在车辆坐标系下的x坐标
%       (2)y_new                  P2点在车辆坐标系下的y坐标

%% 坐标变换公式
x_new = (y2 - y1) * sin(theta) + (x2 - x1) * cos(theta);
y_new = (y2 - y1) * cos(theta) - (x2 - x1) * sin(theta);

end

