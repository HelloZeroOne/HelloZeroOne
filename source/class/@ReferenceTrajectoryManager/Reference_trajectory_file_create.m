% 创建参考轨迹相关文件
function [obj] = Reference_trajectory_file_create(obj)
%   1.输入参数：
%       (1)obj    REFERENCETRAJECTORYMANAGER类的一个实例
%   2.输出参数：
%       (1)obj    REFERENCETRAJECTORYMANAGER类的一个实例

%% 初始化
% 轨迹生成模板文件存储目录
trajectory_generate_template_storage_directory = fullfile(pwd, ...
    '../data/template/trajectory_generate/');

% 映射轨迹模板文件
mapping_trajectory_template_file = 'Mapping_trajectory_generate.xlsx';

% 轨迹存储目录
trajectory_storage_directory = fullfile(pwd, '../data/trajectory/storage/');

%% REFERENCETRAJECTORYMANAGER类实例属性设置
% 拆分路径、文件、扩展名，设置轨迹名称
[~, obj.name, ~] = fileparts(obj.trajectory_config_XML_file_path);

% 设置轨迹描述（环境、司机、特殊情况等详细信息）
input_info = input('->请输入轨迹描述（环境、司机、特殊情况等详细信息） [回车默认为空]: ', 's');
if ~isempty(input_info)
    obj.description = input_info;
end

% 拼接轨迹映射文件路径
obj.mapping_file_path = fullfile(trajectory_storage_directory, ...
    obj.name, append(obj.name, '_轨迹映射.xlsx'));

% 从模板复制新建轨迹映射文件
copyfile(fullfile(trajectory_generate_template_storage_directory, ...
    mapping_trajectory_template_file), obj.mapping_file_path);

% 编辑新建的轨迹映射文件
winopen(fullfile(obj.mapping_file_path));
edit_status = input('->是否已经编辑完轨迹映射文件并且关闭（Y/N） [回车默认Y]: ', 's');
if isempty(edit_status)
    edit_status = 'Y';
end
if ~contains(edit_status, {'Y', 'y', 'YES', 'Yes', 'yes'})
    error('请优先编辑完轨迹映射文件并且关闭！');
end

% 更新数据源文件路径
obj = obj.Data_source_file_path_update;

% 根据轨迹名称自动生成轨迹配置结构体的其余子域
obj.original_trajectory_file_path = fullfile(...
    trajectory_storage_directory, obj.name, append(obj.name, '_原始轨迹.csv'));
obj.processed_trajectory_file_path = fullfile(...
    trajectory_storage_directory, obj.name, append(obj.name, '.csv'));
obj.split_point_map_file_path = fullfile(...
    trajectory_storage_directory, obj.name, append(obj.name, '_分段点地图.mat'));

% 更新轨迹配置数值类型的属性
obj = obj.Trajectory_config_numerical_properties_update;

%% 导入原始轨迹
obj.Original_trajectory_import;

%% 从原始轨迹生成处理后的轨迹
obj.Processed_trajectory_generate;

%% 提示创建参考轨迹成功
fprintf('***成功创建参考轨迹【%s】***\n', obj.name);

end
