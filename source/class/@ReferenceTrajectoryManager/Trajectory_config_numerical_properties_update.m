% 更新轨迹配置数值类型的属性
function [obj] = Trajectory_config_numerical_properties_update(obj)
%   1.输入参数：
%       (1)obj    REFERENCETRAJECTORYMANAGER类的一个实例
%   2.输出参数：
%       (1)obj    REFERENCETRAJECTORYMANAGER类的一个实例

%% 相对坐标原点纬度
temp_grid_origin_latitude = input(...
    '->请设置相对坐标原点纬度（deg） [回车默认上一次设置的数值，初始设置值为0]: ', 's');
if ~isempty(temp_grid_origin_latitude)
    obj.grid_origin_latitude = temp_grid_origin_latitude;
end

%% 相对坐标原点经度
temp_grid_origin_longitude = input(...
    '->请设置相对坐标原点经度（deg） [回车默认上一次设置的数值，初始设置值为0]: ', 's');
if ~isempty(temp_grid_origin_longitude)
    obj.grid_origin_longitude = temp_grid_origin_longitude;
end

%% 路径头部舍弃点数
temp_path_head_drop_point_number = input(...
    '->请设置路径头部舍弃点数 [回车默认上一次设置的数值，初始设置值为0]: ');
if ~isempty(temp_path_head_drop_point_number)
    obj.path_head_drop_point_number = uint32(temp_path_head_drop_point_number);
end

%% 路径尾部舍弃点数
temp_path_tail_drop_point_number = input(...
    '->请设置路径尾部舍弃点数 [回车默认上一次设置的数值，初始设置值为0]: ');
if ~isempty(temp_path_tail_drop_point_number)
    obj.path_tail_drop_point_number = uint32(temp_path_tail_drop_point_number);
end

%% 首尾间插值使能
head_tail_interpolate_enable_string = input(...
    '->是否启用首尾间插值（Y/N） [回车默认N]: ', 's');
if isempty(head_tail_interpolate_enable_string)
    head_tail_interpolate_enable_string = 'N';
end
if contains(head_tail_interpolate_enable_string, ...
        {'Y', 'y', 'YES', 'Yes', 'yes'})
    obj.head_tail_interpolate_enable = true;
else
    obj.head_tail_interpolate_enable = false;
end

%% 保存轨迹配置XML文件
obj.Trajectory_config_XML_write;

end
