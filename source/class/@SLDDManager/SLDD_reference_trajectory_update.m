% 更新数据字典中的参考轨迹
function [obj] = SLDD_reference_trajectory_update(obj)
%   1.输入参数：
%       (1)obj    SLDDMANAGER类的一个实例
%   2.输出参数：
%       (1)obj    SLDDMANAGER类的一个实例

%% 导出数据字典种既有参考轨迹到参考轨迹簇
obj = obj.SLDD_reference_trajectory_export;

% 统计参考轨迹簇里的轨迹数量
trajectory_number1 = size(obj.reference_trajectory_cluster, 1);

%% 选择工程内的参考轨迹导入到参考轨迹簇
obj = obj.Project_reference_trajectory_import;

% 统计选择工程内的参考轨迹后的参考轨迹簇里的轨迹数量
trajectory_number2 = size(obj.reference_trajectory_cluster, 1);

%% 选择删除参考轨迹簇中的轨迹
obj = obj.Reference_trajectory_cluster_delete;

% 统计选择删除参考轨迹簇后剩余的轨迹数量
trajectory_number3 = size(obj.reference_trajectory_cluster, 1);

%% 将更新操作应用到数据字典中
% 如果轨迹数量差不为0，代表选择了不同的参考轨迹需要导入数据字典，或者删除了有效的参考轨迹
if ~isequal(0, trajectory_number1 - trajectory_number2) || ...
        ~isequal(0, trajectory_number2 - trajectory_number3)
    % 删除数据字典中的全部参考轨迹
    obj.SLDD_all_reference_trajectory_delete;
    
    % 将参考轨迹簇导入数据字典
    obj = obj.SLDD_reference_trajectory_import;
    
    % 查看最新的数据字典参考轨迹清单
    obj.SLDD_reference_trajectory_display;
end

end
