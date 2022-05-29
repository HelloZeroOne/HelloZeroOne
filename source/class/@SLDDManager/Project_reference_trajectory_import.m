% 导入工程中的参考轨迹
function [obj] = Project_reference_trajectory_import(obj)
%   1.输入参数：
%       (1)obj    SLDDMANAGER类的一个实例
%   2.输出参数：
%       (1)obj    SLDDMANAGER类的一个实例

%% 初始化
% 轨迹配置文件目录
trajectory_config_directory = fullfile(pwd, '../data/trajectory/config_XML/');

%% 选择参考轨迹配置XML文件（可多选）
[XML_file, XML_file_path] = uigetfile({'*.xml'}, '请选择参考轨迹配置XML文件（可多选）', ...
    trajectory_config_directory, 'MultiSelect', 'on');
if isequal(0, XML_file)
    warning('未选择参考轨迹配置XML文件！');
    return;
end

% 剔除与参考轨迹管理对象中既有参考轨迹重复的文件
XML_file_string = string(XML_file);
if ~isempty(obj.reference_trajectory_cluster)
    XML_file_string(ismember(XML_file_string, [...
        obj.reference_trajectory_cluster.name])) = [];
end

% 统计选择的参考轨迹数量
selected_reference_trajectory_number = size(XML_file_string, 2);

% 如果选择的参考轨迹数量为0，直接返回
if isequal(0, selected_reference_trajectory_number)
    warning('***未选择不同的参考轨迹***');
    return;
end

%% 采用参考轨迹管理类解析所选参考轨迹配置XML文件,将所选参考轨迹导入参考轨迹簇
% 创建REFERENCETRAJECTORYMANAGER类的实例数组
reference_trajectory_manager_obj(selected_reference_trajectory_number, 1) = ...
    ReferenceTrajectoryManager;

% 将合成XML文件路径序列变换类型到string
XML_file_path_queue = transpose(string(fullfile(XML_file_path, XML_file_string)));

% 统计参考轨迹簇中既有的轨迹数量
original_reference_trajectory_number = size(obj.reference_trajectory_cluster, 1);

% 根据所选参考轨迹数量为参考轨迹簇新增部分初始化
obj.reference_trajectory_cluster(end + 1 : end + selected_reference_trajectory_number) = ...
    ReferenceTrajectory;

% 遍历参考轨迹管理对象序列
for index = 1 : selected_reference_trajectory_number
    % 更新所选轨迹配置XML文件路径
    reference_trajectory_manager_obj(index, 1) = reference_trajectory_manager_obj(...
        index, 1).Trajectory_config_XML_file_path_set(XML_file_path_queue(index));
    
    % 读取所选的参考轨迹配置XML文件内容
    reference_trajectory_manager_obj(index, 1) = ...
        reference_trajectory_manager_obj(index, 1).Trajectory_config_XML_read;
    
    % 将所选参考轨迹路径导入参考轨迹簇
    obj.reference_trajectory_cluster(original_reference_trajectory_number + ...
        index, 1) = obj.reference_trajectory_cluster(original_reference_trajectory_number + ...
        index, 1).Reference_trajectory_file_path_set(...
        reference_trajectory_manager_obj(index, 1).processed_trajectory_file_path);
    
    % 载入参考轨迹数据
    obj.reference_trajectory_cluster(original_reference_trajectory_number + ...
        index, 1) = obj.reference_trajectory_cluster(original_reference_trajectory_number + ...
        index, 1).Reference_trajectory_load;
end

%% 显示全部参考轨迹名称序列
% 提示语
fprintf('$数据字典管理器中的参考轨迹簇更新成功，轨迹序列如下:\n');

% 依次显示轨迹名称
for index = 1 : size(obj.reference_trajectory_cluster, 1)
    fprintf('%d - %s\n', index, obj.reference_trajectory_cluster(index, 1).name);
end

end
