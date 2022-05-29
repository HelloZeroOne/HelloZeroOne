% 根据传入固定间隔均匀选取路径
function [final_path] = Path_evenly_pick(original_path, fixed_gap)
%   1.输入参数：
%       (1)original_path     待处理的原始路径，矩阵，至少包含前3列
%          ->第1列为x（m），第2列为y（m），第3列为横摆角（deg）
%   2.输出参数：
%       (1)final_path        均匀选取后的路径，矩阵，至少包含前3列
%          ->第1列为x（m），第2列为y（m），第3列为横摆角（deg）
%       (2)fixed_gap         固定间隔，m

%% 初始化
cumulative_distance = 0;
final_path = zeros(size(original_path));
fixed_gap_point_index = 1;

% 两路点重合的间隔阈值，m
way_point_gap_threshold = 1e-3;

%% 选取原始路径起点
final_path(fixed_gap_point_index, :) = original_path(1, :);
fixed_gap_point_index = fixed_gap_point_index + 1;

%% 等间隔选取路点
for index = 1 : (size(original_path, 1) - 1)
    cumulative_distance = cumulative_distance + ...
        norm(original_path(index, 1 : 2) - original_path(index + 1, 1 : 2));
    if(fixed_gap < cumulative_distance)
        cumulative_distance = 0;
        final_path(fixed_gap_point_index, :) = original_path(index + 1, :);
        fixed_gap_point_index = fixed_gap_point_index + 1;
    end
end

%% 如果没有选到原始路径终点，补选
if way_point_gap_threshold < norm(final_path(fixed_gap_point_index - 1, 1 : 2) - ...
        original_path(end, 1 : 2))
    final_path(fixed_gap_point_index, :) = original_path(end, :);
end

%% 清除多余的无效零点
final_path(all(final_path == 0, 2), :) = [];

end
