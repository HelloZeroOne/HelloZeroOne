% 显示参考轨迹信息
function [] = Reference_trajectory_display(obj, plot_mode)
%   1.输入参数：
%       (1)obj          REFERENCETRAJECTORY类的一个实例
%       (2)plot_mode    绘图模式，有以下模式可选
%          ->'solo'：单张绘图，重复执行将覆盖上一次绘图结果，不设置该键值对时默认采用该模式
%          ->'continuous'：连续绘图，重复执行将接续上一次最后一张图号继续绘图，连续输出图片
%   2.输出参数：无

%% 初始化
% 绘图模板文件
plot_template_file = 'Plot_config_reference_trajectory_display.xlsx';

% 绘图模式默认值
if 2 > nargin
    plot_mode = 'solo';
end

%% 校验参考轨迹路点属性表格的有效性
if ~all(ismember({'cumulative_length', 'ENU_x', 'ENU_y', 'ENU_yaw_angle', 'curvature', ...
        'segment_length'}, obj.way_point_properties.Properties.VariableNames))
    warning('***参考轨迹路点属性表格的列名不符合要求***');
    return;
end

%% 计算观察量
% 初始化
delta_angle = zeros(height(obj.way_point_properties), 1);
orientation_angle = zeros(height(obj.way_point_properties), 1);

% 计算相邻两点的角度差(取模调整到-180~180以规避0~360突变)
delta_angle(2 : end) = mod(diff(obj.way_point_properties.('ENU_yaw_angle')) + 540, 360) - 180;

% 计算参考轨迹路点索引递增方向的相邻两点连线的向量方位角，设定第一个点的方向与第二点的一致
orientation_angle(2 : end) = rad2deg(atan2(diff(obj.way_point_properties.('ENU_y')), ...
    diff(obj.way_point_properties.('ENU_x'))));
orientation_angle(1) = orientation_angle(2);

%% 合成绘图数据源表格
% 采用原始参考轨迹路点属性表格作为基础
data_source_table = obj.way_point_properties;

% 补充横摆角偏差信号
data_source_table.('delta_angle') = delta_angle;

% 补充向量方位角信号
data_source_table.('orientation_angle') = orientation_angle;

%% 自定义图例为参考轨迹名称
legend_name = obj.name;

%% 绘图查看路径
% 读取绘图模板表格
plot_template_table = readtable(plot_template_file, 'PreserveVariableNames', true);

% 模板化绘图
Template_plot(data_source_table, plot_template_table, 'LegendName', legend_name, ...
    'PlotMode', plot_mode, 'ColorMode', 'auto');

end
