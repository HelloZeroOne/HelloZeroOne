% 根据路径生成模板配置，将路径分割成多个小段，标记特定区间代号
function [separated_path_struct] = Path_separate(original_path, ...
    trajectory_generate_template_table)
%   1.输入参数：
%       (1)original_path                         原始路径，矩阵，至少包含前4列
%          ->第1列为x（m），第2列为y（m），第3列为横摆角（deg），第4列为区间代号
%   2.输出参数：
%       (1)separated_path_struct                 分割后的路径，结构体
%          ->每个成员域都是一小段的路径矩阵，名称为subpath+区间代号，至少包含前3列
%          ->路径矩阵第1列为x（m），第2列为y（m），第3列为横摆角（deg）
%       (2)trajectory_generate_template_table    轨迹生成模板表格

%% 初始化
separated_path_struct = struct;

%% 检验轨迹生成模板表格有效性
if isempty(trajectory_generate_template_table)
    error('轨迹生成模板表格为空！');
end

%% 遍历轨迹生成模板表格，针对每一段区间提取对应的路点
for index = 1 : height(trajectory_generate_template_table)
    % 拼接子路径名称
    subpath_name = append('subpath_', num2str(...
        trajectory_generate_template_table.('区间代号')(index)));
    
    % 提取区间对应的路点
    separated_path_struct.(subpath_name) = original_path(...
        ismember(original_path(:, 4), trajectory_generate_template_table.(...
        '区间代号')(index)), :);
    
    % 检查本区间的路点为空时报错提醒，以免后续环节出错
    if isempty(separated_path_struct.(subpath_name))
        error('区间【%s】路点为空，请在轨迹生成模板表格中删除相应区间定义后重试！', ...
            subpath_name);
    end
end

end
