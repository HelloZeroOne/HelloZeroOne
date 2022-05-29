% 获取数据分析所需的参考轨迹
function [obj] = Reference_trajectory_get(obj)
%   1.输入参数：
%       (1)obj    DATAANALYZER类的一个实例
%   2.输出参数：
%       (1)obj    DATAANALYZER类的一个实例

%% 如果参考轨迹管理器中的处理后的轨迹文件路径不是""，设置参考轨迹文件路径
if ~isequal("", obj.reference_trajectory_manager.processed_trajectory_file_path)
    obj.reference_trajectory = ...
        obj.reference_trajectory.Reference_trajectory_file_path_set(...
        obj.reference_trajectory_manager.processed_trajectory_file_path);
else
    error('参考轨迹文件路径无效！');
end

%% 载入参考轨迹
obj.reference_trajectory = obj.reference_trajectory.Reference_trajectory_load;

end
