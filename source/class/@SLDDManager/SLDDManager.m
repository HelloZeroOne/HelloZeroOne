classdef SLDDManager
    %数据字典管理
    %   用以维护数据字典内的参考轨迹、TRDP协议
    
    %私有属性
    properties (Access = private)
        
        % 数据字典文件路径，字符串
        SLDD_file_path(1, 1) string
        
        % 数据导入专用文件路径，字符串
        data_import_file_path(1, 1) string
        
        % 数据导入专用文件标识索引，整型的double变量
        data_import_file_index(1, 1) double {mustBeInteger}
        
    end
    
    %公开属性
    properties
        
        % 参考轨迹簇，REFERENCETRAJECTORY类
        reference_trajectory_cluster(:, 1) ReferenceTrajectory
        
        % TRDP协议管理器，TRDPMANAGER类
        TRDP_manager(1, 1) TRDPManager
        
    end
    
    methods
        
        %构造SLDDMANAGER类的一个实例
        %   记录数据字典文件的路径以维护其内容
        function obj = SLDDManager(SLDD_file_path, data_import_file_path)
            
            % 如果输入了大于等于1个的参数，将其赋予数据字典文件路径属性
            if 1 <= nargin
                obj.SLDD_file_path = SLDD_file_path;
            end
            
            % 如果输入了2个参数，将第2个参数赋予数据导入专用文件路径属性
            if isequal(2, nargin)
                obj.data_import_file_path = data_import_file_path;
            end
            
        end
        
        %打开数据导入专用文件
        %   记录数据导入专用文件标识索引
        function obj = Open_data_import_file(obj)
            obj.data_import_file_index = fopen(obj.data_import_file_path, 'w');
        end
        
        %关闭数据导入专用文件
        %   释放内存空间
        function [] = Close_data_import_file(obj)
            fclose(obj.data_import_file_index);
        end
        
        %导出数据字典中的既有参考轨迹
        %   搜索数据字典内的既有参考轨迹，导出到参考轨迹簇属性中
        [obj] = SLDD_reference_trajectory_export(obj)
        
        %导入工程中的参考轨迹
        %   多选工程内的既有参考轨迹配置XML文件，将对应轨迹数据导入到参考轨迹簇属性中
        [obj] = Project_reference_trajectory_import(obj)
        
        %打印参考轨迹总线定义
        %   根据数据字典固定格式打印参考轨迹总线定义信息到数据字典配置专用m文件中
        [] = Reference_trajectory_bus_definition_print(obj)
        
        %打印参考轨迹簇总线定义
        %   根据数据字典固定格式打印参考轨迹簇总线定义信息到数据字典配置专用m文件中
        [] = Reference_trajectory_cluster_bus_definition_print(obj)
        
        %打印参考轨迹簇路点信息
        %   根据数据字典固定格式打印参考轨迹簇路点信息到数据字典配置专用m文件中
        [] = Reference_trajectory_cluster_way_point_print(obj)
        
        %将参考轨迹导入数据字典
        %   将数据字典管理器中的参考轨迹簇通过数据字典配置专用m文件导入数据字典中
        [obj] = SLDD_reference_trajectory_import(obj)
        
        %删除数据字典中的全部参考轨迹
        %   搜索并删除数据字典中的所有轨迹簇实例以及轨迹簇配置总线
        [] = SLDD_all_reference_trajectory_delete(obj)
        
        %显示数据字典中的参考轨迹
        %   获取数据字典中的全部参考轨迹，显示名称列表，可选择是否开启绘图，
        %   也可选择查看感兴趣的参考轨迹
        [] = SLDD_reference_trajectory_display(obj, plot_enable)
        
        %删除参考轨迹簇中的轨迹
        %   指定1个或多个轨迹索引，然后从参考轨迹簇中删除
        [obj] = Reference_trajectory_cluster_delete(obj)
        
        %打印TRDP高层总线定义信息
        %   根据数据字典固定格式打印TRDP高层总线定义信息到数据字典配置专用m文件中
        [] = TRDP_higher_bus_definition_print(obj, bus_name, bus_comment, ...
            TRDP_process_data_list)
        
        %打印TRDP过程数据总线定义信息
        %   根据数据字典固定格式打印TRDP过程数据总线定义信息到数据字典配置专用m文件中
        [] = TRDP_process_data_bus_definition_print(obj, TRDP_process_data_list)
        
        %打印TRDP配置总线定义信息
        %   根据数据字典固定格式打印TRDP配置总线定义信息到数据字典配置专用m文件中
        [] = TRDP_config_bus_definition_print(obj, TRDP_process_data_list)
        
        %打印TRDP配置数值结构体定义信息
        %   根据数据字典固定格式打印TRDP配置数值结构体定义信息到数据字典配置专用m文件中
        [] = TRDP_config_value_struct_definition_print(obj, TRDP_process_data_list)
        
        %打印TRDP信号默认值结构体定义信息
        %   根据数据字典固定格式打印TRDP信号默认值结构体定义信息到数据字典配置专用m文件中
        [] = TRDP_signal_default_value_struct_definition_print(obj, TRDP_process_data_list)
        
        %将TRDP协议导入数据字典
        %   将TRDP协议管理器中的TRDP协议通过数据字典配置专用m文件导入数据字典中
        [obj] = SLDD_TRDP_import(obj)
        
        %获取数据字典中的指定参考轨迹名称
        %   根据期望轨迹索引搜索数据字典，提取轨迹名称，如果没有搜索到则返回""
        [reference_trajectory_name] = SLDD_reference_trajectory_name_get(...
            obj, desired_trajectory_index)
        
        %更新数据字典中的参考轨迹
        %   获取数据字典中的既有参考轨迹，选择工程中的添加进去，然后可以选择删除其中不需要的参考轨迹
        [obj] = SLDD_reference_trajectory_update(obj)
        
        %删除数据字典中的指定参考轨迹
        %   获取数据字典中的既有参考轨迹，选择删除其中不需要的参考轨迹
        [obj] = SLDD_specific_reference_trajectory_delete(obj)
        
        %更新数据字典中的TRDP协议
        %   选择车型、车厢，更新数据字典中的TRDP协议
        [obj] = SLDD_TRDP_protocol_update(obj)
        
    end
    
end
