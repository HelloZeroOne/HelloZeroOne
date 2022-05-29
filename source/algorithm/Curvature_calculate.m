% 根据横摆角确定路径曲率
function curvature_queue = Curvature_calculate(path)
%   1.输入参数：
%       (1)path               路径，n×3的矩阵，第一列为x，第二列为y，第三列为横摆角
%   2.输出参数：
%       (1)curvature_queue    路径上每个路点的曲率序列

%% 初始化
x                = path(:, 1);                 % x坐标，m
y                = path(:, 2);                 % y坐标，m
yaw_angle        = deg2rad(path(:, 3));        % 横摆角，rad
way_point_number = length(yaw_angle);          % 路点个数
curvature_queue  = zeros(way_point_number, 1); % 曲率序列
delta_distance   = 2;                          % 当前路点前后用于计算曲率的路点间隔距离，m
front_yaw_angle  = 0;                          % 当前路点前方端点横摆角，deg
back_yaw_angle   = 0;                          % 当前路点后方端点横摆角，deg

%% 计算路径头部第一个delta_distance/2范围内的路点曲率
% 计算距离路径头部delta_distance/2的点的位置head_segment_middle_point_index
head_segment_middle_point_index = 0;
head_semi_segment_length = 0;
index1 = 1;
while way_point_number > index1
    head_semi_segment_length = head_semi_segment_length + sqrt((...
        x(index1 + 1, 1) - x(index1, 1)).^2 + (y(index1 + 1, 1) - y(index1, 1)).^2);
    if delta_distance / 2 <= head_semi_segment_length
        head_segment_middle_point_index = index1 + 1;
        break;
    end
    index1 = index1 + 1;
end

% 计算路径头部第一个delta_distance/2范围内的每个路点的曲率
for index2 = 1 : head_segment_middle_point_index
    forward_distance = 0;
    backward_distance = 0;
    
    % 累加计算当前点距离路径第一个点的距离
    index3 = index2;
    while 1 < index3
        backward_distance = backward_distance + sqrt((x(index3, 1) - ...
            x(index3 - 1, 1)).^2 + (y(index3, 1) - y(index3 - 1, 1)).^2);
        index3 = index3 - 1;
    end
    
    % 累加计算当前点距离从第一个点开始delta_distance的端点的距离
    index3 = index2;
    while way_point_number > index3
        forward_distance = forward_distance + sqrt((x(index3 + 1, 1) - ...
            x(index3, 1)).^2 + (y(index3 + 1, 1) - y(index3, 1)).^2);
        if (delta_distance - backward_distance) <= forward_distance
            % 计算前方端点的横摆角与路径第一点的横摆角的差值
            front_yaw_angle = yaw_angle(index3 + 1);
            delta_yaw_angle = front_yaw_angle - yaw_angle(1);
            
            % 角度取模转换到-pi~pi范围内
            delta_yaw_angle = mod(delta_yaw_angle + 3 * pi, 2 * pi) - pi;
            
            % 采用两点的角度偏差除以间隔距离近似计算曲率
            curvature_queue(index2) = delta_yaw_angle / delta_distance;
            break;
        end
        
        index3 = index3 + 1;
    end
end

%% 计算路径尾部倒数第一个delta_distance/2范围内的路点曲率
% 计算距离路径尾部delta_distance/2的点的位置tail_segment_middle_point_index
tail_segment_middle_point_index = 0;
tail_semi_segment_length = 0;
index1 = way_point_number;
while 1 < index1
    tail_semi_segment_length = tail_semi_segment_length + sqrt((...
        x(index1, 1) - x(index1 - 1, 1)).^2 + (y(index1, 1) - y(index1 - 1, 1)).^2);
    if delta_distance / 2 <= tail_semi_segment_length
        tail_segment_middle_point_index = index1 - 1;
        break;
    end
    index1 = index1 - 1;
end

% 计算路径尾部倒数第一个delta_distance/2范围内的每个路点的曲率
for index2 = tail_segment_middle_point_index : way_point_number
    backward_distance = 0;
    forward_distance = 0;
    
    % 累加计算当前点距离路径倒数第一个点的距离
    index3 = index2;
    while way_point_number > index3
        forward_distance = forward_distance + sqrt((...
            x(index3 + 1, 1) - x(index3, 1)).^2 + (y(index3 + 1, 1) - y(index3, 1)).^2);
        index3 = index3 + 1;
    end
    
    % 累加计算当前点距离从倒数第一个点开始delta_distance的端点的距离
    index3 = index2;
    while 1 < index3
        backward_distance = backward_distance + sqrt((...
            x(index3, 1) - x(index3 - 1, 1)).^2 + (y(index3, 1) - y(index3 - 1, 1)).^2);
        if (delta_distance - forward_distance) <= backward_distance
            % 计算路径倒数第一点的横摆角与后方端点的横摆角的差值
            back_yaw_angle = yaw_angle(index3 - 1);
            delta_yaw_angle = yaw_angle(way_point_number) - back_yaw_angle;
            
            % 角度取模转换到-pi~pi范围内
            delta_yaw_angle = mod(delta_yaw_angle + 3 * pi, 2 * pi) - pi;
            
            % 采用两点的角度偏差除以间隔距离近似计算曲率
            curvature_queue(index2) = delta_yaw_angle / delta_distance;
            break;
        end
        
        index3 = index3 - 1;
    end
end

%% 计算掐头去尾后的路径中部路点曲率
for index2 = (head_segment_middle_point_index + 1) : (tail_segment_middle_point_index - 1)
    backward_distance = 0;
    forward_distance = 0;
    
    % 累加计算当前点距离前方delta_distance/2的端点的距离
    index3 = index2;
    while way_point_number > index3
        forward_distance = forward_distance + sqrt((...
            x(index3 + 1, 1) - x(index3, 1)).^2 + (y(index3 + 1, 1) - y(index3, 1)).^2);
        
        % 获取前方delta_distance/2的端点的横摆角
        if delta_distance / 2 <= forward_distance
            front_yaw_angle = yaw_angle(index3 + 1);
            break;
        end
        
        index3 = index3 + 1;
    end
    
    % 累加计算当前点距离后方delta_distance/2的端点的距离
    index3 = index2;
    while 1 < index3
        backward_distance = backward_distance + sqrt((...
            x(index3, 1) - x(index3 - 1, 1)).^2 + (y(index3, 1) - y(index3 - 1, 1)).^2);
        
        % 获取后方delta_distance/2的端点的横摆角
        if delta_distance / 2 <= backward_distance
            back_yaw_angle = yaw_angle(index3 - 1);
            break;
        end
        
        index3 = index3 - 1;
    end
    
    % 计算当前点的前方端点横摆角与后方端点横摆角的差值
    delta_yaw_angle = front_yaw_angle - back_yaw_angle;
    
    % 角度取模转换到-pi~pi范围内
    delta_yaw_angle = mod(delta_yaw_angle + 3 * pi, 2 * pi) - pi;
    
    % 采用两点的角度偏差除以间隔距离近似计算曲率
    curvature_queue(index2) = delta_yaw_angle / delta_distance;
end
