% 模板化绘图
function [] = Template_plot(data_source_table, plot_template_table, varargin)
%   1.输入参数：
%       (1)data_source_table      数据源表格，table
%       (2)plot_template_table    绘图模板表格
%       (3)varargin               自定义属性，可变长度参数，键值对形式，可输入以下一对或者多对
%          ->可选键值对1：'TitleName',plot_title，代表绘图标题
%          ->可选键值对2：'LegendName',plot_legend，代表图例，字符数组或字符串
%          ->可选键值对3：'PlotMode',plot_mode，代表绘图模式，有以下模式可选
%            ->'solo'：单张绘图，重复执行将覆盖上一次绘图结果，不设置该键值对时默认采用该模式
%            ->'continuous'：连续绘图，重复执行将接续上一次最后一张图号继续绘图，连续输出图片
%          ->可选键值对4：'ColorMode',color_mode，代表曲线颜色模式，有以下模式可选
%            ->'manual'：根据绘图模板表格手动设定颜色，不设置该键值对时默认采用该模式
%            ->'auto'：自动设定颜色
%   2.输出参数：无

%% 根据自定义名称内容决定是否调整绘图标题、图例
% 初始化
customized_key = {'TitleName', 'LegendName', 'PlotMode', 'ColorMode'};
customized_value.TitleName = cellstr(plot_template_table.('绘图标题'));
customized_value.LegendName = cellstr(plot_template_table.('图例'));
customized_value.PlotMode = cellstr('solo');
customized_value.ColorMode = cellstr('manual');

% 校验传入参数的数量
if 10 < nargin
    error('传入参数过多！');
end

% 根据传入参数的数量及指定键名调整绘图标题、图例、绘图模式、曲线颜色模式
if 2 < nargin
    if ismember(nargin, [4, 6, 8, 10])
        if contains(varargin{1}, customized_key)
            for index = 1 : length(customized_value.(varargin{1}))
                customized_value.(varargin{1})(index) = cellstr(varargin{2});
            end
        else
            error('传入了非法的键名！');
        end
    else
        error('传入参数数量不匹配！');
    end
    
    if ismember(nargin, [6, 8, 10])
        if contains(varargin{3}, setdiff(customized_key, varargin{1}))
            for index = 1 : length(customized_value.(varargin{3}))
                customized_value.(varargin{3})(index) = cellstr(varargin{4});
            end
        else
            error('传入了非法的键名！');
        end
    end
    
    if ismember(nargin, [8, 10])
        if contains(varargin{5}, setdiff(customized_key, {varargin{1}, varargin{3}}))
            for index = 1 : length(customized_value.(varargin{5}))
                customized_value.(varargin{5})(index) = cellstr(varargin{6});
            end
        else
            error('传入了非法的键名！');
        end
    end
    
    if isequal(nargin, 10)
        if contains(varargin{7}, setdiff(customized_key, {varargin{1}, ...
                varargin{3}, varargin{5}}))
            for index = 1 : length(customized_value.(varargin{7}))
                customized_value.(varargin{7})(index) = cellstr(varargin{8});
            end
        else
            error('传入了非法的键名！');
        end
    end
end

% 修正自定义值的数据类型
if iscell(customized_value.TitleName{1})
    for index = 1 : length(customized_value.TitleName)
        customized_value.TitleName{index} = customized_value.TitleName{index}{1};
    end
end

if iscell(customized_value.PlotMode{1})
    customized_value.PlotMode = customized_value.PlotMode{1}{1};
end

if iscell(customized_value.PlotMode)
    customized_value.PlotMode = customized_value.PlotMode{1};
end

if iscell(customized_value.ColorMode{1})
    customized_value.ColorMode = customized_value.ColorMode{1}{1};
end

if iscell(customized_value.ColorMode)
    customized_value.ColorMode = customized_value.ColorMode{1};
end

% 字符串下划线重组，避免绘图时下划线将字体拉小
for index = 1 : length(customized_value.TitleName)
    customized_value.TitleName{index} = ...
        Plot_string_underline_regroup(customized_value.TitleName{index});
    if ~iscell(customized_value.LegendName{index})
        customized_value.LegendName{index} = ...
            Plot_string_underline_regroup(customized_value.LegendName{index});
    else
        for index2 = 1 : length(customized_value.LegendName{index})
            customized_value.LegendName{index}{index2} = ...
                Plot_string_underline_regroup(customized_value.LegendName{index}{index2});
        end
    end
end

%% 检查当前图片编号
% 初始化
current_figure_number = 0;

% 连续绘图模式下需要考虑当前图片编号，在其基础上累加实现连续绘图
if isequal('continuous', customized_value.PlotMode)
    % 获取当前图片信息
    current_figure = gcf;
    current_axes = current_figure.CurrentAxes;
    
    % 在当前图片坐标轴非空的情况下说明之前输出过图片，记录其编号
    if ~isempty(current_axes)
        current_figure_number = current_figure.Number;
    end
end

%% 根据模板表格配置参数依次绘图
for index = 1 : height(plot_template_table)
    %% 组合绘图曲线数据源及曲线线型
    % 初始化
    if istable(data_source_table)
        curve_number = 1;
    else
        curve_number = length(data_source_table);
    end
    plot_curve_config = cell(1, 3 * curve_number);
    
    % 遍历数据源表格以合成绘图曲线配置
    for index2 = 1 : curve_number
        % 去除填充的NaN数据
        if iscell(data_source_table)
            temp_x = data_source_table{index2}.(plot_template_table.('X轴信号名称'){index});
            temp_y = data_source_table{index2}.(plot_template_table.('Y轴信号名称'){index});
        else
            temp_x = data_source_table.(plot_template_table.('X轴信号名称'){index});
            temp_y = data_source_table.(plot_template_table.('Y轴信号名称'){index});
        end
        abandoned_index2 = isnan(temp_x(:));
        temp_x(abandoned_index2) = [];
        temp_y(abandoned_index2) = [];
        
        % 组合绘图曲线配置
        plot_curve_config{3 * index2 - 2} = temp_x;
        plot_curve_config{3 * index2 - 1} = temp_y;
        plot_curve_config{3 * index2} = plot_template_table.('曲线线型'){index};
    end
    
    %% 在当前图片编号基础上累加预设绘图编号作为最终的图片编号
    figure(current_figure_number + plot_template_table.('绘图编号')(index));
    
    %% 根据模板设置指定子图编号
    subplot_rows = plot_template_table.('子图行数')(index);
    subplot_columns = plot_template_table.('子图列数')(index);
    subplot_index = plot_template_table.('子图索引')(index);
    if 0 < subplot_rows && 0 < subplot_columns && 0 < subplot_index
        if subplot_rows * subplot_columns < subplot_index
            error('子图索引超范围！');
        else
            subplot(subplot_rows, subplot_columns, subplot_index);
        end
    end
    
    %% 调用基本绘图函数
    % 根据绘图模板中的曲线颜色或传入的曲线颜色模式是否为auto决定是否自动设置曲线颜色
    if contains('auto', {plot_template_table.('曲线颜色'){index}, ...
            customized_value.ColorMode})
        plot_color_set = {'ColorMode', 'auto'};
    else
        plot_color_set = {'Color', plot_template_table.('曲线颜色'){index}};
    end
    plot(plot_curve_config{:}, plot_color_set{:}, 'linewidth', ...
        plot_template_table.('曲线宽度')(index), 'MarkerSize', ...
        plot_template_table.('标志大小')(index), 'DisplayName', ...
        customized_value.LegendName{index});
    xlabel(plot_template_table.('X轴标签'){index});
    ylabel(plot_template_table.('Y轴标签'){index});
    grid on;
    hold on;
    legend;
    
    %% 打印绘图标题
    title(customized_value.TitleName{index});
    
    %% 坐标轴属性设置
    axis(plot_template_table.('坐标轴比例风格'){index});
    Axes_properties_set(gca, plot_template_table.('坐标轴字体大小')(index));
    
end

end
