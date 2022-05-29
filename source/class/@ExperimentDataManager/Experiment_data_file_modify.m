% 修改试验数据相关文件
function [obj] = Experiment_data_file_modify(obj)
%   1.输入参数：
%       (1)obj    EXPERIMENTDATAMANAGER类的一个实例
%   2.输出参数：
%       (1)obj    EXPERIMENTDATAMANAGER类的一个实例

%% 读取既有试验数据配置XML文件
obj = obj.Experiment_data_config_XML_read;

%% 编辑既有的SDI绘图配置文件
winopen(fullfile(obj.SDI_plot_config_file_path));
edit_status = input('->是否已经编辑完SDI绘图配置文件并且关闭（Y/N） [回车默认Y]: ', 's');
if isempty(edit_status)
    edit_status = 'Y';
end
if ~contains(edit_status, {'Y', 'y', 'YES', 'Yes', 'yes'})
    warning('请优先编辑完SDI绘图配置文件并且关闭！');
    return;
end

%% 清除上一轮测试数据SDI绘图使能
clear_previous_SDI_plot_enable_string = input(...
    '->是否清除上一轮测试数据SDI绘图（Y/N） [回车保留上一次的设置，初始默认为Y]: ', 's');
if ~isempty(clear_previous_SDI_plot_enable_string)
    obj.clear_previous_SDI_plot_enable = contains(...
        clear_previous_SDI_plot_enable_string, {'Y', 'y', 'YES', 'Yes', 'yes'});
end

%% 根据选择判断是否重新选择数据源文件
replace_data_source_file_enable_string = input(...
    '->是否重新选择数据源文件（Y/N） [回车默认N]: ', 's');
if isempty(replace_data_source_file_enable_string)
    replace_data_source_file_enable_string = 'N';
end
if contains(replace_data_source_file_enable_string, {'Y', 'y', 'YES', 'Yes', 'yes'})
    % 更新试验数据源文件
    obj = obj.Experiment_data_source_file_update;
end

%% 写入试验数据配置XML文件
obj.Experiment_data_config_XML_write;

%% 提示修改试验数据成功
fprintf('***成功修改试验数据【%s】***\n', obj.name);

end
