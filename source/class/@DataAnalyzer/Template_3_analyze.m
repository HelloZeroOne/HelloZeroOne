% 动态回放车辆行驶数据
function [obj] = Template_3_analyze(obj)
%   1.输入参数：
%       (1)obj    DATAANALYZER类的一个实例
%   2.输出参数：
%       (1)obj    DATAANALYZER类的一个实例

%% 初始化
% 如果曲率超过正常范围，说明数据源是G300平台DR300记录文件，需要乘以10~-4的系数换算成实际值
if 1 < abs(max(obj.data_collection.('closest_point_curvature')))
    obj.data_collection.('closest_point_curvature') = ...
        obj.data_collection.('closest_point_curvature') * 1e-4;
end

% 如果滤波后的A2超过正常范围，说明数据源是G300平台DR300记录文件，需要乘以10~-5的系数换算成实际值
if 1 < abs(max(obj.data_collection.('filtered_A2')))
    obj.data_collection.('filtered_A2') = ...
        obj.data_collection.('filtered_A2') * 1e-5;
end

% 如果滤波后的A3超过正常范围，说明数据源是G300平台DR300记录文件，需要乘以10~-7的系数换算成实际值
if 1 < abs(max(obj.data_collection.('filtered_A3')))
    obj.data_collection.('filtered_A3') = ...
        obj.data_collection.('filtered_A3') * 1e-7;
end

%% 获取数据集关联的参考轨迹
obj = obj.Reference_trajectory_name_get;
obj = obj.Reference_trajectory_manager_initialize;
obj = obj.Reference_trajectory_get;
fprintf('$原始参考轨迹：%s\n', obj.reference_trajectory_name);

%% 播放器初始化
% 设置回放视频保存文件名称
replay_video_name = input(...
    '->请设置回放视频保存文件名称 (输入auto自动生成''时间戳_回放视频''格式) [回车默认auto]: ', 's');
if isempty(replay_video_name)
    % 解析当天日期
    date_string = regexp(string(datetime('today')), '-', 'split');
    
    % 解析当前时间
    current_time_string = regexp(datestr(now), '(-|\s|:)', 'split');
    
    % 拼接时间戳
    replay_video_name = append(date_string{1}, date_string{2}, date_string{3}, ...
        current_time_string{4}, current_time_string{5}, current_time_string{6}, ...
        '_回放视频');
end

% 设置视频播放倍速
replay_video_speed = input('->请设置视频播放倍速 [回车默认8]: ');
if isempty(replay_video_speed) || 1 > replay_video_speed
    replay_video_speed = 8;
end

% 回放视频采集器初始化
replay_video_writer_obj = VideoWriter(append(replay_video_name, '.m4v'), 'MPEG-4');
replay_video_writer_obj.FrameRate = 4;

% 开启回放视频采集器
open(replay_video_writer_obj);

% 绘图主界面
main_figure_handle = figure('Name', '动态回放车辆行驶数据', 'NumberTitle', 'off');

% 默认全屏
set(main_figure_handle, 'outerposition', get(0, 'screensize'));

%% 为调用既有观察信号计算函数，将车辆实际行驶轨迹作为原始轨迹构建表格
original_trajectory_table = table();
original_trajectory_table.('ENU_x') = obj.data_collection.('ENU_x');
original_trajectory_table.('ENU_y') = obj.data_collection.('ENU_y');
original_trajectory_table.('ENU_yaw_angle') = obj.data_collection.('ENU_yaw_angle');

% 计算原始轨迹相邻两点的间距
segment_length = zeros(height(obj.data_collection), 1);
segment_length(2 : end) = sqrt(diff(obj.data_collection.('ENU_x')).^2 + ...
    diff(obj.data_collection.('ENU_y')).^2);

% 原始轨迹路点到起点的累计距离
original_trajectory_table.('cumulative_length') = cumsum(segment_length);

%% 为调用既有观察信号计算函数，将原始参考轨迹作为处理后的轨迹构建矩阵
processed_path = [obj.reference_trajectory.way_point_properties.('ENU_x'), ...
    obj.reference_trajectory.way_point_properties.('ENU_y'), ...
    obj.reference_trajectory.way_point_properties.('ENU_yaw_angle')];

%% 计算观察信号
observed_signal_struct = Observed_signal_calculate(...
    original_trajectory_table, processed_path, 0);

% 获取数据集表头属性
signal_name_list = obj.data_collection.Properties.VariableNames;

% 为观察信号结构体补充其他相关信号子域
observed_signal_struct.('x') = original_trajectory_table.('ENU_x');
observed_signal_struct.('y') = original_trajectory_table.('ENU_y');
observed_signal_struct.('yaw_angle') = ...
    mod(original_trajectory_table.('ENU_yaw_angle') + 540, 360) - 180;
observed_signal_struct.('vehicle_running_segment_length') = segment_length;
observed_signal_struct.('vehicle_running_cumulative_length') = ...
    original_trajectory_table.('cumulative_length');
observed_signal_struct.('tram_speed') = obj.data_collection.('tram_speed');
observed_signal_struct.('interpolate_curvature') = ...
    obj.data_collection.('closest_point_curvature');
observed_signal_struct.('IDS_work_status') = obj.data_collection.('IDS_work_status');
observed_signal_struct.('GNSS_preview_angle_offset') = ...
    obj.data_collection.('preview_angle_offset');
observed_signal_struct.('GNSS_preview_lateral_offset') = ...
    obj.data_collection.('GNSS_preview_lateral_offset');
observed_signal_struct.('vision_preview_angle_offset') = ...
    obj.data_collection.('vision_preview_angle_offset');
observed_signal_struct.('vision_preview_lateral_offset') = ...
    obj.data_collection.('vision_preview_lateral_offset');
observed_signal_struct.('steering_axle_angle') = ...
    obj.data_collection.('steering_axle_angle');
observed_signal_struct.('set_steering_axle_angle') = ...
    obj.data_collection.('set_steering_axle_angle');
observed_signal_struct.('steering_wheel_angle') = ...
    obj.data_collection.('steering_wheel_angle');
observed_signal_struct.('set_steering_wheel_angle') = ...
    obj.data_collection.('set_steering_wheel_angle') - ...
    obj.data_collection.('steering_wheel_angle_offset');
observed_signal_struct.('lateral_control_method') = ...
    obj.data_collection.('lateral_control_method');
observed_signal_struct.('IEHS_work_status') = ...
    obj.data_collection.('IEHS_work_status');
observed_signal_struct.('filtered_A0') = obj.data_collection.('filtered_A0');
observed_signal_struct.('filtered_A1') = obj.data_collection.('filtered_A1');
observed_signal_struct.('filtered_A2') = obj.data_collection.('filtered_A2');
if ismember('filtered_A3', signal_name_list)
    observed_signal_struct.('filtered_A3') = obj.data_collection.('filtered_A3');
else
    observed_signal_struct.('filtered_A3') = zeros(height(obj.data_collection), 1);
end
observed_signal_struct.('closest_point_x') = ...
    obj.data_collection.('closest_point_x');
observed_signal_struct.('closest_point_y') = ...
    obj.data_collection.('closest_point_y');
observed_signal_struct.('preview_point_x') = ...
    obj.data_collection.('preview_point_x');
observed_signal_struct.('preview_point_y') = ...
    obj.data_collection.('preview_point_y');
observed_signal_struct.('closest_point_segment_ID') = ...
    obj.data_collection.('closest_point_segment_ID');
observed_signal_struct.('lane_recognition_status') = ...
    obj.data_collection.('lane_recognition_status');
observed_signal_struct.('location_validation') = ...
    obj.data_collection.('location_validation');
observed_signal_struct.('time_axis') = obj.data_collection.('time_axis');

%% 坐标系位置、尺寸初始化
% 全局参考路径坐标系
global_path_axes_handle = axes('Parent', main_figure_handle, ...
    'Position', [0.618, 0.05, 0.392, 0.392]);
xlabel(global_path_axes_handle, ...
    '\fontname{宋体}东西方向相对局部原点距离\fontname{Times New Roman}[m]');
ylabel(global_path_axes_handle, ...
    '\fontname{宋体}南北方向相对局部原点距离\fontname{Times New Roman}[m]');
box(global_path_axes_handle, 'on');
grid(global_path_axes_handle, 'on');
hold(global_path_axes_handle, 'on');
legend(global_path_axes_handle, 'show');
title(global_path_axes_handle, '\fontname{宋体}全局路径');
axis(global_path_axes_handle, 'equal');
Axes_properties_set(global_path_axes_handle, 8);

% 车辆位置局部放大坐标系
vehicle_position_zoom_in_axes_handle = axes('Parent', main_figure_handle, ...
    'Position', [0.06, 0.05, 0.68, 0.68]);
vehicle_position_zoom_in_axes_handle.DataAspectRatioMode = 'manual';
xlabel(vehicle_position_zoom_in_axes_handle, ...
    '\fontname{宋体}东西方向相对局部原点距离\fontname{Times New Roman}[m]');
ylabel(vehicle_position_zoom_in_axes_handle, ...
    '\fontname{宋体}南北方向相对局部原点距离\fontname{Times New Roman}[m]');
box(vehicle_position_zoom_in_axes_handle, 'on');
hold(vehicle_position_zoom_in_axes_handle, 'on');
legend(vehicle_position_zoom_in_axes_handle, 'show');
title(vehicle_position_zoom_in_axes_handle, '\fontname{宋体}以车辆实际位置为中心局部放大');
Axes_properties_set(vehicle_position_zoom_in_axes_handle, 8);

% 横向偏差坐标系
lateral_offset_axes_handle = axes('Parent', main_figure_handle, ...
    'Position', [0.6321, 0.519, 0.165, 0.215]);
xlabel(lateral_offset_axes_handle, ...
    '\fontname{宋体}车辆累计行驶距离\fontname{Times New Roman}[m]');
ylabel(lateral_offset_axes_handle, ...
    '\fontname{宋体}距离\fontname{Times New Roman}[m]');
box(lateral_offset_axes_handle, 'on');
grid(lateral_offset_axes_handle, 'on');
hold(lateral_offset_axes_handle, 'on');
legend(lateral_offset_axes_handle, 'show');
title(lateral_offset_axes_handle, '\fontname{宋体}横向偏差');
Axes_properties_set(lateral_offset_axes_handle, 8);

% 整车速度坐标系
tram_speed_axes_handle = axes('Parent', main_figure_handle, ...
    'Position', [0.8362, 0.519, 0.16, 0.215]);
xlabel(tram_speed_axes_handle, ...
    '\fontname{宋体}车辆累计行驶距离\fontname{Times New Roman}[m]');
ylabel(tram_speed_axes_handle, ...
    '\fontname{宋体}速度\fontname{Times New Roman}[km/h]');
box(tram_speed_axes_handle, 'on');
grid(tram_speed_axes_handle, 'on');
hold(tram_speed_axes_handle, 'on');
legend(tram_speed_axes_handle, 'off');
title(tram_speed_axes_handle, '\fontname{宋体}整车速度');
Axes_properties_set(tram_speed_axes_handle, 8);

% 预瞄角度偏差坐标系
preview_angle_offset_axes_handle = axes('Parent', main_figure_handle, ...
    'Position', [0.6321, 0.81, 0.165, 0.165]);
xlabel(preview_angle_offset_axes_handle, ...
    '\fontname{宋体}车辆累计行驶距离\fontname{Times New Roman}[m]');
ylabel(preview_angle_offset_axes_handle, ...
    '\fontname{宋体}角度\fontname{Times New Roman}[deg]');
box(preview_angle_offset_axes_handle, 'on');
grid(preview_angle_offset_axes_handle, 'on');
hold(preview_angle_offset_axes_handle, 'on');
legend(preview_angle_offset_axes_handle, 'show');
title(preview_angle_offset_axes_handle, '\fontname{宋体}预瞄角度偏差');
Axes_properties_set(preview_angle_offset_axes_handle, 8);

% 预瞄横向偏差坐标系
preview_lateral_offset_axes_handle = axes('Parent', main_figure_handle, ...
    'Position', [0.8362, 0.81, 0.16, 0.165]);
xlabel(preview_lateral_offset_axes_handle, ...
    '\fontname{宋体}车辆累计行驶距离\fontname{Times New Roman}[m]');
ylabel(preview_lateral_offset_axes_handle, ...
    '\fontname{宋体}距离\fontname{Times New Roman}[m]');
box(preview_lateral_offset_axes_handle, 'on');
grid(preview_lateral_offset_axes_handle, 'on');
hold(preview_lateral_offset_axes_handle, 'on');
legend(preview_lateral_offset_axes_handle, 'show');
title(preview_lateral_offset_axes_handle, '\fontname{宋体}预瞄横向偏差');
Axes_properties_set(preview_lateral_offset_axes_handle, 8);

% 转向轴转角坐标系
steering_axle_angle_axes_handle = axes('Parent', main_figure_handle, ...
    'Position', [0.4148, 0.81, 0.175, 0.165]);
xlabel(steering_axle_angle_axes_handle, ...
    '\fontname{宋体}车辆累计行驶距离\fontname{Times New Roman}[m]');
ylabel(steering_axle_angle_axes_handle, ...
    '\fontname{宋体}角度\fontname{Times New Roman}[deg]');
box(steering_axle_angle_axes_handle, 'on');
grid(steering_axle_angle_axes_handle, 'on');
hold(steering_axle_angle_axes_handle, 'on');
legend(steering_axle_angle_axes_handle, 'show');
title(steering_axle_angle_axes_handle, '\fontname{宋体}转向轴转角');
Axes_properties_set(steering_axle_angle_axes_handle, 8);

% 方向盘转角坐标系
steering_wheel_angle_axes_handle = axes('Parent', main_figure_handle, ...
    'Position', [0.211, 0.81, 0.175, 0.165]);
xlabel(steering_wheel_angle_axes_handle, ...
    '\fontname{宋体}车辆累计行驶距离\fontname{Times New Roman}[m]');
ylabel(steering_wheel_angle_axes_handle, ...
    '\fontname{宋体}角度\fontname{Times New Roman}[deg]');
box(steering_wheel_angle_axes_handle, 'on');
grid(steering_wheel_angle_axes_handle, 'on');
hold(steering_wheel_angle_axes_handle, 'on');
legend(steering_wheel_angle_axes_handle, 'show');
title(steering_wheel_angle_axes_handle, '\fontname{宋体}方向盘转角');
Axes_properties_set(steering_wheel_angle_axes_handle, 8);

% 方向盘图片示意图坐标系
steering_wheel_image_axes_handle = axes('Parent', main_figure_handle, ...
    'Position', [0.001, 0.778, 0.16, 0.22]);
legend(steering_wheel_image_axes_handle, 'off');
steering_wheel_image_axes_handle.DataAspectRatioMode = 'manual';
steering_wheel_image_axes_handle.YAxis.Visible = 'off';
steering_wheel_image_axes_handle.XAxis.Visible = 'off';

% 车辆坐标系
vehicle_axes_handle = axes('Parent', main_figure_handle, ...
    'Position', [0.03, 0.05, 0.136, 0.45]);
xlabel(vehicle_axes_handle, ...
    '\fontname{宋体}车辆前后距离\fontname{Times New Roman}[m]');
ylabel(vehicle_axes_handle, ...
    '\fontname{宋体}车辆左右距离\fontname{Times New Roman}[m]');
box(vehicle_axes_handle, 'on');
grid(vehicle_axes_handle, 'on');
hold(vehicle_axes_handle, 'on');
legend(vehicle_axes_handle, 'show');
title(vehicle_axes_handle, '\fontname{宋体}车辆坐标系');
Axes_properties_set(vehicle_axes_handle, 8);
vehicle_axes_handle.View = [-90, 90];

%% 提示文字初始化
annotation('textbox', [0.001, 0.69, 0.2, 0.08], 'String', '计时：', ...
    'FitBoxToText', 'on', 'LineStyle', 'none');
clock_timer_text_handle = annotation('textbox', [0.041, 0.69, 0.2, 0.08], ...
    'String', '00:00:00', 'FitBoxToText', 'on', 'LineStyle', 'none');
annotation('textbox', [0.001, 0.65, 0.2, 0.08], 'String', '区间代号：', ...
    'FitBoxToText', 'on', 'LineStyle', 'none');
segment_ID_text_handle = annotation('textbox', [0.059, 0.65, 0.2, 0.08], ...
    'String', '1', 'FitBoxToText', 'on', 'LineStyle', 'none');
annotation('textbox', [0.081, 0.65, 0.2, 0.08], 'String', '车速：', ...
    'FitBoxToText', 'on', 'LineStyle', 'none');
tram_speed_text_handle = annotation('textbox', [0.114, 0.65, 0.2, 0.08], ...
    'String', '0.0', 'FitBoxToText', 'on', 'LineStyle', 'none');
annotation('textbox', [0.141, 0.65, 0.2, 0.08], 'String', '[km/h]', ...
    'FitBoxToText', 'on', 'LineStyle', 'none');
annotation('textbox', [0.001, 0.61, 0.2, 0.08], 'String', '驾驶状态：', ...
    'FitBoxToText', 'on', 'LineStyle', 'none');
driving_status_text_handle = annotation('textbox', [0.062, 0.61, 0.2, 0.08], ...
    'String', '手动驾驶', 'FitBoxToText', 'on', 'LineStyle', 'none', ...
    'BackgroundColor', [0.5, 0.5, 0.5]);
annotation('textbox', [0.001, 0.57, 0.2, 0.08], 'String', '方向盘状态：', ...
    'FitBoxToText', 'on', 'LineStyle', 'none');
IEHS_work_status_text_handle = annotation('textbox', [0.071, 0.57, 0.2, 0.08], ...
    'String', '助力', 'FitBoxToText', 'on', 'LineStyle', 'none');
annotation('textbox', [0.001, 0.53, 0.2, 0.08], 'String', '视觉摄像头状态：', ...
    'FitBoxToText', 'on', 'LineStyle', 'none');
vision_work_status_text_handle = annotation('textbox', [0.093, 0.53, 0.2, 0.08], ...
    'String', '正常', 'FitBoxToText', 'on', 'LineStyle', 'none');
annotation('textbox', [0.001, 0.49, 0.2, 0.08], 'String', '组合惯导状态：', ...
    'FitBoxToText', 'on', 'LineStyle', 'none');
GNSS_work_status_text_handle = annotation('textbox', [0.081, 0.49, 0.2, 0.08], ...
    'String', '正常', 'FitBoxToText', 'on', 'LineStyle', 'none');

%% 全局参考路径相关曲线绘制
% 绘制全局参考路径
plot(global_path_axes_handle, observed_signal_struct.('processed_x'), ...
    observed_signal_struct.('processed_y'), 'LineWidth', 6, 'DisplayName', ...
    '\fontname{宋体}全局参考路径');

% 车辆行驶路径初始化
vehicle_trajectory_x = obj.data_collection.('ENU_x')(1);
vehicle_trajectory_y = obj.data_collection.('ENU_y')(1);

% 绘制车辆行驶路径并关联数据源
vehicle_path_plot_handle = plot(global_path_axes_handle, ...
    vehicle_trajectory_x, vehicle_trajectory_y, 'DisplayName', ...
    '\fontname{宋体}车辆实际行驶路径', 'LineWidth', 3);
vehicle_path_plot_handle.XDataSource = 'vehicle_trajectory_x';
vehicle_path_plot_handle.YDataSource = 'vehicle_trajectory_y';

% 车辆位置初始化
vehicle_point_x = obj.data_collection.('ENU_x')(1);
vehicle_point_y = obj.data_collection.('ENU_y')(1);

% 绘制车辆位置并关联数据源
vehicle_point_plot_handle = plot(global_path_axes_handle, ...
    vehicle_point_x, vehicle_point_y, 'h', 'MarkerSize', 8, 'DisplayName', ...
    '\fontname{宋体}车辆实际位置', 'LineWidth', 3);
vehicle_point_plot_handle.XDataSource = 'vehicle_point_x';
vehicle_point_plot_handle.YDataSource = 'vehicle_point_y';

%% 车辆位置局部放大坐标系相关曲线绘制
% 根据车辆位置设定坐标系局部放大显示范围为周围30m
vehicle_position_display_range = [observed_signal_struct.('x')(1) - 30, ...
    observed_signal_struct.('x')(1) + 30, observed_signal_struct.('y')(1) - 30, ...
    observed_signal_struct.('y')(1) + 30];
axis(vehicle_position_zoom_in_axes_handle, vehicle_position_display_range);

% 绘制放大后的全局参考路径曲线
plot(vehicle_position_zoom_in_axes_handle, observed_signal_struct.('processed_x'), ...
    observed_signal_struct.('processed_y'), 'LineWidth', 6, 'DisplayName', ...
    '\fontname{宋体}全局参考路径');

% 预瞄点初始化
preview_point_x = observed_signal_struct.('preview_point_x')(1);
preview_point_y = observed_signal_struct.('preview_point_y')(1);

% 视觉循迹线初始化
vision_lane_x = transpose(0 : 60);
vision_lane_y = observed_signal_struct.('filtered_A0')(1) + ...
    observed_signal_struct.('filtered_A1')(1) * (vision_lane_x - 1.75) + ...
    observed_signal_struct.('filtered_A2')(1) * (vision_lane_x - 1.75).^2 / 2 + ...
    observed_signal_struct.('filtered_A3')(1) * (vision_lane_x - 1.75).^3 / 6;

% 放大后的大地坐标系下视觉循迹线初始化
[zoom_in_vision_lane_x, zoom_in_vision_lane_y] = Vehicle_coordinate_revert(...
    observed_signal_struct.('x')(1), observed_signal_struct.('y')(1), ...
    vision_lane_x, vision_lane_y, deg2rad(observed_signal_struct.('yaw_angle')(1)));

% 绘制放大后的大地坐标系下视觉循迹线并关联数据源
zoom_in_vision_lane_plot_handle = plot(vehicle_position_zoom_in_axes_handle, ...
    zoom_in_vision_lane_x, zoom_in_vision_lane_y, ...
    'LineWidth', 2, 'DisplayName', '\fontname{宋体}视觉循迹线');
zoom_in_vision_lane_plot_handle.XDataSource = 'zoom_in_vision_lane_x';
zoom_in_vision_lane_plot_handle.YDataSource = 'zoom_in_vision_lane_y';

% 放大后的局部参考路径初始化
zoom_in_local_path_x = observed_signal_struct.('closest_point_x')(1);
zoom_in_local_path_y = observed_signal_struct.('closest_point_y')(1);

% 绘制放大后的局部参考路径并关联数据源
zoom_in_local_path_plot_handle = plot(vehicle_position_zoom_in_axes_handle, ...
    zoom_in_local_path_x, zoom_in_local_path_y, ...
    'LineWidth', 2, 'DisplayName', '\fontname{宋体}局部参考路径');
zoom_in_local_path_plot_handle.XDataSource = 'zoom_in_local_path_x';
zoom_in_local_path_plot_handle.YDataSource = 'zoom_in_local_path_y';

% 绘制GPS预瞄点并关联数据源
preview_point_plot_handle = plot(vehicle_position_zoom_in_axes_handle, ...
    preview_point_x, preview_point_y, 'p', 'MarkerSize', 4, ...
    'LineWidth', 3, 'DisplayName', '\fontname{宋体}GPS预瞄点');
preview_point_plot_handle.XDataSource = 'preview_point_x';
preview_point_plot_handle.YDataSource = 'preview_point_y';

% 整车速度初始化
tram_speed = observed_signal_struct.('tram_speed')(1);

% 视觉预瞄距离初始化
vision_preview_distance = tram_speed * 1 / 3.6 - 1.75;
vision_preview_distance(1 > vision_preview_distance) = 1;

% 视觉预瞄点初始化
vision_preview_point_x = vision_preview_distance;
vision_preview_point_y = observed_signal_struct.('filtered_A0')(1) + ...
    observed_signal_struct.('filtered_A1')(1) * vision_preview_point_x + ...
    observed_signal_struct.('filtered_A2')(1) * vision_preview_point_x.^2 / 2 + ...
    observed_signal_struct.('filtered_A3')(1) * vision_preview_point_x.^3 / 6;
[zoom_in_vision_preview_point_x, zoom_in_vision_preview_point_y] = Vehicle_coordinate_revert(...
    observed_signal_struct.('x')(1), observed_signal_struct.('y')(1), ...
    vision_preview_point_x, vision_preview_point_y, deg2rad(observed_signal_struct.('yaw_angle')(1)));

% 绘制视觉预瞄点并关联数据源
vision_preview_point_plot_handle = plot(vehicle_position_zoom_in_axes_handle, ...
    zoom_in_vision_preview_point_x, zoom_in_vision_preview_point_y, 'h', 'MarkerSize', 4, ...
    'LineWidth', 3, 'DisplayName', '\fontname{宋体}视觉预瞄点');
vision_preview_point_plot_handle.XDataSource = 'zoom_in_vision_preview_point_x';
vision_preview_point_plot_handle.YDataSource = 'zoom_in_vision_preview_point_y';

%% 车辆位置横向偏差相关曲线绘制
% 根据车辆位置对应的累计行驶距离设定坐标系局部放大显示范围为前10m、后30m，-0.6~0.6m
lateral_offset_display_range = [observed_signal_struct.(...
    'vehicle_running_cumulative_length')(1) - 30, observed_signal_struct.(...
    'vehicle_running_cumulative_length')(1) + 10, -0.6, 0.6];
axis(lateral_offset_axes_handle, lateral_offset_display_range);

% 车辆累计行驶距离、横向偏差初始化
vehicle_running_cumulative_length_current = observed_signal_struct.(...
    'vehicle_running_cumulative_length')(1);
GNSS_lateral_offset = observed_signal_struct.('near_lateral_offset')(1);
vision_lateral_offset = obj.data_collection.('filtered_A0')(1);

% 绘制GNSS横向偏差曲线并关联数据源
GNSS_lateral_offset_plot_handle = plot(lateral_offset_axes_handle, ...
    vehicle_running_cumulative_length_current, GNSS_lateral_offset, ...
    'LineWidth', 2, 'DisplayName', '\fontname{宋体}惯导');
GNSS_lateral_offset_plot_handle.XDataSource = 'vehicle_running_cumulative_length_current';
GNSS_lateral_offset_plot_handle.YDataSource = 'GNSS_lateral_offset';

% 绘制视觉横向偏差曲线并关联数据源
vision_lateral_offset_plot_handle = plot(lateral_offset_axes_handle, ...
    vehicle_running_cumulative_length_current, vision_lateral_offset, ...
    'LineWidth', 2, 'DisplayName', '\fontname{宋体}视觉');
vision_lateral_offset_plot_handle.XDataSource = 'vehicle_running_cumulative_length_current';
vision_lateral_offset_plot_handle.YDataSource = 'vision_lateral_offset';

%% 整车速度相关曲线绘制
% 根据车辆位置对应的累计行驶距离设定坐标系局部放大显示范围为前10m、后30m,0~70km/h
tram_speed_display_range = [observed_signal_struct.(...
    'vehicle_running_cumulative_length')(1) - 30, observed_signal_struct.(...
    'vehicle_running_cumulative_length')(1) + 10, 0, 70];
axis(tram_speed_axes_handle, tram_speed_display_range);

% 绘制整车速度曲线并关联数据源
tram_speed_plot_handle = plot(tram_speed_axes_handle, ...
    vehicle_running_cumulative_length_current, tram_speed, ...
    'LineWidth', 2, 'DisplayName', '\fontname{宋体}整车速度');
tram_speed_plot_handle.XDataSource = 'vehicle_running_cumulative_length_current';
tram_speed_plot_handle.YDataSource = 'tram_speed';

%% 预瞄角度偏差相关曲线绘制
% 根据车辆位置对应的累计行驶距离设定坐标系局部放大显示范围为前10m、后30m，-4~4deg
preview_angle_offset_display_range = [observed_signal_struct.(...
    'vehicle_running_cumulative_length')(1) - 30, observed_signal_struct.(...
    'vehicle_running_cumulative_length')(1) + 10, -4, 4];
axis(preview_angle_offset_axes_handle, preview_angle_offset_display_range);

% 预瞄角度偏差初始化
GNSS_preview_angle_offset = observed_signal_struct.('GNSS_preview_angle_offset')(1);
vision_preview_angle_offset = obj.data_collection.('vision_preview_angle_offset')(1);

% 绘制GNSS预瞄角度偏差曲线并关联数据源
GNSS_preview_angle_offset_plot_handle = plot(preview_angle_offset_axes_handle, ...
    vehicle_running_cumulative_length_current, GNSS_preview_angle_offset, ...
    'LineWidth', 2, 'DisplayName', '\fontname{宋体}惯导');
GNSS_preview_angle_offset_plot_handle.XDataSource = 'vehicle_running_cumulative_length_current';
GNSS_preview_angle_offset_plot_handle.YDataSource = 'GNSS_preview_angle_offset';

% 绘制视觉预瞄角度偏差曲线并关联数据源
vision_preview_angle_offset_plot_handle = plot(preview_angle_offset_axes_handle, ...
    vehicle_running_cumulative_length_current, vision_preview_angle_offset, ...
    'LineWidth', 2, 'DisplayName', '\fontname{宋体}视觉');
vision_preview_angle_offset_plot_handle.XDataSource = 'vehicle_running_cumulative_length_current';
vision_preview_angle_offset_plot_handle.YDataSource = 'vision_preview_angle_offset';

%% 预瞄横向偏差相关曲线绘制
% 根据车辆位置对应的累计行驶距离设定坐标系局部放大显示范围为前10m、后30m,-0.6~0.6m
preview_lateral_offset_display_range = [observed_signal_struct.(...
    'vehicle_running_cumulative_length')(1) - 30, observed_signal_struct.(...
    'vehicle_running_cumulative_length')(1) + 10, -0.6, 0.6];
axis(preview_lateral_offset_axes_handle, preview_lateral_offset_display_range);

% 预瞄横向偏差初始化
vision_preview_lateral_offset = observed_signal_struct.('vision_preview_lateral_offset')(1);
GNSS_preview_lateral_offset = observed_signal_struct.('GNSS_preview_lateral_offset')(1);

% 绘制GNSS预瞄横向偏差曲线并关联数据源
GNSS_preview_lateral_offset_plot_handle = plot(preview_lateral_offset_axes_handle, ...
    vehicle_running_cumulative_length_current, GNSS_preview_lateral_offset, ...
    'LineWidth', 2, 'DisplayName', '\fontname{宋体}惯导');
GNSS_preview_lateral_offset_plot_handle.XDataSource = 'vehicle_running_cumulative_length_current';
GNSS_preview_lateral_offset_plot_handle.YDataSource = 'GNSS_preview_lateral_offset';

% 绘制视觉预瞄横向偏差曲线并关联数据源
vision_preview_lateral_offset_plot_handle = plot(preview_lateral_offset_axes_handle, ...
    vehicle_running_cumulative_length_current, vision_preview_lateral_offset, ...
    'LineWidth', 2, 'DisplayName', '\fontname{宋体}视觉');
vision_preview_lateral_offset_plot_handle.XDataSource = 'vehicle_running_cumulative_length_current';
vision_preview_lateral_offset_plot_handle.YDataSource = 'vision_preview_lateral_offset';

%% 转向轴转角相关曲线绘制
% 根据车辆位置对应的累计行驶距离设定坐标系局部放大显示范围为前10m、后30m，-4~4deg
steering_axle_angle_display_range = [observed_signal_struct.(...
    'vehicle_running_cumulative_length')(1) - 30, observed_signal_struct.(...
    'vehicle_running_cumulative_length')(1) + 10, -4, 4];
axis(steering_axle_angle_axes_handle, steering_axle_angle_display_range);

% 转向轴转角初始化
steering_axle_angle = observed_signal_struct.('steering_axle_angle')(1);
set_steering_axle_angle = observed_signal_struct.('set_steering_axle_angle')(1);

% 绘制实际转向轴转角曲线并关联数据源
steering_axle_angle_plot_handle = plot(steering_axle_angle_axes_handle, ...
    vehicle_running_cumulative_length_current, steering_axle_angle, ...
    'LineWidth', 2, 'DisplayName', '\fontname{宋体}实际');
steering_axle_angle_plot_handle.XDataSource = 'vehicle_running_cumulative_length_current';
steering_axle_angle_plot_handle.YDataSource = 'steering_axle_angle';

% 绘制期望转向轴转角曲线并关联数据源
set_steering_axle_angle_plot_handle = plot(steering_axle_angle_axes_handle, ...
    vehicle_running_cumulative_length_current, set_steering_axle_angle, ...
    'LineWidth', 2, 'DisplayName', '\fontname{宋体}期望');
set_steering_axle_angle_plot_handle.XDataSource = 'vehicle_running_cumulative_length_current';
set_steering_axle_angle_plot_handle.YDataSource = 'set_steering_axle_angle';

%% 方向盘转角相关曲线绘制
% 根据车辆位置对应的累计行驶距离设定坐标系局部放大显示范围为前10m、后30m，-110~110deg
steering_wheel_angle_display_range = [observed_signal_struct.(...
    'vehicle_running_cumulative_length')(1) - 30, observed_signal_struct.(...
    'vehicle_running_cumulative_length')(1) + 10, -110, 110];
axis(steering_wheel_angle_axes_handle, steering_wheel_angle_display_range);

% 方向盘转角初始化
steering_wheel_angle = observed_signal_struct.('steering_wheel_angle')(1);
set_steering_wheel_angle = observed_signal_struct.('set_steering_wheel_angle')(1);

% 绘制实际方向盘转角曲线并关联数据源
steering_wheel_angle_plot_handle = plot(steering_wheel_angle_axes_handle, ...
    vehicle_running_cumulative_length_current, steering_wheel_angle, ...
    'LineWidth', 2, 'DisplayName', '\fontname{宋体}实际');
steering_wheel_angle_plot_handle.XDataSource = 'vehicle_running_cumulative_length_current';
steering_wheel_angle_plot_handle.YDataSource = 'steering_wheel_angle';

% 绘制期望方向盘转角曲线并关联数据源
set_steering_wheel_angle_plot_handle = plot(steering_wheel_angle_axes_handle, ...
    vehicle_running_cumulative_length_current, set_steering_wheel_angle, ...
    'LineWidth', 2, 'DisplayName', '\fontname{宋体}期望');
set_steering_wheel_angle_plot_handle.XDataSource = 'vehicle_running_cumulative_length_current';
set_steering_wheel_angle_plot_handle.YDataSource = 'set_steering_wheel_angle';

%% 方向盘示意图绘制
% 导入方向盘示意图，由于过程中的坐标变换，需要向右转90度才能回正
[steering_wheel_image_points_original, center_point] = Steering_wheel_image_import(...
    '方向盘图片素材.jpg', deg2rad(-90));

% 设定坐标轴显示范围为原始图片尺寸
axis(steering_wheel_image_axes_handle, [0, 2 * center_point(1), 0, 2 * center_point(2)]);

% 方向盘示意图点坐标集初始化
steering_wheel_image_points_x = steering_wheel_image_points_original(:, 1);
steering_wheel_image_points_y = steering_wheel_image_points_original(:, 2);

% 绘制方向盘示意图并关联数据源
steering_wheel_image_plot_handle = plot(steering_wheel_image_axes_handle, ...
    steering_wheel_image_points_x, steering_wheel_image_points_y, '.black');
steering_wheel_image_plot_handle.XDataSource = 'steering_wheel_image_points_x';
steering_wheel_image_plot_handle.YDataSource = 'steering_wheel_image_points_y';

%% 车辆坐标系相关曲线绘制
% 固定显示范围为前后0~30m，左右-0.1~0.1m
vehicle_display_range = [0, 30, -0.1, 0.1];
axis(vehicle_axes_handle, vehicle_display_range);

% 全局参考路径初始化
[global_path_x, global_path_y] = Vehicle_coordinate_transfer_m(observed_signal_struct.('x')(1), ...
    observed_signal_struct.('y')(1), observed_signal_struct.('processed_x'), ...
    observed_signal_struct.('processed_y'), deg2rad(observed_signal_struct.('yaw_angle')(1)));

% 绘制全局参考路径并关联数据源
global_path_plot_handle = plot(vehicle_axes_handle, global_path_x, global_path_y, ...
    'LineWidth', 6, 'DisplayName', '\fontname{宋体}全局参考路径');
global_path_plot_handle.XDataSource = 'global_path_x';
global_path_plot_handle.YDataSource = 'global_path_y';

% 绘制视觉循迹线并关联数据源
vision_line_plot_handle = plot(vehicle_axes_handle, vision_lane_x, vision_lane_y, ...
    'LineWidth', 2, 'DisplayName', '\fontname{宋体}视觉循迹线');
vision_line_plot_handle.XDataSource = 'vision_lane_x';
vision_line_plot_handle.YDataSource = 'vision_lane_y';

% 局部参考路径初始化
[local_path_x, local_path_y] = Vehicle_coordinate_transfer_m(observed_signal_struct.('x')(1), ...
    observed_signal_struct.('y')(1), observed_signal_struct.('closest_point_x'), ...
    observed_signal_struct.('closest_point_y'), deg2rad(observed_signal_struct.('yaw_angle')(1)));

% 绘制局部参考路径并关联数据源
local_path_plot_handle = plot(vehicle_axes_handle, local_path_x, local_path_y, ...
    'LineWidth', 2, 'DisplayName', '\fontname{宋体}局部参考路径');
local_path_plot_handle.XDataSource = 'local_path_x';
local_path_plot_handle.YDataSource = 'local_path_y';

%% 动态刷新面板
% 标注车辆矩形位姿
[vehicle_rectangle_points_x, vehicle_rectangle_points_y] = Vehicle_rectangle_generate(...
    obj.data_collection.('ENU_x')(1), obj.data_collection.('ENU_y')(1), ...
    deg2rad(obj.data_collection.('ENU_yaw_angle')(1)));

% 根据循迹方法、IEHS工作状态确定车辆矩形填充颜色
switch(observed_signal_struct.('lateral_control_method')(1))
    case 0
        vehicle_rectangle_color = 'r';
        vehicle_driving_status = '循迹待接管';
    case 1
        vehicle_rectangle_color = 'g';
        vehicle_driving_status = '视觉循迹';
    case 2
        vehicle_rectangle_color = 'y';
        vehicle_driving_status = 'GPS循迹';
    otherwise
        vehicle_rectangle_color = 'r';
        vehicle_driving_status = '循迹待接管';
end
if isequal(4, observed_signal_struct.('IEHS_work_status')(1))
    vehicle_rectangle_color = [0.5, 0.5, 0.5]; % 灰色
    vehicle_driving_status = '手动驾驶';
end

% 在坐标轴上填充形状
vehicle_rectangle_fill_handle = fill(vehicle_position_zoom_in_axes_handle, ...
    vehicle_rectangle_points_x, vehicle_rectangle_points_y, ...
    vehicle_rectangle_color, 'DisplayName', ['\fontname{宋体}', ...
    vehicle_driving_status, '车辆位置']);

% 标注车辆行驶方向箭头参数
[root_point_x, root_point_y, direction_x, direction_y] = Direction_arrow_generate(...
    obj.data_collection.('ENU_x')(1), obj.data_collection.('ENU_y')(1), ...
    deg2rad(obj.data_collection.('ENU_yaw_angle')(1)));

% 在坐标轴上绘制箭头
vehicle_arrow_quiver_handle = quiver(vehicle_position_zoom_in_axes_handle, ...
    root_point_x, root_point_y, direction_x, direction_y, 'Color', 'black', ...
    'LineWidth', 2, 'MaxHeadSize', 1, 'DisplayName', '\fontname{宋体}车辆行驶方向');

% 遍历数据集，每隔5*replay_video_speed个数据点绘一次图
for index = 1 : 5 * replay_video_speed : height(obj.data_collection)
    % 删除车辆矩形位姿
    delete(vehicle_rectangle_fill_handle);
    
    % 更新车辆矩形位姿
    [vehicle_rectangle_points_x, vehicle_rectangle_points_y] = Vehicle_rectangle_generate(...
        obj.data_collection.('ENU_x')(index), obj.data_collection.('ENU_y')(index), ...
        deg2rad(obj.data_collection.('ENU_yaw_angle')(index)));
    
    % 根据循迹方法、IEHS工作状态确定车辆矩形填充颜色
    switch(observed_signal_struct.('lateral_control_method')(index))
        case 0
            vehicle_rectangle_color = 'r';
            vehicle_driving_status = '循迹待接管';
        case 1
            vehicle_rectangle_color = 'g';
            vehicle_driving_status = '视觉循迹';
        case 2
            vehicle_rectangle_color = 'y';
            vehicle_driving_status = 'GPS循迹';
        otherwise
            vehicle_rectangle_color = 'r';
            vehicle_driving_status = '循迹待接管';
    end
    switch observed_signal_struct.('IEHS_work_status')(index)
        case 0
            IEHS_work_status_string = '待机';
        case 1
            IEHS_work_status_string = '自动驾驶';
        case 4
            IEHS_work_status_string = '助力';
            vehicle_rectangle_color = [0.5, 0.5, 0.5]; % 灰色
            vehicle_driving_status = '手动驾驶';
        case 5
            IEHS_work_status_string = '人工介入';
        case 6
            IEHS_work_status_string = '警告';
        case 7
            IEHS_work_status_string = '故障';
        otherwise
            IEHS_work_status_string = char(...
                observed_signal_struct.('IEHS_work_status')(index));
    end
    
    % 更新计时提示文字
    relative_time = datetime(observed_signal_struct.('time_axis')(index), ...
        'ConvertFrom', 'posixtime');
    clock_timer_text_handle.String = datestr(relative_time, 'HH:MM:SS');
    
    % 更新区间代号提示文字
    segment_ID_text_handle.String = observed_signal_struct.('closest_point_segment_ID')(index);
    
    % 更新整车车速提示文字
    tram_speed_text_handle.String = string(observed_signal_struct.('tram_speed')(index));
    
    % 更新驾驶状态提示文字
    driving_status_text_handle.String = vehicle_driving_status;
    driving_status_text_handle.BackgroundColor = vehicle_rectangle_color;
    
    % 更新方向盘状态提示文字
    IEHS_work_status_text_handle.String = IEHS_work_status_string;
    
    % 更新视觉摄像头状态提示文字
    if 1 > observed_signal_struct.('lane_recognition_status')(index)
        vision_work_status_text_handle.String = '异常';
    else
        vision_work_status_text_handle.String = '正常';
    end
    
    % 更新组合惯导状态提示文字
    if 1 > observed_signal_struct.('location_validation')(index)
        GNSS_work_status_text_handle.String = '异常';
    else
        GNSS_work_status_text_handle.String = '正常';
    end
    
    % 更新车辆矩形绘图
    vehicle_rectangle_fill_handle = fill(vehicle_position_zoom_in_axes_handle, ...
        vehicle_rectangle_points_x, vehicle_rectangle_points_y, ...
        vehicle_rectangle_color, 'DisplayName', ['\fontname{宋体}', ...
        vehicle_driving_status, '车辆位置']);
    
    % 更新车辆行驶方向箭头
    delete(vehicle_arrow_quiver_handle);
    [root_point_x, root_point_y, direction_x, direction_y] = Direction_arrow_generate(...
        obj.data_collection.('ENU_x')(index), obj.data_collection.('ENU_y')(index), ...
        deg2rad(obj.data_collection.('ENU_yaw_angle')(index)));
    vehicle_arrow_quiver_handle = quiver(vehicle_position_zoom_in_axes_handle, ...
        root_point_x, root_point_y, direction_x, direction_y, 'Color', 'black', ...
        'LineWidth', 2, 'MaxHeadSize', 1, 'DisplayName', '\fontname{宋体}车辆行驶方向');
    
    % 更新车辆行驶轨迹与位置
    vehicle_trajectory_x = obj.data_collection.('ENU_x')(1 : index);
    vehicle_trajectory_y = obj.data_collection.('ENU_y')(1 : index);
    vehicle_point_x = obj.data_collection.('ENU_x')(index);
    vehicle_point_y = obj.data_collection.('ENU_y')(index);
    
    % 更新车辆位置局部显示范围
    vehicle_position_display_range = [observed_signal_struct.('x')(index) - 30, ...
        observed_signal_struct.('x')(index) + 30, observed_signal_struct.('y')(index) - 30, ...
        observed_signal_struct.('y')(index) + 30];
    axis(vehicle_position_zoom_in_axes_handle, vehicle_position_display_range);
    
    % 更新预瞄点
    preview_point_x = observed_signal_struct.('preview_point_x')(index);
    preview_point_y = observed_signal_struct.('preview_point_y')(index);
    
    % 更新放大后的局部参考路径
    zoom_in_local_path_tail_index = dsearchn([...
        observed_signal_struct.('closest_point_x'), ...
        observed_signal_struct.('closest_point_y')], [preview_point_x, preview_point_y]);
    zoom_in_local_path_x = observed_signal_struct.('closest_point_x')(...
        index : zoom_in_local_path_tail_index);
    zoom_in_local_path_y = observed_signal_struct.('closest_point_y')(...
        index : zoom_in_local_path_tail_index);
    
    % 更新视觉循迹线
    vision_lane_y = observed_signal_struct.('filtered_A0')(index) + ...
        observed_signal_struct.('filtered_A1')(index) * (vision_lane_x - 1.75) + ...
        observed_signal_struct.('filtered_A2')(index) * (vision_lane_x - 1.75).^2 / 2 + ...
        observed_signal_struct.('filtered_A3')(index) * (vision_lane_x - 1.75).^3 / 6;
    
    % 更新放大后的大地坐标系下视觉循迹线
    if 1 > observed_signal_struct.('lane_recognition_status')(index)
        zoom_in_vision_lane_x = [];
        zoom_in_vision_lane_y = [];
    else
        [zoom_in_vision_lane_x, zoom_in_vision_lane_y] = Vehicle_coordinate_revert(...
            observed_signal_struct.('x')(index), observed_signal_struct.('y')(index), ...
            vision_lane_x, vision_lane_y, deg2rad(observed_signal_struct.('yaw_angle')(index)));
    end
    
    % 更新整车速度
    tram_speed = observed_signal_struct.('tram_speed')(1 : index);
    
    % 更新视觉预瞄距离
    vision_preview_distance = tram_speed(end) * 1 / 3.6 - 1.75;
    vision_preview_distance(1 > vision_preview_distance) = 1;
    
    % 更新视觉预瞄点
    vision_preview_point_x = vision_preview_distance;
    vision_preview_point_y = observed_signal_struct.('filtered_A0')(index) + ...
        observed_signal_struct.('filtered_A1')(index) * vision_preview_point_x + ...
        observed_signal_struct.('filtered_A2')(index) * vision_preview_point_x.^2 / 2 + ...
        observed_signal_struct.('filtered_A3')(index) * vision_preview_point_x.^3 / 6;
    if 1 > observed_signal_struct.('lane_recognition_status')(index)
        zoom_in_vision_preview_point_x = [];
        zoom_in_vision_preview_point_y = [];
    else
        [zoom_in_vision_preview_point_x, zoom_in_vision_preview_point_y] = ...
            Vehicle_coordinate_revert(observed_signal_struct.('x')(index), ...
            observed_signal_struct.('y')(index), vision_preview_point_x, ...
            vision_preview_point_y, deg2rad(observed_signal_struct.('yaw_angle')(index)));
    end
    
    % 更新横向偏差显示范围
    lateral_offset_display_range = [observed_signal_struct.(...
        'vehicle_running_cumulative_length')(index) - 30, observed_signal_struct.(...
        'vehicle_running_cumulative_length')(index) + 10, -0.6, 0.6];
    axis(lateral_offset_axes_handle, lateral_offset_display_range);
    
    % 更新车辆累计行驶距离、横向偏差
    vehicle_running_cumulative_length_current = observed_signal_struct.(...
        'vehicle_running_cumulative_length')(1 : index);
    GNSS_lateral_offset = observed_signal_struct.('near_lateral_offset')(1 : index);
    vision_lateral_offset = obj.data_collection.('filtered_A0')(1 : index);
    
    % 更新整车速度显示范围
    tram_speed_display_range = [observed_signal_struct.(...
        'vehicle_running_cumulative_length')(index) - 30, observed_signal_struct.(...
        'vehicle_running_cumulative_length')(index) + 10, 0, 70];
    axis(tram_speed_axes_handle, tram_speed_display_range);
    
    % 更新预瞄角度偏差显示范围
    preview_angle_offset_display_range = [observed_signal_struct.(...
        'vehicle_running_cumulative_length')(index) - 30, observed_signal_struct.(...
        'vehicle_running_cumulative_length')(index) + 10, -4, 4];
    axis(preview_angle_offset_axes_handle, preview_angle_offset_display_range);
    
    % 更新预瞄角度偏差
    GNSS_preview_angle_offset = observed_signal_struct.('GNSS_preview_angle_offset')(1 : index);
    vision_preview_angle_offset = obj.data_collection.('vision_preview_angle_offset')(1 : index);
    
    % 更新预瞄横向偏差显示范围
    preview_lateral_offset_display_range = [observed_signal_struct.(...
        'vehicle_running_cumulative_length')(index) - 30, observed_signal_struct.(...
        'vehicle_running_cumulative_length')(index) + 10, -0.6, 0.6];
    axis(preview_lateral_offset_axes_handle, preview_lateral_offset_display_range);
    
    % 更新GNSS预瞄横向偏差
    GNSS_preview_lateral_offset = observed_signal_struct.('GNSS_preview_lateral_offset')(1 : index);
    
    % 更新视觉预瞄横向偏差
    vision_preview_lateral_offset = observed_signal_struct.('vision_preview_lateral_offset')(1 : index);
    
    % 更新转向轴转角显示范围
    steering_axle_angle_display_range = [observed_signal_struct.(...
        'vehicle_running_cumulative_length')(index) - 30, observed_signal_struct.(...
        'vehicle_running_cumulative_length')(index) + 10, -4, 4];
    axis(steering_axle_angle_axes_handle, steering_axle_angle_display_range);
    
    % 更新转向轴转角
    steering_axle_angle = observed_signal_struct.('steering_axle_angle')(1 : index);
    set_steering_axle_angle = observed_signal_struct.('set_steering_axle_angle')(1 : index);
    
    % 更新方向盘转角显示范围
    steering_wheel_angle_display_range = [observed_signal_struct.(...
        'vehicle_running_cumulative_length')(index) - 30, observed_signal_struct.(...
        'vehicle_running_cumulative_length')(index) + 10, -110, 110];
    axis(steering_wheel_angle_axes_handle, steering_wheel_angle_display_range);
    
    % 更新方向盘转角
    steering_wheel_angle = observed_signal_struct.('steering_wheel_angle')(1 : index);
    set_steering_wheel_angle = observed_signal_struct.('set_steering_wheel_angle')(1 : index);
    
    % 更新方向盘示意图显示范围
    steering_wheel_image_axes_handle.YAxis.Visible = 'off';
    steering_wheel_image_axes_handle.XAxis.Visible = 'off';
    axis(steering_wheel_image_axes_handle, [0, 2 * center_point(1), 0, 2 * center_point(2)]);
    
    % 更新方向盘示意图旋转角度
    steering_wheel_image_points_current = Specific_point_rotate(...
        steering_wheel_image_points_original, center_point, deg2rad(...
        observed_signal_struct.('steering_wheel_angle')(index)));
    steering_wheel_image_points_x = steering_wheel_image_points_current(:, 1);
    steering_wheel_image_points_y = steering_wheel_image_points_current(:, 2);
    
    % 更新全局参考路径
    [global_path_x, global_path_y] = Vehicle_coordinate_transfer_m(observed_signal_struct.('x')(index), ...
        observed_signal_struct.('y')(index), observed_signal_struct.('processed_x'), ...
        observed_signal_struct.('processed_y'), deg2rad(observed_signal_struct.('yaw_angle')(index)));
    
    % 更新局部参考路径
    [local_path_x, local_path_y] = Vehicle_coordinate_transfer_m(observed_signal_struct.('x')(index), ...
        observed_signal_struct.('y')(index), observed_signal_struct.('closest_point_x'), ...
        observed_signal_struct.('closest_point_y'), deg2rad(observed_signal_struct.('yaw_angle')(index)));
    
    % 更新绘图
    refreshdata(global_path_axes_handle, 'caller');
    refreshdata(vehicle_position_zoom_in_axes_handle, 'caller');
    refreshdata(lateral_offset_axes_handle, 'caller');
    refreshdata(tram_speed_axes_handle, 'caller');
    refreshdata(preview_angle_offset_axes_handle, 'caller');
    refreshdata(preview_lateral_offset_axes_handle, 'caller');
    refreshdata(steering_axle_angle_axes_handle, 'caller');
    refreshdata(steering_wheel_angle_axes_handle, 'caller');
    refreshdata(steering_wheel_image_axes_handle, 'caller');
    refreshdata(vehicle_axes_handle, 'caller');
    drawnow;
    
    % 获取当前窗口的帧数据
    frame = getframe(main_figure_handle);
    
    % 将当前帧保存到视频中
    writeVideo(replay_video_writer_obj, frame);
end

% 关闭回放视频采集器
close(replay_video_writer_obj);

end
