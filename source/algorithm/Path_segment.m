% 根据曲率，将路径分段归类，路径类型包括：路径终点（0），直线路径（1），曲线路径（2）
function [segment_path] = Path_segment(original_path, fixed_gap)
%   1.输入参数：
%       (1)original_path     待处理的原始路径，矩阵，至少包含前3列
%          ->第1列为x（m），第2列为y（m），第3列为横摆角（deg）
%   2.输出参数：
%       (1)segment_path      分段后的路径，矩阵，至少包含前3列
%          ->第1列为x（m），第2列为y（m），第3列为路径类型
%       (2)fixed_gap         固定间隔，m

%% 初始化
move_mean_filter_width            = 20;    % 滑动平均滤波窗口宽度，无量纲
low_curvature_threshold           = 0.005; % 小弯曲率阈值，1/m
transitional_point_number         = 50;    % 过渡点数量，无量纲
little_gap_threshold_point_number = 100;   % 小间隔路点数量，无量纲

%% 对原始路径进行等间隔提取，生成第1阶段路径（第3列为横摆角）
step1_path = Path_evenly_pick(original_path, fixed_gap);

%% 计算第1阶段生成路径的曲率
% 数值方法计算曲率
temp_curvature = Curvature_calculate(step1_path(:, 1 : 3));

 % 滑动平均滤波
curvature = movmean(temp_curvature, move_mean_filter_width);

%% 根据曲率将第1阶段生成路径划分为不同路径类型，生成第2阶段路径（第3列为路径类型）
% 初始化
step2_path = step1_path;
step2_path(:, 3) = 0; % 清空路径类型

% 按曲率大小设定路径类型
for index = 1 : size(step2_path, 1)
    if low_curvature_threshold < abs(curvature(index)) % 小弯
        step2_path(index, 3) = 2;
    else % 直线
        step2_path(index, 3) = 1;
    end   
end

%% 在两种路径类型的过渡点向两端延申为过渡小弯道，生成第3阶段路径（第3列为路径类型）
step3_path = step2_path;
for index = 1 + transitional_point_number : size(step2_path, 1) - transitional_point_number
    if step2_path(index + 1, 3) ~= step2_path(index, 3)
        step3_path((index - transitional_point_number) : (index + transitional_point_number), 3) = 2;
    end
end

%% 两段弯道间距较近时用小弯道拼接，生成第4阶段路径（第3列为路径类型）
step4_path = step3_path;
for index1 = 1 : size(step3_path, 1) - 1
    if 2 == step3_path(index1, 3) && 1 == step3_path(index1 + 1, 3)
        for index2 = (index1 + 1) : size(step3_path, 1) - 1
            if 2 == step3_path(index2, 3) && ...
                    little_gap_threshold_point_number > (index2 - index1)
                step4_path(index1 : index2, 3) = 2;
                break;
            end
        end
    end
end

%% 输出分段后的路径
segment_path = step4_path;

end
