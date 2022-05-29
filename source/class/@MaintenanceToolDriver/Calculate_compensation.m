% 计算方向盘与转向轴软件零位补偿值
function [MC1_steering_wheel_angle_compensation, ...
    MC2_steering_wheel_angle_compensation, ...
    MC1_steering_axle_angle_compensation, ...
    MC2_steering_axle_angle_compensation] = Calculate_compensation(...
    obj, file_full_path)
%   1.输入参数：
%       (1)obj                                      MAINTENANCETOOLDRIVER类的一个实例
%       (2)file_full_path                           动态传动比文件的绝对路径，字符数组或字符串
%   2.输出参数：
%       (1)MC1_steering_wheel_angle_compensation    MC1端方向盘软件零位补偿值，整数，deg
%       (2)MC2_steering_wheel_angle_compensation    MC2端方向盘软件零位补偿值，整数，deg
%       (3)MC1_steering_axle_angle_compensation     MC1端转向轴软件零位补偿值，实数，deg
%       (4)MC2_steering_axle_angle_compensation     MC2端转向轴软件零位补偿值，实数，deg

% 尝试运行，如果失败则弹出提示框，便于在其他电脑上独立运行时排查问题
try
    [MC1_steering_wheel_angle_compensation, ...
        MC2_steering_wheel_angle_compensation, ...
        MC1_steering_axle_angle_compensation, ...
        MC2_steering_axle_angle_compensation] = ...
        Local_function_calculate_compensation(file_full_path);
catch
    uialert(obj.UI_figure, '计算方向盘软件零位补偿值时出现异常.', '错误提示');
end

end

% ----- Local function CALCULATE_COMPENSATION -----
function [MC1_steering_wheel_angle_compensation, ...
    MC2_steering_wheel_angle_compensation, ...
    MC1_steering_axle_angle_compensation, ...
    MC2_steering_axle_angle_compensation] = ...
    Local_function_calculate_compensation(file_full_path)
%   1.输入参数：
%       (1)file_full_path                           动态传动比文件的绝对路径，字符数组或字符串
%   2.输出参数：
%       (1)MC1_steering_wheel_angle_compensation    MC1端方向盘软件零位补偿值，整数，deg
%       (2)MC2_steering_wheel_angle_compensation    MC2端方向盘软件零位补偿值，整数，deg
%       (3)MC1_steering_axle_angle_compensation     MC1端转向轴软件零位补偿值，实数，deg
%       (4)MC2_steering_axle_angle_compensation     MC2端转向轴软件零位补偿值，实数，deg

%% 信号索引设置
MC1_steering_wheel_angle_column_index = 1; % MC1方向盘转角
MC2_steering_wheel_angle_column_index = 2; % MC2方向盘转角
MC1_steering_axle_angle_column_index  = 3; % MC1转向轴转角
MC2_steering_axle_angle_column_index  = 4; % MC2转向轴转角

%% 表格数据导入
% 导入表格
original_table = readtable(file_full_path, 'PreserveVariableNames', true);

% 搜索表格列标题,与指定信号匹配
for index = 1 : length(original_table.Properties.VariableNames)
    if contains(original_table.Properties.VariableNames{index}, '1方向盘')
        MC1_steering_wheel_angle_column_name = ...
            original_table.Properties.VariableNames{index};
    elseif contains(original_table.Properties.VariableNames{index}, '1车方向盘')
        MC1_steering_wheel_angle_column_name = ...
            original_table.Properties.VariableNames{index};
    elseif contains(original_table.Properties.VariableNames{index}, '2方向盘')
        MC2_steering_wheel_angle_column_name = ...
            original_table.Properties.VariableNames{index};
    elseif contains(original_table.Properties.VariableNames{index}, '2车方向盘')
        MC2_steering_wheel_angle_column_name = ...
            original_table.Properties.VariableNames{index};
    elseif contains(original_table.Properties.VariableNames{index}, '轴1')
        MC1_steering_axle_angle_column_name = ...
            original_table.Properties.VariableNames{index};
    elseif contains(original_table.Properties.VariableNames{index}, '轴6')
        MC2_steering_axle_angle_column_name = ...
            original_table.Properties.VariableNames{index};
    end
end

% 按指定顺序重构动态传动比对应表
temp_table = original_table(:, {MC1_steering_wheel_angle_column_name, ...
    MC2_steering_wheel_angle_column_name, MC1_steering_axle_angle_column_name,...
    MC2_steering_axle_angle_column_name});

% 取出数据域
original_data = temp_table.Variables;

%% 数据预处理，去除奇异方向盘角度值
abandoned_index1 = abs(original_data(:, ...
    MC1_steering_wheel_angle_column_index)) > 300;  
original_data(abandoned_index1, :) = []; 
abandoned_index2 = abs(original_data(:, ...
    MC2_steering_wheel_angle_column_index)) > 300;  
original_data(abandoned_index2, :) = []; 

%% 去除MC1端方向盘角度值连续不变的记录
MC1_temp_data = original_data;
MC1_abandoned_index = false(length(MC1_temp_data), 1);
for index = 2:length(MC1_temp_data)
    if MC1_temp_data(index, MC1_steering_wheel_angle_column_index) == ...
       MC1_temp_data(index - 1, MC1_steering_wheel_angle_column_index)
        MC1_abandoned_index(index) = true;
    end
end
MC1_temp_data(MC1_abandoned_index, :) = [];

%% 去除MC2端方向盘角度值连续不变的记录
MC2_temp_data = original_data;
MC2_abandoned_index = false(length(MC2_temp_data), 1);
for index = 2:length(MC2_temp_data)
    if MC2_temp_data(index, MC2_steering_wheel_angle_column_index) == ...
       MC2_temp_data(index - 1, MC2_steering_wheel_angle_column_index)
        MC2_abandoned_index(index) = true;
    end
end
MC2_temp_data(MC2_abandoned_index, :) = [];

%% 统计MC1方向盘、转向轴软件零位补偿值
% 在转向轴角度-2~2之间均分成38个条状区，每条宽±0.2，
% 找到MC1的点最密集的一条，求出这一条对应的方向盘角度均值即方向盘零位补偿值
MC1_bar_point_number = zeros(37, 1);
for index1 = 1:37
    index2 = abs(MC1_temp_data(:, MC1_steering_axle_angle_column_index) - ...
        (19 - index1) * 0.1) < 0.2;
    temp_bar_data = MC1_temp_data(index2, :);
    MC1_bar_point_number(index1) = length(temp_bar_data);
end
[~, MC1_bar_location] = max(MC1_bar_point_number);
index3 = abs(MC1_temp_data(:, MC1_steering_axle_angle_column_index) - ...
    (19 - MC1_bar_location) * 0.1) > 0.2;
MC1_temp_data(index3, :) = []; 
MC1_central_steering_wheel_angle = MC1_temp_data(:, ...
    MC1_steering_wheel_angle_column_index);
MC1_central_steering_axle_angle = MC1_temp_data(:, ...
    MC1_steering_axle_angle_column_index);
MC1_steering_wheel_angle_compensation = round(mean(MC1_central_steering_wheel_angle));

% MC1的点最密集的一条对应的转向轴转向角度平均值即为转向轴零位补偿值
MC1_steering_axle_angle_compensation = mean(MC1_central_steering_axle_angle);

%% 统计MC2方向盘、转向轴软件零位补偿值
% 在转向轴角度-2~2之间均分成38个条状区，每条宽±0.2，
% 找到MC2的点最密集的一条，求出这一条对应的方向盘角度均值即方向盘零位补偿值
MC2_bar_point_number = zeros(37, 1);
for index1 = 1:37
    index2 = abs(MC2_temp_data(:, MC2_steering_axle_angle_column_index) - ...
        (19 - index1) * 0.1) < 0.2;
    temp_bar_data = MC2_temp_data(index2, :);
    MC2_bar_point_number(index1) = length(temp_bar_data);
end
[~, MC2_bar_location] = max(MC2_bar_point_number);
index3 = abs(MC2_temp_data(:, MC2_steering_axle_angle_column_index) - ...
    (19 - MC2_bar_location) * 0.1) > 0.2;
MC2_temp_data(index3, :) = []; 
MC2_central_steering_wheel_angle = MC2_temp_data(:, ...
    MC2_steering_wheel_angle_column_index);
MC2_central_steering_axle_angle = MC2_temp_data(:, ...
    MC2_steering_axle_angle_column_index);
MC2_steering_wheel_angle_compensation = round(mean(MC2_central_steering_wheel_angle));

% MC2的点最密集的一条对应的转向轴转向角度平均值即为转向轴零位补偿值
MC2_steering_axle_angle_compensation = mean(MC2_central_steering_axle_angle);

%% 修改数值精度为小数点后2位
digit = 10^1;
MC1_steering_axle_angle_compensation = round(MC1_steering_axle_angle_compensation * digit) / digit;
MC2_steering_axle_angle_compensation = round(MC2_steering_axle_angle_compensation * digit) / digit;

end
