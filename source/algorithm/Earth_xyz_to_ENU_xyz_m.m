% 将“地心大地坐标系”转换成“局部切平面直角坐标系”（东北天ENU)
function [Xqp, Yqp, Zqp] = Earth_xyz_to_ENU_xyz_m(Bp, Lp, XYZp, XYZq)
%   1.输入参数：
%       (1)Bp      初始点P（Bp, Lp, Hp）的纬度，实数，deg
%       (2)Lp      初始点P（Bp, Lp, Hp）的经度，实数，deg
%       (3)XYZp    初始点P（Xp, Yp, Zp）的“地心大地坐标”，n×3矩阵，实数，m
%       (4)XYZq    过程点Q（Xq, Yq, Zq）的“地心大地坐标”，n×3矩阵，实数，m
%   2.输出参数：
%       (1)Xqp    “局部切平面直角坐标系”（东北天ENU)下Q点相对P点的x坐标，n×1向量，实数，m
%       (2)Yqp    “局部切平面直角坐标系”（东北天ENU)下Q点相对P点的y坐标，n×1向量，实数，m
%       (3)Zqp    “局部切平面直角坐标系”（东北天ENU)下Q点相对P点的z坐标，n×1向量，实数，m

%% 将P点的经纬度转成弧度值方便使用三角函数
Bp_rad = deg2rad(Bp);
Lp_rad = deg2rad(Lp);

%% 建立坐标转换的系数矩阵R_BLHtoENU
R_BLH2ENU = zeros(3, 3);
R_BLH2ENU(1, 1) = -sin(Lp_rad);
R_BLH2ENU(1, 2) = cos(Lp_rad);
R_BLH2ENU(1, 3) = 0;
R_BLH2ENU(2, 1) = -sin(Bp_rad) * cos(Lp_rad);
R_BLH2ENU(2, 2) = -sin(Bp_rad) * sin(Lp_rad);
R_BLH2ENU(2, 3) = cos(Bp_rad);
R_BLH2ENU(3, 1) = cos(Bp_rad) * cos(Lp_rad);
R_BLH2ENU(3, 2) = cos(Bp_rad) * sin(Lp_rad);
R_BLH2ENU(3, 3) = sin(Bp_rad);

%% 计算QP两点的坐标差值diff_qp，并转置，方便后续矩阵相乘
diff_qp = transpose(XYZq - XYZp);

%% 计算结果并逐列输出
result = R_BLH2ENU * diff_qp;
Xqp = result(1);
Yqp = result(2);
Zqp = result(3);

end
