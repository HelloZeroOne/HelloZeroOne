% 载入参考轨迹
function [obj] = Reference_trajectory_load(obj)
%   1.输入参数：
%       (1)obj    REFERENCETRAJECTORY类的一个实例
%   2.输出参数：
%       (1)obj    REFERENCETRAJECTORY类的一个实例

%% 拆分文件名解析轨迹名称
[~, obj.name, ~] = fileparts(obj.reference_trajectory_file_path);

%% 从文件中读取参考轨迹表格
obj.way_point_properties = readtable(obj.reference_trajectory_file_path, ...
    'PreserveVariableNames', true);

end
