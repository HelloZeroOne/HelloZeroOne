% 显示轨迹配置文件信息
function [] = Trajectory_config_display(obj)
%   1.输入参数：
%       (1)obj    REFERENCETRAJECTORYMANAGER类的一个实例
%   2.输出参数：无

% 读取既有轨迹配置文件
obj = obj.Trajectory_config_XML_read;

% 轨迹名称
fprintf("$轨迹名称：%s\n", obj.name);

% 轨迹描述
fprintf("$轨迹描述：%s\n", obj.description);

% 轨迹配置文件路径
fprintf("$轨迹配置文件路径：%s\n", obj.trajectory_config_XML_file_path);

% 轨迹映射文件路径
fprintf("$轨迹映射文件路径：%s\n", obj.mapping_file_path);

% 数据源文件路径
for index = 1 : size(obj.data_source_file_path, 1)
    fprintf("$数据源文件%d路径：%s\n", index, obj.data_source_file_path(index));
end

% 原始轨迹文件路径
fprintf("$原始轨迹文件路径：%s\n", obj.original_trajectory_file_path);

% 处理后的轨迹文件路径
fprintf("$处理后的轨迹文件路径：%s\n", obj.processed_trajectory_file_path);

% 分段点地图文件路径
fprintf("$分段点地图文件路径：%s\n", obj.split_point_map_file_path);

% 相对坐标原点纬度
fprintf("$相对坐标原点纬度：%s deg\n", obj.grid_origin_latitude);

% 相对坐标原点经度
fprintf("$相对坐标原点经度：%s deg\n", obj.grid_origin_longitude);

% 路径头部舍弃点数
fprintf("$路径头部舍弃点数：%d\n", obj.path_head_drop_point_number);

% 路径尾部舍弃点数
fprintf("$路径头部舍弃点数：%d\n", obj.path_tail_drop_point_number);

% 路径首尾间插值使能
fprintf("$路径首尾间插值使能：%s\n", string(obj.head_tail_interpolate_enable));

% 直接使用组合惯导位姿换算使能
fprintf("$直接使用组合惯导位姿换算使能：%s\n", string(obj.GNSS_pose_convert_enable));

end
