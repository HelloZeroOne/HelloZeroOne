% 向量投影获取最近点
function [closest_point_x, closest_point_y, projection_rate] = ...
    Vector_projection_get_closest_point_m(x0, y0, x1, y1, x2, y2)
%   1.输入参数：
%       (1)x0,y0                  当前点P点x、y坐标
%       (2)x1,y1                  路点线段起始端点P1点x、y坐标
%       (3)x2,y2                  路点线段终止端点P2点x、y坐标
%   2.输出参数：
%       (1)closest_point_x        路点线段上最近点C点x坐标
%       (2)closest_point_y        路点线段上最近点C点y坐标
%       (3)projection_rate        当前点P与最近点P1连线在两个路点P1、P2连线上的投影占总长度的比例

%% 公式计算当前点P与最近点P1连线在两个路点P1、P2连线上的投影占总长度的比例
delta_x_P1P2 = x2 - x1;
delta_y_P1P2 = y2 - y1;
delta_x_P1P = x0 - x1;
delta_y_P1P = y0 - y1;
if 1e-6 > abs(delta_x_P1P2 * delta_x_P1P2 + delta_y_P1P2 * delta_y_P1P2)
    projection_rate = 2;
else
    projection_rate = (delta_x_P1P * delta_x_P1P2 + delta_y_P1P * delta_y_P1P2) / (...
        delta_x_P1P2 * delta_x_P1P2 + delta_y_P1P2 * delta_y_P1P2);
end


%% 根据不同的投影占总长度的比例确定最近点
if 0 > projection_rate
    closest_point_x = x1;
    closest_point_y = y1;
elseif 1 < projection_rate
    closest_point_x = x2;
    closest_point_y = y2;
else
    closest_point_x = x1 + projection_rate * delta_x_P1P2;
    closest_point_y = y1 + projection_rate * delta_y_P1P2;
end

end

