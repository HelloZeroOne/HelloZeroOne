% 将组合惯导给出的位置信息转换成“局部切平面直角坐标系”（东北天ENU)
function [ENU_x, ENU_y, ENU_z] = GNSS_pose2relative_ENU_m(Bp, Lp, Hp, Bq, Lq, Hq)
%   1.输入参数：
%       (1)Bp       相对坐标原点P的纬度，实数，deg
%       (2)Lp       相对坐标原点P的经度，实数，deg
%       (3)Hp       相对坐标原点P的高度，实数，m
%       (4)Bq       组合惯导给出的当前位置点Q的纬度，实数，deg
%       (5)Lq       组合惯导给出的当前位置点Q的经度，实数，deg
%       (6)Hq       组合惯导给出的当前位置点Q的高度，实数，m
%   2.输出参数：
%       (1)ENU_x    组合惯导给出的当前位置点Q在P点，实数，deg
%       (2)ENU_y    组合惯导给出的当前位置点Q（Bq, Lq, Hq）的经度，实数，deg
%       (3)ENU_z    组合惯导给出的当前位置点Q（Bq, Lq, Hq）的高度，实数，m

%% 将经纬度换算成地心大地坐标系
XYZp = WGS84_BLH_to_earth_xyz_m(Bp, Lp, Hp);
XYZq = WGS84_BLH_to_earth_xyz_m(Bq, Lq, Hq);

%% 将当前位置点Q的地心大地坐标系坐标换算成以P为原点的东北天ENU相对坐标
[ENU_x, ENU_y, ENU_z] = Earth_xyz_to_ENU_xyz_m(Bp, Lp, XYZp, XYZq);

end
