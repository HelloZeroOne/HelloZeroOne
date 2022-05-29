% 创建试验数据相关文件
function [obj] = Experiment_data_file_create(obj)
%   1.输入参数：
%       (1)obj    EXPERIMENTDATAMANAGER类的一个实例
%   2.输出参数：
%       (1)obj    EXPERIMENTDATAMANAGER类的一个实例

%% 初始化
% SDI绘图配置模板存储目录
SDI_plot_config_template_file_storage_directory = fullfile(pwd, ...
    '../data/template/SDI_plot/');

% SDI绘图配置模板文件
SDI_plot_config_template_file = 'SDI_plot_config_template.xlsx';

% 试验数据存储目录
experiment_data_storage_directory = fullfile(pwd, '../data/experiment/storage/');

%% EXPERIMENTDATAMANAGER类实例属性设置
% 拆分路径、文件、扩展名，设置试验数据名称
[~, obj.name, ~] = fileparts(obj.experiment_data_config_XML_file_path);

% 设置试验数据描述（目的、环境、司机、特殊情况等详细信息）
input_info = input(['->请输入试验数据描述（目的、环境、司机、特殊情况等' ...
    '详细信息） [回车默认为空]: '], 's');
if ~isempty(input_info)
    obj.description = input_info;
end

% 拼接SDI绘图配置文件路径
obj.SDI_plot_config_file_path = fullfile(experiment_data_storage_directory, ...
    obj.name, append(obj.name, '_SDI绘图配置.xlsx'));

% 从模板复制新建SDI绘图配置文件
copyfile(fullfile(SDI_plot_config_template_file_storage_directory, ...
    SDI_plot_config_template_file), obj.SDI_plot_config_file_path);

% 编辑新建的SDI绘图配置文件
winopen(fullfile(obj.SDI_plot_config_file_path));
edit_status = input('->是否已经编辑完SDI绘图配置文件并且关闭（Y/N） [回车默认Y]: ', 's');
if isempty(edit_status)
    edit_status = 'Y';
end
if ~contains(edit_status, {'Y', 'y', 'YES', 'Yes', 'yes'})
    error('请优先编辑完SDI绘图配置文件并且关闭！');
end

% 清除上一轮测试数据SDI绘图使能
clear_previous_SDI_plot_enable_string = input(...
    '->是否清除上一轮测试数据SDI绘图（Y/N） [回车默认Y]: ', 's');
if ~isempty(clear_previous_SDI_plot_enable_string)
    obj.clear_previous_SDI_plot_enable = contains(...
        clear_previous_SDI_plot_enable_string, {'Y', 'y', 'YES', 'Yes', 'yes'});
end

% 更新试验数据源文件
obj = obj.Experiment_data_source_file_update;

%% 写入试验数据配置XML文件
obj.Experiment_data_config_XML_write;

%% 提示创建试验数据成功
fprintf('***成功创建试验数据【%s】***\n', obj.name);

end
