% 插入导出轨迹图像辅助信息
function Auxiliary_info_of_exported_trajectory_insert2figure(original_path, ...
    original_cumulative_length, split_point_map, trajectory_generate_template_table)
%   1.输入参数：
%       (1)original_path                         原始路径，n×4的矩阵
%          ->第一列为x(m)，第二列为y(m)，第三列为横摆角(deg)，第四列为任务ID
%       (2)original_cumulative_length            原始路径累计长度数组，m
%       (3)split_point_map                       分割点地图，n×2的矩阵
%          ->第一列为x（m），第二列为y（m）
%       (4)trajectory_generate_template_table    轨迹生成模板表格，必须包含起始点、终止点列
%   2.输出参数：无

%% 获取分段点对应的路径累计长度
split_cumulative_length = original_cumulative_length(...
    dsearchn(original_path(:, 1 : 2), split_point_map(:, 1 : 2)));

%% 插入原始路径起点辅助标签
Local_auxiliary_point_label_insert(1, split_point_map(1, 1), ...
    split_point_map(1, 2), trajectory_generate_template_table.('起始点'){1});

%% 插入原始路径起点辅助x轴垂线
% 在横摆角绘图中插入原始路径起点辅助x轴垂线
Local_auxiliary_x_line_insert(3, 0, ...
    trajectory_generate_template_table.('起始点'){1});

% 在处理后路径与原始路径相邻两点间隔绘图中插入原始路径起点辅助x轴垂线
Local_auxiliary_x_line_insert(5, 0, ...
    trajectory_generate_template_table.('起始点'){1});

% 在处理后路径与原始路径横向偏差绘图中插入原始路径起点辅助x轴垂线
Local_auxiliary_x_line_insert(6, 0, ...
    trajectory_generate_template_table.('起始点'){1});

% 在曲率绘图中插入原始路径起点辅助x轴垂线
Local_auxiliary_x_line_insert(8, 0, ...
    trajectory_generate_template_table.('起始点'){1});

% 在向量方位角绘图中插入原始路径起点辅助x轴垂线
Local_auxiliary_x_line_insert(9, 0, ...
    trajectory_generate_template_table.('起始点'){1});

%% 遍历分段点插入辅助标签、x轴垂线
% 插入分段终止点辅助线帮助区分路段
for index = 2 : length(split_cumulative_length)
    % 在路点绘图中插入辅助点标签
    Local_auxiliary_point_label_insert(1, split_point_map(index, 1), ...
        split_point_map(index, 2), trajectory_generate_template_table.('终止点'){index - 1});

    % 在横摆角绘图中插入辅助x轴垂线
    Local_auxiliary_x_line_insert(3, split_cumulative_length(index), ...
        trajectory_generate_template_table.('终止点'){index - 1});
    
    % 在处理后路径与原始路径相邻两点间隔绘图中插入辅助x轴垂线
    Local_auxiliary_x_line_insert(5, split_cumulative_length(index), ...
        trajectory_generate_template_table.('终止点'){index - 1});
    
    % 在处理后路径与原始路径横向偏差绘图中插入辅助x轴垂线
    Local_auxiliary_x_line_insert(6, split_cumulative_length(index), ...
        trajectory_generate_template_table.('终止点'){index - 1});
    
    % 在曲率绘图中插入辅助x轴垂线
    Local_auxiliary_x_line_insert(8, split_cumulative_length(index), ...
        trajectory_generate_template_table.('终止点'){index - 1});
    
    % 在向量方位角绘图中插入辅助x轴垂线
    Local_auxiliary_x_line_insert(9, split_cumulative_length(index), ...
        trajectory_generate_template_table.('终止点'){index - 1});
end

end

% 局部函数1：在图像中插入辅助x轴垂线
function Local_auxiliary_x_line_insert(figure_number, value, label)
%   1.输入参数：
%       (1)figure_number    图像代号，正整数
%       (2)value            垂线常数数值，实数
%       (3)label            垂线标签，字符数组或字符串
%   2.输出参数：无

figure(figure_number);
hold on;

% 关掉legend自动更新以防插入常数线条后自动增加legend条目
legend({}, 'AutoUpdate', 'off');

xline(value, '-.', append('\bf', '\fontname{宋体}', '\fontsize{10}', label), ...
    'LineWidth', 2);

end

% 局部函数2：在图像中插入辅助点标注
function Local_auxiliary_point_label_insert(figure_number, x, y, label)
%   1.输入参数：
%       (1)figure_number    图像代号，正整数
%       (2)x                辅助点x坐标，m
%       (3)y                辅助点y坐标，m
%       (4)label            辅助点标签，字符数组或字符串
%   2.输出参数：无

figure(figure_number);
hold on;
text(x, y, append('\bf', '\fontname{宋体}', '\fontsize{10}', label));

end
