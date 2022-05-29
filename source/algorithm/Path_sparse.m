% 按区间设定的路点间隔对路径进行稀疏化
function [processed_path] = Path_sparse(original_path, trajectory_generate_template_table)
%   1.输入参数：
%       (1)original_path                         待处理的原始路径，矩阵，至少包含前4列
%          ->第1列为x（m），第2列为y（m），第3列为横摆角（deg），第4列为区间代号
%       (2)trajectory_generate_template_table    轨迹生成模板表格
%   2.输出参数：
%       (1)processed_path                        处理后的路径，矩阵，至少包含前4列
%          ->第1列为x（m），第2列为y（m），第3列为横摆角（deg），第4列为区间代号

%% 初始化
% 默认两点之间的距离，m
default_segment_length = 0.01;

% 两路点重合的间隔阈值
way_point_interval_threshold = 1e-3;

%% 按照模板分割路径
% 根据区间代号分割路径
separated_path_struct = Path_separate(original_path, ...
    trajectory_generate_template_table);

%% 稀疏路点构造混合路径
% 初始化
namelist       = fieldnames(separated_path_struct); % 分离路径结构体的成员域名
processed_path = zeros(size(original_path));        % 处理后的混合路径
temp_index     = 1;                                 % 临时索引，用于将子路径拼接成混合路径
temp_point     = [];                                % 临时路点

% 遍历全部子路径，根据设定的生成路点间隔，以不同间隔选取路点组成新的混合路径
for index = 1 : length(namelist)
    % 确定间隔点数
    interval_point_number = round(trajectory_generate_template_table.(...
        '生成路点间隔[m]')(index) / default_segment_length);
    
    % 将上一条子路径稀疏化后的剩余路点序列补到下一条子路径的头部，防止2段分区之间出现异常间隔
    subpath = [temp_point; separated_path_struct.(namelist{index})];
    
    % 路点稀疏化
    sparse_processed_path = subpath(1 : interval_point_number : end, :);
    
    % 将稀疏后的路径去除终点，拼接到混合路径末尾
    processed_path(temp_index : temp_index + size(sparse_processed_path, 1) - 2, :) = ...
        sparse_processed_path(1 : end - 1, :);
    
    % 保存子路径稀疏化后的终点到子路径原始终点的路点序列
    temp_point = subpath(dsearchn([subpath(:, 1), subpath(:, 2)], [...
        sparse_processed_path(end, 1), sparse_processed_path(end, 2)]) : end, :);

    % 更新临时索引
    temp_index = temp_index + size(sparse_processed_path, 1) - 1;
end

% 补充最后一条子路径稀疏化后的终点
processed_path(temp_index, :) = temp_point(1, :);

% 稀疏前后的终点距离大于阈值，则在处理后的路径末尾补充稀疏前的终点
if way_point_interval_threshold < norm(original_path(end, 1 : 2) - ...
        processed_path(temp_index, 1 : 2))
    processed_path(temp_index + 1, :) = original_path(end, :);
end

%% 清除混合路径中多余的无效零点
processed_path(all(processed_path == 0, 2), :) = [];

end
