% 路径平滑
function [smoothed_path] = Path_smooth(original_path)
%   1.输入参数：
%       (1)original_path    待平滑的原始路径，矩阵，至少包含前3列
%          ->第1列为x(m)，第2列为y(m)，第3列为路径类型
%   2.输出参数：
%       (1)smoothed_path    平滑后的路径，矩阵，至少包含前2列
%          ->第1列为x(m)，第2列为y(m)

%% 初始化
% 平滑项和曲率项的设定参考了论文，平滑项效果很明显，而曲率项和距离项只有在路径
% 曲率较大的情况下才有效果，目前采的路径一般都是直线，所以没有用距离项和曲率项
distance_weight         = 0;                       % 距离权重
smooth_weight           = 0.2;                     % 平滑权重
curvature_weight        = 0;                       % 曲率权重

% 迭代次数到500次差不多就收敛了，越往后优化的幅度越小，也没什么意义了
max_iteration_times     = 500;                     % 最大迭代次数
current_iteration_times = 0;                       % 当前迭代次数

% 曲率偏导权重，0.25、0.5、0.25的选择是参考了网上相关源码，因为某一点的曲率计算
% 与当前点、当前点的前一点和后一点都有关，对于当前点求得的三个偏导对应了三个梯度
% 方向，应该往当前的点梯度方向移动最大，两边方向次之，所以选择了这三个系数。
Pki_Pxid1_weight        = 0.25;                    % xi点曲率对xi-1点偏导权重
Pki_Pxi_weight          = 0.5;                     % xi点曲率对xi点偏导权重
Pki_Pxip1_weight        = 0.25;                    % xi点曲率对xi+1点偏导权重

yi                      = original_path(:, 1 : 2); % 筛选出原始路径坐标
xi                      = yi;                      % 迭代初值为原始路径
way_point_number        = size(yi, 1);             % 路点数目
ki_threshold            = 1 / 16.5;                % 开始计算曲率项的阈值

%% 梯度下降法：固定次数循环迭代
while max_iteration_times > current_iteration_times
    current_iteration_times = current_iteration_times + 1;
    
    % 遍历所有路点
    for index = 3 : way_point_number - 2
       %% 检测到子路径终点则跳过迭代，保持子路径终点（路径分割点）保持不变
        if isequal(0, original_path(index, 3))
            continue;
        end
        
       %% 叠加距离项，限制优化后的路径与原路径的偏离
        xi(index, :) = xi(index, :) - distance_weight * (yi(index, :) - xi(index, :));
        
       %% 叠加平滑项，使路径尽量平滑
        xi(index, :) = xi(index, :) - smooth_weight * (xi(index + 2, :) - ...
            4 * xi(index + 1, :) + 6 * xi(index, :) - 4 * xi(index - 1, :) + xi(index - 2, :));
        
       %% 叠加曲率项，在每个路点处对路径的瞬时曲率施加一个上限
        delta_xi = xi(index, :) - xi(index - 1, :);
        delta_xip1 = xi(index + 1, :) - xi(index, :);
        norm_delta_xi = norm(delta_xi);
        norm_delta_xip1 = norm(delta_xip1);
        delta_phi = acos(delta_xi * delta_xip1' / (norm_delta_xi * norm_delta_xip1));
        ki = delta_phi / norm_delta_xi;
        
        % 在曲率大于等于阈值时才开始计算曲率项,因为曲率项只有在路径曲率较大的情况下才有效果
        if ki_threshold <= ki
        	PDphi_PcosDphi = -1 / sqrt(1 - (cos(delta_phi))^2);   
            p1 = Orthogonal_complements(delta_xi, -delta_xip1) / (...
                norm_delta_xi * norm_delta_xip1);
            p2 = Orthogonal_complements(-delta_xip1, delta_xi) / (...
                norm_delta_xi * norm_delta_xip1);
            u = PDphi_PcosDphi / norm_delta_xi;
            s = delta_phi / norm_delta_xi^2;
            Pki_Pxi = u * (-p1 - p2) - s * ones(1, 2);
            Pki_Pxid1 = u * p2 + s * ones(1, 2);
            Pki_Pxip1 = u * p1;
            xi(index, :) = xi(index, :) - curvature_weight * (Pki_Pxid1_weight * Pki_Pxid1 + ...
                Pki_Pxi_weight * Pki_Pxi + Pki_Pxip1_weight * Pki_Pxip1);
        end
    end
end

%% 输出平滑后的路径
smoothed_path = [xi, original_path(:, 3 : end)];

end

% 局部函数：求正交补
function orc = Orthogonal_complements(a, b)
    orc = a - a * b' * b / (norm(b))^2;
end
