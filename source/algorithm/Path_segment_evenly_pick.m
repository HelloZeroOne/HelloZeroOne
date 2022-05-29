% 根据传入固定间隔分段均匀选取路径
function [final_path] = Path_segment_evenly_pick(original_path, ...
    straight_fixed_gap, curve_fixed_gap)
%   1.输入参数：
%       (1)original_path         待处理的原始路径，矩阵，至少包含前3列
%          ->第1列为x（m），第2列为y（m），第3列为路径类型
%   2.输出参数：
%       (1)final_path            均匀选取后的路径，矩阵，至少包含前3列
%          ->第1列为x（m），第2列为y（m），第3列为路径类型
%       (2)straight_fixed_gap    直线固定间隔，m
%       (3)curve_fixed_gap       曲线固定间隔，m

%% 初始化
cumulative_distance        = 0;
final_path                 = zeros(size(original_path));
fixed_gap_point_index      = 1;
original_path_point_index  = 1;
original_path_picked       = false(size(original_path, 1), 1);

%% 分段等间隔选取路点
while size(original_path, 1) >= original_path_point_index
    % 直线段按照直线固定间隔选取路点
    if isequal(1, original_path(original_path_point_index, 3))
        % 录入该直线段起点
        final_path(fixed_gap_point_index, :) = ...
            original_path(original_path_point_index, :);
        fixed_gap_point_index = fixed_gap_point_index + 1;
        original_path_picked(original_path_point_index) = true;
        
        % 遍历该直线段以筛选满足设定间隔的路点
        for specified_type_point_index = original_path_point_index : (...
                size(original_path, 1) - 1)
            % 遇到下一个点路径类型切换，跳出循环
            if ~isequal(1, original_path(specified_type_point_index + 1, 3))
                % 如果当前点没有被录入过，则将当前点录入该直线段终点
                if ~original_path_picked(specified_type_point_index)
                    final_path(fixed_gap_point_index, :) = ...
                        original_path(specified_type_point_index, :);
                    fixed_gap_point_index = fixed_gap_point_index + 1;
                    original_path_picked(specified_type_point_index) = true;
                end
                
                break;
            end
            
            % 累加两点间距，筛选满足设定间隔的路点
            cumulative_distance = cumulative_distance + ...
                norm(original_path(specified_type_point_index, 1 : 2) - ...
                original_path(specified_type_point_index + 1, 1 : 2));
            if straight_fixed_gap < cumulative_distance
                cumulative_distance = 0;
                final_path(fixed_gap_point_index, :) = ...
                    original_path(specified_type_point_index + 1, :);
                fixed_gap_point_index = fixed_gap_point_index + 1;
                original_path_picked(specified_type_point_index + 1) = true;
            end
        end
    % 弯道按照曲线固定间隔选取路点
    else
        % 录入该曲线段起点
        final_path(fixed_gap_point_index, :) = ...
            original_path(original_path_point_index, :);
        fixed_gap_point_index = fixed_gap_point_index + 1;
        original_path_picked(original_path_point_index) = true;
        
        % 遍历该曲线段以筛选满足设定间隔的路点
        for specified_type_point_index = original_path_point_index : (...
                size(original_path, 1) - 1)
            % 遇到下一个点路径类型切换，跳出循环
            if ~isequal(2, original_path(specified_type_point_index + 1, 3))
                % 如果当前点没有被录入过，则将当前点录入该曲线段终点
                if ~original_path_picked(specified_type_point_index)
                    final_path(fixed_gap_point_index, :) = ...
                        original_path(specified_type_point_index, :);
                    fixed_gap_point_index = fixed_gap_point_index + 1;
                    original_path_picked(specified_type_point_index) = true;
                end
                
                break;
            end
            
            % 累加两点间距，筛选满足设定间隔的路点
            cumulative_distance = cumulative_distance + ...
                norm(original_path(specified_type_point_index, 1 : 2) - ...
                original_path(specified_type_point_index + 1, 1 : 2));
            if curve_fixed_gap < cumulative_distance
                cumulative_distance = 0;
                final_path(fixed_gap_point_index, :) = ...
                    original_path(specified_type_point_index + 1, :);
                fixed_gap_point_index = fixed_gap_point_index + 1;
                original_path_picked(specified_type_point_index + 1) = true;
            end
        end
    end
    
    % 更新原始路径点索引到特定路段结束之后
    original_path_point_index = specified_type_point_index + 1;
end

%% 清除多余的无效零点
final_path(all(final_path == 0, 2), :) = [];

%% 标记路径终点
final_path(end, 3) = 0;

end
