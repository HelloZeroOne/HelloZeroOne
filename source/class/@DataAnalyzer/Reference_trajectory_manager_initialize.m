% 初始化数据分析所需的参考轨迹管理器
function [obj] = Reference_trajectory_manager_initialize(obj)
%   1.输入参数：
%       (1)obj    DATAANALYZER类的一个实例
%   2.输出参数：
%       (1)obj    DATAANALYZER类的一个实例

%% 如果参考轨迹名称不是""，拼接xml扩展名,设置参考轨迹管理器XML文件路径
if ~isequal("", obj.reference_trajectory_name)
    obj.reference_trajectory_manager = ...
        obj.reference_trajectory_manager.Trajectory_config_XML_file_path_set(...
        append(obj.reference_trajectory_name, ".xml"));
else
    error('参考轨迹名称无效！');
end

%% 读取轨迹配置XML文件
obj.reference_trajectory_manager = ...
    obj.reference_trajectory_manager.Trajectory_config_XML_read;

end
