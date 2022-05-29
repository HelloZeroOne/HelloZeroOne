% 路径预处理（对采集的原始路径进行分段、平滑、插值等处理，以满足控车需求）
function processed_path = Path_preprocess(original_path, ...
    segment_sample_fixed_gap, trajectory_generate_template_table)
%   1.输入参数：
%       (1)original_path                         待处理的原始路径，矩阵，至少包含前4列
%          ->第1列为x（m），第2列为y（m），第3列为横摆角（deg），第4列为区间代号
%       (2)segment_sample_fixed_gap              分段采样固定间隔，正实数，m
%       (3)trajectory_generate_template_table    轨迹生成模板表格
%   2.输出参数：
%       (1)processed_path                        处理后的路径，矩阵，至少包含前3列
%          ->第1列为x（m），第2列为y（m），第3列为横摆角（deg）

%% 按照模板分割路径
% 根据区间代号分割路径
separated_path_struct = Path_separate(original_path, ...
    trajectory_generate_template_table);

%% 筛选路点构造混合路径
% 初始化
namelist   = fieldnames(separated_path_struct); % 分离路径结构体的成员域名
mixed_path = zeros(size(original_path));        % 混合路径
temp_index = 1;                                 % 临时索引，用于将子路径拼接成混合路径

% 遍历全部子路径，根据曲率分为直线和弯道，以不同间隔选取路点组成新的混合路径
for index = 1 : length(namelist)
    % 对路径分段定义为直线、弯道
    segment_path = Path_segment(separated_path_struct.(namelist{index}), ...
        segment_sample_fixed_gap);
    
    % 对分段后的路径区分直线、弯道以不同间隔均匀选取混合分段路径
    mixed_segment_path = Path_segment_evenly_pick(segment_path, ...
        trajectory_generate_template_table.('直线取点间隔[m]')(index), ...
        trajectory_generate_template_table.('曲线取点间隔[m]')(index));
    
    % 根据轨迹生成模板文件配置的循迹优先级设置待填充路径对应位置的数值
    mixed_segment_path(:, 5 : 6) = repmat([...
        trajectory_generate_template_table.('视觉循迹优先级')(index), ...
        trajectory_generate_template_table.('GNSS循迹优先级')(index)], ...
        size(mixed_segment_path, 1), 1);
    
    % 将混合分段路径拼接到混合路径末尾
    mixed_path(temp_index : temp_index + size(mixed_segment_path, 1) - 1, :) = ...
        mixed_segment_path;

    % 更新临时索引
    temp_index = temp_index + size(mixed_segment_path, 1);
end

% 清除混合路径中多余的无效零点
mixed_path(all(mixed_path == 0, 2), :) = [];

%% 平滑
smooth_path = Path_smooth(mixed_path);

% 角度重计算，首尾两点分别采用第2点、倒数第2点的数值
for index = 2 : size(smooth_path, 1) - 1
    delta_y = smooth_path(index + 1, 2) - smooth_path(index - 1, 2);
    delta_x = smooth_path(index + 1, 1) - smooth_path(index - 1, 1);
    smooth_path(index, 3) = atan2(delta_y, delta_x);
end
smooth_path(1, 3) = smooth_path(2, 3);
smooth_path(end, 3) = smooth_path(end - 1, 3);

%% 插值
processed_path = Path_interpolate(smooth_path);

end
