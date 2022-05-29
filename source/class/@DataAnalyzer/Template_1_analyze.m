% 分析运营统计信息
function [obj] = Template_1_analyze(obj)
%   1.输入参数：
%       (1)obj    DATAANALYZER类的一个实例
%   2.输出参数：
%       (1)obj    DATAANALYZER类的一个实例

%% 获取数据集关联的参考轨迹
obj = obj.Reference_trajectory_name_get;
obj = obj.Reference_trajectory_manager_initialize;
obj = obj.Reference_trajectory_get;
fprintf('$运营统计信息分析结果如下：\n$参考轨迹：%s\n', obj.reference_trajectory_name);

%% 统计接管信息
% 统计全程主动接管处路点索引
active_intervention_index = find(ismember(diff(...
    obj.data_collection.('IEHS_work_status')), [3, 4]) & ...
    1 == obj.data_collection.('IDS_work_status')(1 : end - 1) & ...
    0 == obj.data_collection.('IDS_fault_status')(1 : end - 1));

% 统计全程被动接管处路点索引
passive_intervention_index = find(0 < diff(...
    obj.data_collection.('IDS_fault_status')) & ...
    1 == obj.data_collection.('IDS_work_status')(2 : end));

%% 将数据集按最近点区间代号拆分、统计
% 统计区间代号集合
segment_ID_collection = unique(obj.data_collection.(...
    'closest_point_segment_ID')(0 < obj.data_collection.(...
    'closest_point_segment_ID')));
segment_number = length(segment_ID_collection);

% 分区数据集cell初始化
segment_data_collection = cell(segment_number, 1);

% 分区统计结果初始化
segment_run_time = zeros(segment_number, 1);
segment_average_speed = zeros(segment_number, 1);
segment_max_speed = zeros(segment_number, 1);
segment_max_lateral_offset = zeros(segment_number, 1);
segment_average_lateral_offset = zeros(segment_number, 1);
segment_active_intervention_number = zeros(segment_number, 1);
segment_passive_intervention_number = zeros(segment_number, 1);

% 遍历区间代号集合拆分数据集
for index = 1 : segment_number
    segment_data_collection{index} = obj.data_collection(ismember(...
        obj.data_collection.('closest_point_segment_ID'), ...
        segment_ID_collection(index)), :);
    
    % 统计区间耗时
    segment_run_time(index) = (segment_data_collection{index}.('time_axis')(end) - ...
        segment_data_collection{index}.('time_axis')(1)) / 60;
    
    % 统计区间旅行速度
    segment_average_speed(index) = mean(segment_data_collection{index}.('tram_speed'));
        
    % 统计区间最高速度
    segment_max_speed(index) = max(segment_data_collection{index}.('tram_speed'));
    
    % 统计区间最大横向偏差
    segment_max_lateral_offset(index) = max(abs(...
        segment_data_collection{index}.('near_lateral_offset')));
    
    % 统计区间平均横向偏差
    segment_average_lateral_offset(index) = mean(abs(...
        segment_data_collection{index}.('near_lateral_offset')));
    
    % 统计区间主动接管次数
    segment_active_intervention_number(index) = length(find(ismember(...
        obj.data_collection.('closest_point_segment_ID')(...
        active_intervention_index + 1), segment_ID_collection(index))));
    
    % 统计区间被动接管次数
    segment_passive_intervention_number(index) = length(find(ismember(...
        obj.data_collection.('closest_point_segment_ID')(...
        passive_intervention_index + 1), segment_ID_collection(index))));
end

%% 读取映射轨迹生成模板表格
trajectory_generate_template_table = readtable(...
    obj.reference_trajectory_manager.mapping_file_path, 'PreserveVariableNames', true);

%% 分析全程运行里程
% 相邻两点间距初始化
segment_length = zeros(height(obj.data_collection), 1);

% 计算运行轨迹相邻两点的间距
segment_length(2 : end) = sqrt(diff(obj.data_collection.('ENU_x')).^2 + ...
    diff(obj.data_collection.('ENU_y')).^2);

% 计算运行的累计距离
cumulative_length = cumsum(segment_length);
fprintf('$全程运行里程：%.1f [km]\n', cumulative_length(end) / 1000);

%% 分析全程运行耗时
run_time = obj.data_collection.('time_axis')(end) - obj.data_collection.('time_axis')(1);
fprintf('$全程运行耗时：%.1f [min]\n', run_time / 60);

%% 分析全程旅行速度
average_speed = mean(obj.data_collection.('tram_speed'));
fprintf('$全程旅行速度：%.1f [km/h]\n', average_speed);

%% 分析全程最高速度
max_speed = max(obj.data_collection.('tram_speed'));
fprintf('$全程最高速度：%.1f [km/h]\n', max_speed);

%% 分析全程最大横向偏差
max_lateral_offset = max(abs(obj.data_collection.('near_lateral_offset')));
fprintf('$全程最大横向偏差：%.2f [m]\n', max_lateral_offset);

%% 分析全程平均横向偏差
average_lateral_offset = mean(abs(obj.data_collection.('near_lateral_offset')));
fprintf('$全程平均横向偏差：%.2f [m]\n', average_lateral_offset);

%% 分析全程主动接管次数
active_intervention_number = length(active_intervention_index);
fprintf('$全程主动接管次数：%d\n', active_intervention_number);

%% 分析全程被动接管次数
passive_intervention_number = length(passive_intervention_index);
fprintf('$全程被动接管次数：%d\n', passive_intervention_number);

%% 分析区间运行耗时排名
Local_signal_top_bottom_analyze(segment_run_time, segment_ID_collection, ...
    trajectory_generate_template_table, '运行耗时', 1, 'min');

%% 分析区间旅行速度排名
Local_signal_top_bottom_analyze(segment_average_speed, segment_ID_collection, ...
    trajectory_generate_template_table, '旅行速度', 1, 'km/h');

%% 分析区间最高速度排名
Local_signal_top_bottom_analyze(segment_max_speed, segment_ID_collection, ...
    trajectory_generate_template_table, '最高速度', 1, 'km/h');

%% 分析区间最大横向偏差排名
Local_signal_top_bottom_analyze(segment_max_lateral_offset, segment_ID_collection, ...
    trajectory_generate_template_table, '最大横向偏差', 2, 'm');

%% 分析区间平均横向偏差排名
Local_signal_top_bottom_analyze(segment_average_lateral_offset, segment_ID_collection, ...
    trajectory_generate_template_table, '平均横向偏差', 2, 'm');

%% 分析区间主动接管次数排名
Local_none_zero_signal_top_analyze(segment_active_intervention_number, segment_ID_collection, ...
    trajectory_generate_template_table, '主动接管次数', 0);

%% 分析区间被动接管次数排名
Local_none_zero_signal_top_analyze(segment_passive_intervention_number, segment_ID_collection, ...
    trajectory_generate_template_table, '被动接管次数', 0);

end

%% 局部函数：信号头尾排名分析
function [] = Local_signal_top_bottom_analyze(segment_signal, segment_ID_collection, ...
    trajectory_generate_template_table, signal_name, signal_decimal, signal_unit)
%   1.输入参数：
%       (1)segment_signal                        区间信号数值序列，实数
%       (2)segment_ID_collection                 区间代号集合，正整数
%       (3)trajectory_generate_template_table    轨迹生成模板表格，必须包含区间代号、起始点、终止点列
%       (4)signal_name                           信号名称，字符数组或字符串
%       (5)signal_decimal                        信号小数位数，自然数
%       (6)signal_unit                           信号单位，字符数组或字符串，没有单位可留空
%   2.输出参数：无

% 计算区间数量
segment_number = length(segment_ID_collection);

% 对区间信号按升序排序，固定显示指定位数小数
if 0 < signal_decimal
    string_format = sprintf('%%.%df ', signal_decimal);
else
    string_format = '%d ';
end
[sorted_segment_signal, sorted_index] = sort(segment_signal);
temp_segment_signal = sprintf(string_format, sorted_segment_signal);

% 将糅杂在一起的区间信号序列拆分为cell数组
temp_split_segment_signal = split(temp_segment_signal);
sorted_segment_signal_cell = temp_split_segment_signal(1 : segment_number);

% 区分输入参数个数以定义表格每一列的表头
if 5 < nargin
    signal_table_column_name = {'序号', sprintf('%s [%s]', signal_name, ...
        signal_unit), '区间代号', '区间起点', '区间终点'};
else
    signal_table_column_name = {'序号', signal_name, '区间代号', '区间起点', '区间终点'};
end

% 区间数量大于3时取前三名、倒数前三名
if 3 < segment_number
    % 排名索引
    signal_row_index = string(transpose(1 : 3));
    
    % 关联的区间代号
    [~, signal_segment_index_top] = ismember(segment_ID_collection(...
        sorted_index(1 : 3)), trajectory_generate_template_table.('区间代号'));
    [~, signal_segment_index_bottom] = ismember(segment_ID_collection(...
        sorted_index(end : -1 : end - 2)), trajectory_generate_template_table.('区间代号'));
    
    % 所有区间信号头尾排名筛选
    signal_segment_top = sorted_segment_signal_cell(1 : 3, :);
    signal_segment_bottom = sorted_segment_signal_cell(end : -1 : end - 2, :);
else
    % 排名索引
    signal_row_index = string(transpose(1 : segment_number));
    
    % 关联的区间代号
    [~, signal_segment_index_top] = ismember(segment_ID_collection(...
        sorted_index(1 : end)), trajectory_generate_template_table.('区间代号'));
    [~, signal_segment_index_bottom] = ismember(segment_ID_collection(...
        sorted_index(end : -1 : 1)), trajectory_generate_template_table.('区间代号'));
    
    % 所有区间信号头尾排名筛选
    signal_segment_top = sorted_segment_signal_cell(1 : end, :);
    signal_segment_bottom = sorted_segment_signal_cell(end : -1 : 1, :);
end

% 关联的区间信息
signal_segment_info_top = [string(trajectory_generate_template_table{...
    signal_segment_index_top, '区间代号'}), string(trajectory_generate_template_table{...
    signal_segment_index_top, '起始点'}), string(trajectory_generate_template_table{...
    signal_segment_index_top, '终止点'})];
signal_segment_info_bottom = [string(trajectory_generate_template_table{...
    signal_segment_index_bottom, '区间代号'}), string(trajectory_generate_template_table{...
    signal_segment_index_bottom, '起始点'}), string(trajectory_generate_template_table{...
    signal_segment_index_bottom, '终止点'})];

% 打印表格的主体
signal_printtable_body_top = cellstr([signal_row_index, ...
    signal_segment_top, signal_segment_info_top]);
signal_printtable_body_bottom = cellstr([signal_row_index, ...
    signal_segment_bottom, signal_segment_info_bottom]);

% 格式化打印表格
fprintf('$区间%s排名TOP：', signal_name);
printtable(signal_printtable_body_bottom, 'colVarNames', signal_table_column_name);
fprintf('$区间%s排名BOTTOM：', signal_name);
printtable(signal_printtable_body_top, 'colVarNames', signal_table_column_name);

end

%% 局部函数：非零信号排名分析
function [] = Local_none_zero_signal_top_analyze(segment_signal, segment_ID_collection, ...
    trajectory_generate_template_table, signal_name, signal_decimal, signal_unit)
%   1.输入参数：
%       (1)segment_signal                        区间信号数值序列，实数
%       (2)segment_ID_collection                 区间代号集合，正整数
%       (3)trajectory_generate_template_table    轨迹生成模板表格，必须包含区间代号、起始点、终止点列
%       (4)signal_name                           信号名称，字符数组或字符串
%       (5)signal_decimal                        信号小数位数，自然数
%       (6)signal_unit                           信号单位，字符数组或字符串，没有单位可留空
%   2.输出参数：无

% 对区间信号按降序排序，固定显示指定位数小数
if 0 < signal_decimal
    string_format = sprintf('%%.%df ', signal_decimal);
else
    string_format = '%d ';
end
[sorted_segment_signal, sorted_index] = sort(segment_signal, 'descend');
temp_segment_signal = sprintf(string_format, sorted_segment_signal);

% 将糅杂在一起的区间信号序列拆分为cell数组，清除零值
temp_split_segment_signal = split(temp_segment_signal);
sorted_segment_signal_cell = temp_split_segment_signal(~ismember(...
    string(temp_split_segment_signal(1 : end - 1)), "0"));

% 同步非零信号更新区间代号集合
temp_segment_ID_collection = segment_ID_collection(sorted_index);
none_zero_segment_ID_collection = temp_segment_ID_collection(~ismember(...
    string(temp_split_segment_signal(1 : end - 1)), "0"));

% 区分输入参数个数以定义表格每一列的表头
if 5 < nargin
    signal_table_column_name = {'序号', sprintf('%s [%s]', signal_name, ...
        signal_unit), '区间代号', '区间起点', '区间终点'};
else
    signal_table_column_name = {'序号', signal_name, '区间代号', '区间起点', '区间终点'};
end

% 排名索引
signal_row_index = string(transpose(1 : length(sorted_segment_signal_cell)));

% 关联的区间代号
[~, signal_segment_index_top] = ismember(none_zero_segment_ID_collection, ...
    trajectory_generate_template_table.('区间代号'));

% 关联的区间信息
signal_segment_info_top = [string(trajectory_generate_template_table{...
    signal_segment_index_top, '区间代号'}), string(trajectory_generate_template_table{...
    signal_segment_index_top, '起始点'}), string(trajectory_generate_template_table{...
    signal_segment_index_top, '终止点'})];

% 打印表格的主体
signal_printtable_body_top = cellstr([signal_row_index, ...
    sorted_segment_signal_cell, signal_segment_info_top]);

% 格式化打印表格
if ~isempty(signal_printtable_body_top)
    fprintf('$区间%s排名TOP：', signal_name);
    printtable(signal_printtable_body_top, 'colVarNames', signal_table_column_name);
end

end
