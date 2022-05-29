% 获取轨迹最近点信息
function [closest_point_x, closest_point_y, closest_point_curvature, ...
    closest_segment_start_point_index, near_lateral_offset] = ...
    Trajectory_closest_point_info_get_m(current_point_yaw_angle, current_point_x, ...
    current_point_y, trajectory, closest_segment_start_point_index_previous)
%   1.输入参数：
%       (1)current_point_yaw_angle                       当前点横摆角，degree
%       (2)current_point_x                               当前点x坐标，m
%       (3)current_point_y                               当前点y坐标，m
%       (4)trajectory                                    轨迹结构体，ENU_yaw_angle、ENU_x、ENU_y、curvature、segment_length
%       (5)closest_segment_start_point_index_previous    上周期最近路点线段起始点索引
%   2.输出参数：
%       (1)closest_point_x                               最近点x坐标，m
%       (2)closest_point_y                               最近点y坐标，m
%       (3)closest_point_curvature                       最近点曲率，1/m
%       (4)closest_segment_start_point_index             最近路点线段起始点索引
%       (5)near_lateral_offset                           最近处横向偏差，m

%% 初始化
closest_point_valid = false;                            % 最近点有效标志，如果非首次的快捷搜索找不到最近点，仍需全局搜索
closest_point_x = trajectory.ENU_x(end);                % 初始化为终点数值
closest_point_y = trajectory.ENU_y(end);                % 初始化为终点数值
closest_point_curvature = trajectory.curvature(end);    % 初始化为终点数值
near_lateral_offset = 0;
way_point_number = length(trajectory.ENU_x);
closest_segment_start_point_index = way_point_number;   % 初始化为终点数值
closest_distance_threshold = 2;                         % 最近距离阈值，m，距离小于阈值的最近点才考虑方向
projection_rate = 1;
distance_relationship_transition_flag = false;          % 距离关系转移标志，在由远及近与由近及远的转折处存在一个极近点，通过该标志的变化筛选出来

%% 合法性判断
% 路径点数少于3个时使用倒数2个点进行向量投影，获取最近点，直接返回
if 3 > way_point_number
    [closest_point_x, closest_point_y, ~] = Vector_projection_get_closest_point_m(...
        current_point_x, current_point_y, trajectory.ENU_x(end - 1), ...
        trajectory.ENU_y(end - 1), trajectory.ENU_x(end), trajectory.ENU_y(end));
    closest_point_curvature = trajectory.curvature(end);
    closest_segment_start_point_index = max(way_point_number, 1);
    near_lateral_offset = sqrt((current_point_x - closest_point_x) ^ 2 + (...
        current_point_y - closest_point_y) ^ 2);
    
    % 将最近点转换到车辆坐标系下
    [~, y_rotate] = Vehicle_coordinate_transfer_m(current_point_x, current_point_y, ...
        closest_point_x, closest_point_y, deg2rad(current_point_yaw_angle));
    
    % 通过车辆坐标系下最近点y坐标确定近处横向偏差正负号
    if 0 > y_rotate
        near_lateral_offset = -near_lateral_offset;
    end

    return;
end

%% 非首次搜索采用上周期最近路点线段起始点索引前后20个点进行快捷搜索
if 0 < closest_segment_start_point_index_previous
    % 搜索上一个周期索引前1.11m范围（按最高80km/h车速）的起始索引
    head_arc_length = 0;
    start_index = 1;
    
    % 下方条件中多加1是因为每个路点存储的线段长度是当前点到前一个路点之间的线段长度
    for index = closest_segment_start_point_index_previous : -1 : 2
        head_arc_length = head_arc_length + trajectory.segment_length(index);
        if 1.11 <= head_arc_length
            start_index = index;
            break;
        end
    end
    
    % 搜索上一个周期索引后1.11m范围（按最高80km/h车速）的结束索引
    tail_arc_length = 0;
    end_index = way_point_number - 2;
    
    % 下方条件中多加1是因为每个路点存储的线段长度是当前点到前一个路点之间的线段长度
    for index = (closest_segment_start_point_index_previous + 1) : (way_point_number - 2)
        tail_arc_length = tail_arc_length + trajectory.segment_length(index);
        if 1.11 <= tail_arc_length
            end_index = index;
            break;
        end
    end
    
    % 局部快捷搜索
    for index = start_index : end_index
        % 搜索相邻两个线段的最近点
        [neighboring_segment_closest_point1_x, neighboring_segment_closest_point1_y, ...
            projection_rate] = Vector_projection_get_closest_point_m(current_point_x, ...
            current_point_y, trajectory.ENU_x(index), trajectory.ENU_y(index), ...
            trajectory.ENU_x(index + 1), trajectory.ENU_y(index + 1));
        [neighboring_segment_closest_point2_x, neighboring_segment_closest_point2_y, ~] = ...
            Vector_projection_get_closest_point_m(current_point_x, current_point_y, ...
            trajectory.ENU_x(index + 1), trajectory.ENU_y(index + 1), ...
            trajectory.ENU_x(index + 2), trajectory.ENU_y(index + 2));
        
        % 计算相邻两个线段的最近点到当前点的距离
        distance1 = sqrt((current_point_x - neighboring_segment_closest_point1_x) ^ 2 + (...
            current_point_y - neighboring_segment_closest_point1_y) ^ 2);
        distance2 = sqrt((current_point_x - neighboring_segment_closest_point2_x) ^ 2 + (...
            current_point_y - neighboring_segment_closest_point2_y) ^ 2);
        
        % 当后一个线段到当前点的距离大于前一个线段时，
        % 说明参考路径上的最近点是前一个线段到当前点的最近点
        if distance2 > distance1
            closest_point_valid = true;
            closest_point_x = neighboring_segment_closest_point1_x;
            closest_point_y = neighboring_segment_closest_point1_y;
            closest_point_curvature = trajectory.curvature(index) + ...
                projection_rate * (trajectory.curvature(index + 1) - ...
                trajectory.curvature(index));
            closest_segment_start_point_index = index;
            near_lateral_offset = distance1;
            break;
        end
    end
end

%% 首次搜索/快捷搜索未找到最近点则进行全局搜索
if false == closest_point_valid
    % 备选序列初始化
    closer_point_x_queue = zeros(100, 1);
    closer_point_y_queue = zeros(100, 1);
    delta_angle_queue = zeros(100, 1);
    closer_point_index_queue = zeros(100, 1);
    near_lateral_offset_queue = zeros(100, 1);
    
    % 录入起点信息
    closer_point_x_queue(1) = trajectory.ENU_x(1);
    closer_point_y_queue(1) = trajectory.ENU_y(1);
    % 将角度偏差取模到-180~180
    delta_angle_queue(1) = abs(mod(current_point_yaw_angle - ...
        trajectory.ENU_yaw_angle(1) + 540, 360) - 180);
    closer_point_index_queue(1) = 1;
    near_lateral_offset_queue(1) = sqrt((current_point_x - ...
        closer_point_x_queue(1)) ^ 2 + (current_point_y - closer_point_y_queue(1)) ^ 2);
    
    % 录入倒数第二点信息
    closer_point_x_queue(2) = trajectory.ENU_x(end - 1);
    closer_point_y_queue(2) = trajectory.ENU_y(end - 1);
    % 将角度偏差取模到-180~180
    delta_angle_queue(2) = abs(mod(current_point_yaw_angle - ...
        trajectory.ENU_yaw_angle(end - 1) + 540, 360) - 180);
    closer_point_index_queue(2) = way_point_number - 1;
    near_lateral_offset_queue(2) = sqrt((current_point_x - ...
        closer_point_x_queue(2)) ^ 2 + (current_point_y - closer_point_y_queue(2)) ^ 2);
    
    % 更新备选序列索引
    queue_index = 2;
    
    % 全局搜索
    for index = 1 : (way_point_number - 2)
        % 搜索相邻两个线段的最近点
        [neighboring_segment_closest_point1_x, neighboring_segment_closest_point1_y, projection_rate] = ...
            Vector_projection_get_closest_point_m(current_point_x, current_point_y, ...
            trajectory.ENU_x(index), trajectory.ENU_y(index), ...
            trajectory.ENU_x(index + 1), trajectory.ENU_y(index + 1));
        [neighboring_segment_closest_point2_x, neighboring_segment_closest_point2_y, ~] = ...
            Vector_projection_get_closest_point_m(current_point_x, current_point_y, ...
            trajectory.ENU_x(index + 1), trajectory.ENU_y(index + 1), ...
            trajectory.ENU_x(index + 2), trajectory.ENU_y(index + 2));

        % 计算相邻两个线段的最近点到当前点的距离
        distance1 = sqrt((current_point_x - neighboring_segment_closest_point1_x) ^ 2 + (...
            current_point_y - neighboring_segment_closest_point1_y) ^ 2);
        distance2 = sqrt((current_point_x - neighboring_segment_closest_point2_x) ^ 2 + (...
            current_point_y - neighboring_segment_closest_point2_y) ^ 2);

        % 求当前点与路径点横摆角之间的航向夹角绝对值,将角度偏差取模到-180~180
        delta_angle = abs(mod(current_point_yaw_angle - ...
            trajectory.ENU_yaw_angle(index) + 540, 360) - 180);
        
        % 当出现后一个线段到当前点的距离大于前一个线段时，
        % 说明前一个线段到当前点的最近点是一个备选参考路径最近点
        if distance2 > distance1
            % 距离关系转移标志为false，说明是首次遇到满足距离关系的点，采纳为备选参考路径最近点
            if false == distance_relationship_transition_flag
                queue_index = min(queue_index + 1, 100);
                closer_point_x_queue(queue_index) = neighboring_segment_closest_point1_x;
                closer_point_y_queue(queue_index) = neighboring_segment_closest_point1_y;
                delta_angle_queue(queue_index) = delta_angle;
                closer_point_index_queue(queue_index) = index;
                near_lateral_offset_queue(queue_index) = distance1;
                
                % 修改距离关系转移标志，避免录入极近点后续的路点（因为它们都会满足距离关系条件，可却不会是最近点）
                distance_relationship_transition_flag = true;
            end
        % 不满足距离关系条件时，将距离关系转移标志设置为false，等待下一个满足条件的路点
        else
            distance_relationship_transition_flag = false;
            
            % 如果遍历点到了最后，选择后一个线段中最近的点进入备选序列
            if way_point_number - 2 <= index
                queue_index = min(queue_index + 1, 100);
                closer_point_x_queue(queue_index) = neighboring_segment_closest_point2_x;
                closer_point_y_queue(queue_index) = neighboring_segment_closest_point2_y;
                delta_angle_queue(queue_index) = delta_angle;
                closer_point_index_queue(queue_index) = index + 1;
                near_lateral_offset_queue(queue_index) = distance2;
            end
        end
    end
    
    % 遍历备选最近点序列，找到与本车距离最近的点，找到与本车距离小于阈值且横摆夹角最小的点
    closest_distance = near_lateral_offset_queue(1);
    closest_distance_index = 1;
    min_delta_angle = delta_angle_queue(1);
    min_delta_angle_index = 1;
    for index = 1 : queue_index
        % 找到与本车距离最近的点
        if closest_distance >= near_lateral_offset_queue(index)
            closest_distance = near_lateral_offset_queue(index);
            closest_distance_index = index;
        end
        
        % 找到与本车距离小于阈值且横摆夹角最小的点
        if closest_distance_threshold > near_lateral_offset_queue(index)
            if min_delta_angle >= delta_angle_queue(index)
                min_delta_angle = delta_angle_queue(index);
                min_delta_angle_index = index;
            end
        end
    end
    
    % 如果备选点到本车的最近距离大于阈值，直接选择最近距离的点
    if closest_distance_threshold < closest_distance
        closest_point_index = closest_distance_index;
    else
        % 如果最近距离的点的横摆夹角大于等于90度，则选择横摆夹角最小的点，否则选择最近距离的点
        if 90 <= delta_angle_queue(closest_distance_index)
            closest_point_index = min_delta_angle_index;
        else
            closest_point_index = closest_distance_index;
        end
    end
    
    % 提取最近点
    closest_point_x = closer_point_x_queue(closest_point_index);
    closest_point_y = closer_point_y_queue(closest_point_index);
    closest_point_curvature = trajectory.curvature(...
        closer_point_index_queue(closest_point_index)) + ...
        projection_rate * (trajectory.curvature(...
        closer_point_index_queue(closest_point_index) + 1) - ...
        trajectory.curvature(closer_point_index_queue(closest_point_index)));
    closest_segment_start_point_index = closer_point_index_queue(closest_point_index);
    near_lateral_offset = near_lateral_offset_queue(closest_point_index);
end

%% 区分近处横向偏差正负符号
% 将最近点转换到车辆坐标系下
[~, y_rotate] = Vehicle_coordinate_transfer_m(current_point_x, current_point_y, ...
    closest_point_x, closest_point_y, deg2rad(current_point_yaw_angle));

% 通过车辆坐标系下最近点y坐标确定近处横向偏差正负号
if 0 > y_rotate
    near_lateral_offset = -near_lateral_offset;
end

end
