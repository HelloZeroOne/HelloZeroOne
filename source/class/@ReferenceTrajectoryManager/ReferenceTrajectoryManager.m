classdef ReferenceTrajectoryManager
    %参考轨迹管理
    %   从描述、文件路径、数值、开关等不同维度定义一条参考轨迹的管理信息，
    %   具备必要的管理功能
    
    %私有属性
    properties (Access = private)
        
        % 轨迹配置XML文件路径，字符串
        trajectory_config_XML_file_path(1, 1) string
        
    end
    
    %公开属性
    properties
        
        % 轨迹名称，字符串
        name(1, 1) string = "new_trajectory"
        
        % 轨迹描述，字符串
        description(1, 1) string = ""
        
        % 轨迹映射文件路径，字符串
        mapping_file_path(1, 1) string
        
        % 数据源文件路径，字符串
        data_source_file_path(:, 1) string
        
        % 原始轨迹文件路径，字符串
        original_trajectory_file_path(1, 1) string
        
        % 处理后的轨迹文件路径，字符串
        processed_trajectory_file_path(1, 1) string
        
        % 分段点地图文件路径，字符串
        split_point_map_file_path(1, 1) string
        
        % 相对坐标原点纬度，实数，采用字符串存储以避免损失精度
        grid_origin_latitude(1, 1) string = "0"
        
        % 相对坐标原点经度，实数，采用字符串存储以避免损失精度
        grid_origin_longitude(1, 1) string = "0"
        
        % 路径头部舍弃点数，自然数
        path_head_drop_point_number(1, 1) uint32 = 0
        
        % 路径尾部舍弃点数，自然数
        path_tail_drop_point_number(1, 1) uint32 = 0
        
        % 路径首尾间插值使能
        head_tail_interpolate_enable(1, 1) logical = false
        
        % 直接使用组合惯导位姿换算相对东北天坐标使能
        GNSS_pose_convert_enable(1, 1) logical = false
        
    end
    
    %成员函数
    methods
        
        %构造REFERENCETRAJECTORYMANAGER类的一个实例
        %   以轨迹配置XML文件作为REFERENCETRAJECTORYMANAGER类的实例与
        %   系统交互的媒介，构造实例时传输XML文件完整路径
        function [obj] = ReferenceTrajectoryManager(XML_file_path)
            
            % 如果输入参数数量不等于0，将其按顺序赋予轨迹配置XML文件路径属性
            if ~isequal(0, nargin)
                n_row = size(XML_file_path, 1);
                n_column = size(XML_file_path, 2);
                obj(n_row, n_column) = obj;
                for index1 = 1 : n_row
                    for index2 = 1: n_column
                        obj(index1, index2).trajectory_config_XML_file_path = ...
                            XML_file_path(index1, index2);
                    end
                end
            end
            
        end
        
        %修改轨迹配置XML文件路径
        %   为私有属性定义外部设置接口函数
        function [obj] = Trajectory_config_XML_file_path_set(obj, XML_file_path)
            obj.trajectory_config_XML_file_path = XML_file_path;
        end
        
        %写入轨迹配置XML文件
        %   将REFERENCETRAJECTORYMANAGER类实例的属性信息写入轨迹配置XML文件
        [] = Trajectory_config_XML_write(obj)
        
        %读取轨迹配置XML文件
        %   从轨迹配置XML文件读取REFERENCETRAJECTORYMANAGER类实例的属性信息
        [obj] = Trajectory_config_XML_read(obj)
        
        %更新轨迹配置数值类型的属性
        %   使用input输入的方式更新REFERENCETRAJECTORYMANAGER类实例的数值类型属性
        [obj] = Trajectory_config_numerical_properties_update(obj)
        
        %从实时采集的数据记录文件中导入原始轨迹
        %   数据导入到原始轨迹csv文件中保存
        [] = Original_trajectory_import(obj)
        
        %从原始轨迹生成处理后的轨迹
        %   数据导出到处理后的轨迹csv文件中保存，绘图以查看处理效果
        [] = Processed_trajectory_generate(obj)
        
        %创建参考轨迹相关文件
        %   生成参考轨迹配置XML文件、轨迹映射文件、原始轨迹csv文件、
        %   分段点地图mat文件、处理后的轨迹csv文件
        [obj] = Reference_trajectory_file_create(obj)
        
        %修改参考轨迹相关文件
        %   生成处理后的轨迹csv文件,可选生成参考轨迹配置XML文件、
        %   原始轨迹csv文件、分段点地图mat文件
        [obj] = Reference_trajectory_file_modify(obj)
        
        %删除参考轨迹相关文件
        %   删除参考轨迹配置XML文件、数据源文件、轨迹映射文件、原始轨迹csv文件、
        %   处理后的轨迹csv文件、分段点地图mat文件
        [obj] = Reference_trajectory_file_delete(obj)
        
        %导出参考轨迹相关文件
        %   将参考轨迹配置XML文件、轨迹映射文件、数据源文件、原始轨迹csv文件、
        %   处理后的轨迹csv文件、分段点地图mat文件压缩打包，并附加时间戳，
        %   导出到当前工作目录
        [] = Reference_trajectory_file_export(obj)
        
        %导入参考轨迹相关文件
        %   从当前工作目录的cache子目录下将参考轨迹配置XML文件、轨迹映射文件、
        %   数据源文件、原始轨迹csv文件、处理后的轨迹csv文件、
        %   分段点地图mat文件拷贝到指定文件夹下
        [obj] = Reference_trajectory_file_import(obj, filenames)
        
        %更新数据源文件路径
        %   设定一个主数据源文件路径，按需设置其他数据源文件路径
        [obj] = Data_source_file_path_update(obj)
        
        %显示轨迹配置文件信息
        %   快速查看一条轨迹的全部配置信息
        [] = Trajectory_config_display(obj)
        
        %接合原始轨迹
        %   从指定数据源导出轨迹数据，按照各区间设定的数据源代号按顺序接合轨迹
        [jointed_trajectory] = Original_trajectory_joint(obj)
        
        %生成适配G300平台的参考轨迹文件
        %   构建参考轨迹路点属性文件、参考轨迹区间属性文件、参考轨迹坐标系信息文件
        [] = G300_reference_trajectory_file_generate(obj)
        
    end
    
end
