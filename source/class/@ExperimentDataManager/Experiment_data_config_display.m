% 显示试验数据配置文件信息
function [] = Experiment_data_config_display(obj)
%   1.输入参数：
%       (1)obj    EXPERIMENTDATAMANAGER类的一个实例
%   2.输出参数：无

%% 读取既有试验数据配置XML文件
obj = obj.Experiment_data_config_XML_read;

%% 打印成员属性内容
% 试验数据名称
fprintf("$试验数据名称：%s\n", obj.name);

% 试验数据描述
fprintf("$试验数据描述：%s\n", obj.description);

% 试验数据配置文件路径
fprintf("$试验数据配置文件路径：%s\n", obj.experiment_data_config_XML_file_path);

% SDI绘图配置文件路径
fprintf("$SDI绘图配置文件路径：%s\n", obj.SDI_plot_config_file_path);

% 数据源文件路径
for index = 1 : size(obj.data_source_file_path, 1)
    fprintf("$数据源文件%d路径：%s\n", index, obj.data_source_file_path(index));
end

% 清除上一轮测试数据SDI绘图使能
fprintf("$清除上一轮测试数据SDI绘图使能：%s\n", string(obj.clear_previous_SDI_plot_enable));

end
