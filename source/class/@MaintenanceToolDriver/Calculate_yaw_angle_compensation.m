% 计算组合惯导横摆角软件零位补偿值
function [MC1_yaw_angle_compensation, MC2_yaw_angle_compensation] = ...
    Calculate_yaw_angle_compensation(obj, file_full_path)
%   1.输入参数：
%       (1)obj                           MAINTENANCETOOLDRIVER类的一个实例
%       (2)file_full_path                横摆角零位补偿数据源文件的绝对路径，字符数组或字符串
%   2.输出参数：
%       (1)MC1_yaw_angle_compensation    MC1端转向轴软件零位补偿值，实数，deg
%       (2)MC2_yaw_angle_compensation    MC2端转向轴软件零位补偿值，实数，deg

% 尝试运行，如果失败则弹出提示框，便于在其他电脑上独立运行时排查问题
try
    [MC1_yaw_angle_compensation, MC2_yaw_angle_compensation] = ...
        Local_function_calculate_yaw_angle_compensation(file_full_path);
catch
    uialert(obj.UI_figure, '计算组合惯导横摆角软件零位补偿值时出现异常.', '错误提示');
end

end

% ----- Local function CALCULATE_YAW_ANGLE_COMPENSATION -----
function [MC1_yaw_angle_compensation, MC2_yaw_angle_compensation] = ...
    Local_function_calculate_yaw_angle_compensation(file_full_path)
%   1.输入参数：
%       (1)file_full_path                横摆角零位补偿数据源文件的绝对路径，字符数组或字符串
%   2.输出参数：
%       (1)MC1_yaw_angle_compensation    MC1端转向轴软件零位补偿值，实数，deg
%       (2)MC2_yaw_angle_compensation    MC2端转向轴软件零位补偿值，实数，deg

%% 信号索引设置
MC1_occupied_status_column_index = 1; % MC1占有状态
MC2_occupied_status_column_index = 2; % MC2占有状态
MC1_heading_angle_column_index  = 3; % MC1航向角
MC2_heading_angle_column_index  = 4; % MC2航向角
MC1_latitude_column_index  = 5; % MC1纬度
MC2_latitude_column_index  = 6; % MC2纬度
MC1_longitude_column_index  = 7; % MC1经度
MC2_longitude_column_index  = 8; % MC2经度
tram_speed_column_index  = 9; % 整车速度

%% 表格数据导入
% 导入表格
original_table = readtable(file_full_path, 'PreserveVariableNames', true);

% 搜索表格列标题,与指定信号匹配
for index = 1 : length(original_table.Properties.VariableNames)
    if contains(original_table.Properties.VariableNames{index}, '1占有')
        MC1_occupied_status_column_name = ...
            original_table.Properties.VariableNames{index};
    elseif contains(original_table.Properties.VariableNames{index}, '2占有')
        MC2_occupied_status_column_name = ...
            original_table.Properties.VariableNames{index};
    elseif contains(original_table.Properties.VariableNames{index}, '1车偏航角')
        MC1_heading_angle_column_name = ...
            original_table.Properties.VariableNames{index};
    elseif contains(original_table.Properties.VariableNames{index}, '1车组合惯导航向角')
        MC1_heading_angle_column_name = ...
            original_table.Properties.VariableNames{index};
    elseif contains(original_table.Properties.VariableNames{index}, '2车偏航角')
        MC2_heading_angle_column_name = ...
            original_table.Properties.VariableNames{index};
    elseif contains(original_table.Properties.VariableNames{index}, '2车组合惯导航向角')
        MC2_heading_angle_column_name = ...
            original_table.Properties.VariableNames{index};
    elseif contains(original_table.Properties.VariableNames{index}, '1车纬度')
        MC1_latitude_column_name = ...
            original_table.Properties.VariableNames{index};
    elseif contains(original_table.Properties.VariableNames{index}, '1车组合惯导纬度')
        MC1_latitude_column_name = ...
            original_table.Properties.VariableNames{index};
    elseif contains(original_table.Properties.VariableNames{index}, '2车纬度')
        MC2_latitude_column_name = ...
            original_table.Properties.VariableNames{index};
    elseif contains(original_table.Properties.VariableNames{index}, '2车组合惯导纬度')
        MC2_latitude_column_name = ...
            original_table.Properties.VariableNames{index};
    elseif contains(original_table.Properties.VariableNames{index}, '1车经度')
        MC1_longitude_column_name = ...
            original_table.Properties.VariableNames{index};
    elseif contains(original_table.Properties.VariableNames{index}, '1车组合惯导经度')
        MC1_longitude_column_name = ...
            original_table.Properties.VariableNames{index};
    elseif contains(original_table.Properties.VariableNames{index}, '2车经度')
        MC2_longitude_column_name = ...
            original_table.Properties.VariableNames{index};
    elseif contains(original_table.Properties.VariableNames{index}, '2车组合惯导经度')
        MC2_longitude_column_name = ...
            original_table.Properties.VariableNames{index};
    elseif contains(original_table.Properties.VariableNames{index}, '整车车速')
        tram_speed_column_name = ...
            original_table.Properties.VariableNames{index};
    end
end

% 按指定顺序重构动态传动比对应表
original_data = original_table(:, {MC1_occupied_status_column_name, ...
    MC2_occupied_status_column_name, MC1_heading_angle_column_name,...
    MC2_heading_angle_column_name, MC1_latitude_column_name,...
    MC2_latitude_column_name, MC1_longitude_column_name,...
    MC2_longitude_column_name, tram_speed_column_name});

%% 数据预处理
% 删除车速低于8km/h的数据
original_data(8 > original_data.(tram_speed_column_index), :) = [];

% 相对坐标原点经纬度初始化
grid_origin_latitude = original_data.(MC1_latitude_column_index)(1) * 1e-7;
grid_origin_longitude = original_data.(MC1_longitude_column_index)(1) * 1e-7;

% 两点重合间隔阈值，m
point_interval_threshold = 1e-3;

%% 以占有端信号为依据分别提取MC1端牵引时的数据和MC2端牵引时的数据
MC1_data = original_data(1 == original_data.(MC1_occupied_status_column_index), :);
MC2_data = original_data(1 == original_data.(MC2_occupied_status_column_index), :);

%% 将MC1端经纬度按指定原点转换为“局部切平面直角坐标系”（东北天ENU)
% 将经纬度乘以10^-7的系数换算成实际值
MC1_data.('Latitude') = MC1_data.(MC1_latitude_column_index) * 1e-7;
MC1_data.('Longitude') = MC1_data.(MC1_longitude_column_index) * 1e-7;

% 将组合惯导给出的位置信息转换成“局部切平面直角坐标系”（东北天ENU)
for index = 1 : height(MC1_data)
    [MC1_data.('ENU_x')(index), MC1_data.('ENU_y')(index), ~] = ...
        GNSS_pose2relative_ENU_m(grid_origin_latitude, grid_origin_longitude, ...
        0, MC1_data.('Latitude')(index), MC1_data.('Longitude')(index), 0);
end

% 根据组合惯导航向角换算东北天坐标系下横摆角，取模到首个角度值的-180~180度范围内，避免角度突变
temp_ENU_yaw_angle = 90 - MC1_data.(MC1_heading_angle_column_index);
MC1_data.('ENU_yaw_angle') = mod(temp_ENU_yaw_angle + 540 + ...
    temp_ENU_yaw_angle(1), 360) - 180 - temp_ENU_yaw_angle(1);

% 去除重复定位数据初始化
segment_length = zeros(height(MC1_data), 1);

% 计算相邻两点的距离
for index = 2 : height(MC1_data)
    segment_length(index) = norm([MC1_data.('ENU_x')(index) - ...
        MC1_data.('ENU_x')(index - 1), MC1_data.('ENU_y')(index) - ...
        MC1_data.('ENU_y')(index - 1)]);
end

% 通过两点距离小于阈值的条件剔除重复定位点，保留前一个定位点
temp_segment_length = [1; segment_length(2 : end)];
MC1_data(point_interval_threshold > temp_segment_length, :) = [];

%% 将MC2端经纬度按指定原点转换为"局部切平面直角坐标系”（东北天ENU)
% 将经纬度乘以10^-7的系数换算成实际值
MC2_data.('Latitude') = MC2_data.(MC2_latitude_column_index) * 1e-7;
MC2_data.('Longitude') = MC2_data.(MC2_longitude_column_index) * 1e-7;

% 将组合惯导给出的位置信息转换成“局部切平面直角坐标系”（东北天ENU)
for index = 1 : height(MC2_data)
    [MC2_data.('ENU_x')(index), MC2_data.('ENU_y')(index), ~] = ...
        GNSS_pose2relative_ENU_m(grid_origin_latitude, grid_origin_longitude, ...
        0, MC2_data.('Latitude')(index), MC2_data.('Longitude')(index), 0);
end

% 根据组合惯导航向角换算东北天坐标系下横摆角，取模到首个角度值的-180~180度范围内，避免角度突变
temp_ENU_yaw_angle = 90 - MC2_data.(MC2_heading_angle_column_index);
MC2_data.('ENU_yaw_angle') = mod(temp_ENU_yaw_angle + 540 + ...
    temp_ENU_yaw_angle(1), 360) - 180 - temp_ENU_yaw_angle(1);

% 去除重复定位数据初始化
segment_length = zeros(height(MC2_data), 1);

% 计算相邻两点的距离
for index = 2 : height(MC2_data)
    segment_length(index) = norm([MC2_data.('ENU_x')(index) - ...
        MC2_data.('ENU_x')(index - 1), MC2_data.('ENU_y')(index) - ...
        MC2_data.('ENU_y')(index - 1)]);
end

% 通过两点距离小于阈值的条件剔除重复定位点，保留前一个定位点
temp_segment_length = [1; segment_length(2 : end)];
MC2_data(point_interval_threshold > temp_segment_length, :) = [];

%% 根据MC1端路点连线计算车辆运动方向横摆角
% 首尾两点横摆角保持不变，其余路点使用其前、后两路点连线与x轴的夹角作为其横摆角
MC1_data.('calculated_yaw_angle') = zeros(height(MC1_data), 1);
for index = 2 : height(MC1_data) - 1
    delta_y = MC1_data.('ENU_y')(index + 1) - MC1_data.('ENU_y')(index - 1);
    delta_x = MC1_data.('ENU_x')(index + 1) - MC1_data.('ENU_x')(index - 1);
    MC1_data.('calculated_yaw_angle')(index) = atan2(delta_y, delta_x);
end
MC1_data.('calculated_yaw_angle')(1) = MC1_data.('calculated_yaw_angle')(2);
MC1_data.('calculated_yaw_angle')(end) = MC1_data.('calculated_yaw_angle')(end - 1);

% 将计算出的横摆角单位从弧度转化为角度
MC1_data.('calculated_yaw_angle') = rad2deg(MC1_data.('calculated_yaw_angle'));

% 将从路点计算得到的横摆角取模到首个角度值的-180~180度范围内，避免角度突变
MC1_data.('calculated_yaw_angle') = mod(MC1_data.('calculated_yaw_angle') + 540 + ...
    MC1_data.('calculated_yaw_angle')(1), 360) - 180 - ...
    MC1_data.('calculated_yaw_angle')(1);

% 删除因换端拉车造成的相邻点横摆角变化超过90度的记录
abandoned_index = false(height(MC1_data), 1);
temp_data = MC1_data.('calculated_yaw_angle')(1);
for index = 2 : height(MC1_data)
    if 90 < abs(MC1_data.('calculated_yaw_angle')(index) - temp_data)
        abandoned_index(index) = true;
    else
        temp_data = MC1_data.('calculated_yaw_angle')(index);
    end
end
MC1_data(abandoned_index, :) = [];

%% 根据MC2端路点连线计算车辆运动方向横摆角
% 首尾两点横摆角保持不变，其余路点使用其前、后两路点连线与x轴的夹角作为其横摆角
MC2_data.('calculated_yaw_angle') = zeros(height(MC2_data), 1);
for index = 2 : height(MC2_data) - 1
    delta_y = MC2_data.('ENU_y')(index + 1) - MC2_data.('ENU_y')(index - 1);
    delta_x = MC2_data.('ENU_x')(index + 1) - MC2_data.('ENU_x')(index - 1);
    MC2_data.('calculated_yaw_angle')(index) = atan2(delta_y, delta_x);
end
MC2_data.('calculated_yaw_angle')(1) = MC2_data.('calculated_yaw_angle')(2);
MC2_data.('calculated_yaw_angle')(end) = MC2_data.('calculated_yaw_angle')(end - 1);

% 将计算出的横摆角单位从弧度转化为角度
MC2_data.('calculated_yaw_angle') = rad2deg(MC2_data.('calculated_yaw_angle'));

% 将从路点计算得到的横摆角取模到首个角度值的-180~180度范围内，避免角度突变
MC2_data.('calculated_yaw_angle') = mod(MC2_data.('calculated_yaw_angle') + 540 + ...
    MC2_data.('calculated_yaw_angle')(1), 360) - 180 - ...
    MC2_data.('calculated_yaw_angle')(1);

% 删除因换端拉车造成的相邻点横摆角变化超过90度的记录
abandoned_index = false(height(MC2_data), 1);
temp_data = MC2_data.('calculated_yaw_angle')(1);
for index = 2 : height(MC2_data)
    if 90 < abs(MC2_data.('calculated_yaw_angle')(index) - temp_data)
        abandoned_index(index) = true;
    else
        temp_data = MC2_data.('calculated_yaw_angle')(index);
    end
end
MC2_data(abandoned_index, :) = [];

%% 计算组合惯导横摆角与路点计算得到的横摆角之间的固定偏差
% 计算角度之差，并取模到-180~180度范围内，计算角度之差的平均值，作为固定偏置
MC1_yaw_angle_offset = mean(mod(MC1_data.ENU_yaw_angle - ...
    MC1_data.calculated_yaw_angle + 540, 360) - 180);
MC2_yaw_angle_offset = mean(mod(MC2_data.ENU_yaw_angle - ...
    MC2_data.calculated_yaw_angle + 540, 360) - 180);

% 修改数值精度为小数点后2位
digit = 10^2;
MC1_yaw_angle_compensation = round(MC1_yaw_angle_offset * digit) / digit;
MC2_yaw_angle_compensation = round(MC2_yaw_angle_offset * digit) / digit;

end
