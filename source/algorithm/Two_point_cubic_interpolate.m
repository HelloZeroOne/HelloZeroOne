% 两点之间三次样条曲线插值
function [x_interp, y_interp, theta_interp, curvature_interp] = ...
    Two_point_cubic_interpolate(x0, y0, theta0, x1, y1, theta1, delta_s)
%   1.输入参数：
%       (1)x0, y0, theta0        起点的x、y、theta
%       (2)x1, y1, theta1        终点的x、y、theta
%       (3)delta_s               指定插值路点间隔
%   2.输出参数：
%       (1)x_interp              插值后的路点x坐标序列
%       (2)y_interp              插值后的路点x坐标序列
%       (3)theta_interp          插值后的路点theta序列
%       (4)curvature_interp      插值后的路点曲率序列

% 实际上在两两路点之间进行的三次样条插值，无法保证在每个端点处曲率连续，所以
% 通过三次多项式曲线的解析式算出的曲率不够平滑，推荐另外通过数值方法算得曲率

%% 初始化
% 计算两点之间的距离
distance = sqrt((x0 - x1) ^ 2 + (y0 - y1) ^ 2);

x_interp         = zeros(round(distance / delta_s) + 100, 1);
y_interp         = zeros(round(distance / delta_s) + 100, 1);
theta_interp     = zeros(round(distance / delta_s) + 100, 1);
curvature_interp = zeros(round(distance / delta_s) + 100, 1);

% 以输入的插值起始点作为坐标原点建立坐标系
x1_t = x1 - x0;
y1_t = y1 - y0;

% 以起始点的航向角方向作为当前坐标系x轴的正方向，即对当前坐标系进行旋转
x1_t_r = x1_t * cos(theta0) + y1_t * sin(theta0);
y1_t_r = -x1_t * sin(theta0) + y1_t * cos(theta0);

%% 根据新坐标系下起点和终点位置坐标和和航向角角度进行插值计算
a = tan(theta1 - theta0) / x1_t_r^2 - 2 * y1_t_r / x1_t_r^3;
b = 3 * y1_t_r / x1_t_r^2 - tan(theta1 - theta0) / x1_t_r;
k = 0;

% 如果x1_t_r为正，则累积正的弧长至正好小于x1_t_r，即插值点不越过终点
if 0 < x1_t_r
    % 在两点之间的三次样条曲线上按照指定间隔取x值，求得y值、theta值
    while x1_t_r >= k * delta_s
        x_i = k * delta_s;
        y_i = a * x_i^3 + b * x_i^2;
        theta_i = atan(3 * a * x_i^2 + 2 * b * x_i);
        
        % 将插值得到的路径点进行反坐标变换，旋转得到起始点坐标系下各插值路径点坐标和对应横摆角(0~2pi范围内)
        x_i_r = x_i * cos(theta0) - y_i * sin(theta0);
        y_i_r = x_i * sin(theta0) + y_i * cos(theta0);
        theta_i_r = rem(theta_i + theta0 + 2 * pi, 2 * pi);
        
        % 公式计算曲率
        curvature = abs(6 * a * x_i + 2 * b) / ...
            (1 + (3 * a * x_i^2 + 2 * b * x_i)^2)^(3.0 / 2);
        
        % 对起始点坐标系下各插值路径点坐标进行平移，得到原坐标系下的插值路径点坐标
        x_i_r_t = x_i_r + x0;
        y_i_r_t = y_i_r + y0;
        
        % 将插值路径点坐标、横摆角、曲率拼接到上一个循环得到的插值路径点序列末尾
        x_interp(k + 1) = x_i_r_t;
        y_interp(k + 1) = y_i_r_t;
        theta_interp(k + 1) = theta_i_r;
        curvature_interp(k + 1) = curvature;
        
        % 增加1段固定长度弧长
        k = k + 1;
    end
% 如果x1_t_r为负，则累积负的弧长至正好大于x1_t_r，即插值点不越过终点
else
    while x1_t_r <= -k * delta_s
        x_i = -k * delta_s;
        y_i = a * x_i^3 + b * x_i^2;
        theta_i = atan(3 * a * x_i^2 + 2 * b * x_i);
        
        % 将插值得到的路径点进行反坐标变换，旋转得到起始点坐标系下各插值路径点坐标和对应横摆角(0~2pi范围内)
        x_i_r = x_i * cos(theta0) - y_i * sin(theta0);
        y_i_r = x_i * sin(theta0) + y_i * cos(theta0);
        theta_i_r = rem(theta_i + theta0 + 2 * pi, 2 * pi);
        
        % 公式计算曲率
        curvature = abs(6 * a * x_i + 2 * b) / ...
            (1 + (3 * a * x_i^2 + 2 * b * x_i)^2)^(3.0 / 2);
        
        % 对起始点坐标系下各插值路径点坐标进行平移，得到原坐标系下的插值路径点坐标
        x_i_r_t = x_i_r + x0;
        y_i_r_t = y_i_r + y0;
        
        % 将插值路径点坐标、横摆角、曲率拼接到上一个循环得到的插值路径点序列末尾
        x_interp(k + 1) = x_i_r_t;
        y_interp(k + 1) = y_i_r_t;
        theta_interp(k + 1) = theta_i_r;
        curvature_interp(k + 1) = curvature;
        
        % 增加1段固定长度弧长
        k = k + 1;
    end
end

%% 清除多余的无效零点
x_interp(all(x_interp == 0, 2), :) = [];
y_interp(all(y_interp == 0, 2), :) = [];
theta_interp(all(theta_interp == 0, 2), :) = [];
curvature_interp(all(curvature_interp == 0, 2), :) = [];

end
