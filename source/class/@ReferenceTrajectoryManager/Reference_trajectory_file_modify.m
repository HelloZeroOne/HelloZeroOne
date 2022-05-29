% 修改参考轨迹相关文件
function [obj] = Reference_trajectory_file_modify(obj)
%   1.输入参数：
%       (1)obj    REFERENCETRAJECTORYMANAGER类的一个实例
%   2.输出参数：
%       (1)obj    REFERENCETRAJECTORYMANAGER类的一个实例

%% 读取既有轨迹配置XML文件
obj = obj.Trajectory_config_XML_read;

%% 编辑既有的轨迹映射文件
winopen(fullfile(obj.mapping_file_path));
edit_status = input('->是否已经编辑完轨迹映射文件并且关闭（Y/N） [回车默认Y]: ', 's');
if isempty(edit_status)
    edit_status = 'Y';
end
if ~contains(edit_status, {'Y', 'y', 'YES', 'Yes', 'yes'})
    warning('请优先编辑完轨迹映射文件并且关闭！');
    return;
end

%% 根据选择判断是否重新导出轨迹数据
regenerate_trajectory_enable_string = input(...
    '->是否重新从实时采集的数据记录文件中导出轨迹数据（Y/N） [回车默认N]: ', 's');
if isempty(regenerate_trajectory_enable_string)
    regenerate_trajectory_enable_string = 'N';
end
if contains(regenerate_trajectory_enable_string, {'Y', 'y', 'YES', 'Yes', 'yes'})
    
    % 更新数据源文件路径
    obj = obj.Data_source_file_path_update;
    
    % 更新轨迹配置数值类型的属性
    obj = obj.Trajectory_config_numerical_properties_update;
    
    % 导入原始轨迹
    obj.Original_trajectory_import;
    
end

%% 从原始轨迹生成处理后的轨迹
obj.Processed_trajectory_generate;

%% 提示修改参考轨迹成功
fprintf('***成功修改参考轨迹【%s】***\n', obj.name);

end
