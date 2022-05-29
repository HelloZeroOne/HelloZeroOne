classdef DataAnalyzer
    %数据分析器
    %   记录不同的数据分析模式，形成模板供后续快速调用
    
    %私有属性
    properties (Access = private)
        
        % 记录文件路径，string
        record_file_path(:, 1) string
        
        % 测试数据描述，char
        data_description(1, :) char = '测试数据'
        
    end
    
    %公开属性
    properties
        
        % 数据集，table
        data_collection(:, :) table
        
        % CAN信号结构体，struct
        CAN_signals_struct(:, :) struct
        
        % 测试运行实例，Simulink.sdi.Run对象
        test_run(:, 1) Simulink.sdi.Run
        
        % 数据字典管理器，主要是用于获取参考轨迹，SLDDManager对象
        SLDD_manager(1, 1) SLDDManager
        
        % 参考轨迹管理器，ReferenceTrajectoryManager对象
        reference_trajectory_manager(1, 1) ReferenceTrajectoryManager
        
        % 试验数据管理器，ExperimentDataManager对象
        experiment_data_manager(1, 1) ExperimentDataManager
        
        % 参考轨迹名称，字符串
        reference_trajectory_name(1, 1) string
        
        % 参考轨迹，ReferenceTrajectory对象
        reference_trajectory(1, 1) ReferenceTrajectory
        
        % 信号重命名映射表，table
        signal_rename_mapping_table(:, :) table
        
    end
    
    %成员函数
    methods
        
        %构造DATAANALYZER的一个实例
        %   输入记录文件路径、测试数据描述
        function obj = DataAnalyzer(record_file_path, data_description)
            
            % 如果输入了大于等于1个参数，将第1个赋予记录文件路径属性
            if 1 <= nargin
                obj.record_file_path = record_file_path;
            end
            
            % 如果输入了大于等于2个参数，将第2个赋予测试数据描述属性
            if 2 <= nargin
                obj.data_description = data_description;
            end
            
        end
        
        %导入信号重命名映射表
        %   从预设Excel表格文件中导入信号重命名映射表
        function obj = Signal_rename_mapping_table_import(obj, ...
                signal_rename_mapping_table_file_path)
            
            obj.signal_rename_mapping_table = readtable(...
                signal_rename_mapping_table_file_path, ...
                'PreserveVariableNames', true);
            
        end
        
        %创建定制化的SDI运行实例
        %   将数据集或CAN信号结构体中的信号构造为SDI可识别的格式，以便利用SDI分析数据
        [obj] = Customized_SDI_run_create(obj)
        
        %获取数据分析所需的参考轨迹名称
        %   从数据集中提取期望轨迹索引，再到数据字典中解析参考轨迹名称
        [obj] = Reference_trajectory_name_get(obj)
        
        %初始化数据分析所需的参考轨迹管理器
        %   根据参考轨迹名称拼接轨迹配置XML文件名，设置XML文件路径，并读取内容
        [obj] = Reference_trajectory_manager_initialize(obj)
        
        %获取数据分析所需的参考轨迹
        %   根据参考轨迹管理器设置参考轨迹文件路径，并读取内容
        [obj] = Reference_trajectory_get(obj)
        
        %分析运营统计信息
        %   分析全程最高速度、区间最高速度排名前三、区间最高速度排名倒数前三、
        %   全程旅行速度、区间旅行速度排名前三、区间旅行速度排名倒数前三、
        %   全程耗时、区间耗时排名前三、区间耗时排名倒数前三、全程最大横向偏差、
        %   区间最大横向偏差排名前三，区间最大横向偏差排名倒数前三、全程平均横向偏差、
        %   区间平均横向偏差排名前三，区间平均横向偏差排名倒数前三、全程运行里程、
        %   全程主动接管次数、区间主动接管次数排名榜、全程被动接管次数、
        %   区间被动接管次数排名榜
        [obj] = Template_1_analyze(obj)
        
        %分析车辆实际行驶轨迹与原始参考轨迹的区别
        %   分析路点图、横摆角、曲率、横向偏差
        [obj] = Template_2_analyze(obj)
        
        %动态回放车辆行驶数据
        %   在路点图中动态绘制车辆行驶轨迹
        [obj] = Template_3_analyze(obj)
        
        %导出数据记录文件中的数据
        %   区分文件格式执行不同的导出流程
        [obj] = Record_file_data_export(obj, varargin)
        
        %删除表格中的无效数据
        %   针对智轨实际应用，根据设定的感兴趣ID、速度阈值、感兴趣区间代号、
        %   相关时间片段筛选数据
        [obj] = Invalid_table_data_delete(obj, related_task_ID_string, ...
            speed_threshold, related_segment_ID_string, related_time_piece_string)
        
        %定制化SDI绘图显示试验数据曲线
        %   根据预先定义的试验配置表格筛选信号并按照指定的格式显示到SDI中
        [obj] = Template_4_analyze(obj)
        
        %将数据记录文件里的信号重命名为工程内脚本所用信号名称
        %   根据预先定义的信号重命名映射表格筛选信号并按照指定的工程内脚本所用信号名称重命名
        [processed_signal_names] = Record_file_signal_name2script_file_signal_name(...
            obj, original_signal_names)
        
        %将工程内脚本文件里的信号重命名为数据记录文件中所用信号名称
        %   根据预先定义的信号重命名映射表格筛选信号并按照指定的数据记录文件中所用信号名称重命名
        [processed_signal_names] = Script_file_signal_name2record_file_signal_name(...
            obj, original_signal_names)
        
        %为表格数据集拆分构建时分秒三列信号，补偿时间轴精度
        %   构建时分秒三列信号，根据表格数据集中的时间轴重复项数量构建相对应的时间精度补偿向量，
        %   区分用于SDI绘图的每个信号点时间，避免曲线因时间精度低而变形
        [obj] = Table_time_axis_compensate(obj)
        
        %为CAN报文结构体数据集拆分构建时分秒三列信号，补偿时间轴精度
        %   构建时分秒三列信号，根据CAN报文结构体数据集中的时间轴重复项数量构建相对应的时间精度补偿向量，
        %   区分用于SDI绘图的每个信号点时间，避免曲线因时间精度低而变形
        [obj] = CAN_struct_time_axis_compensate(obj)
        
    end
    
end
