classdef ExperimentDataManager
    %试验数据管理
    %   从描述、文件路径等不同维度定义试验数据的管理信息，具备必要的文件管理功能
    
    %私有属性
    properties (Access = private)
        
        % 试验数据配置XML文件路径，字符串
        experiment_data_config_XML_file_path(1, 1) string
        
    end
    
    %公开属性
    properties
        
        % 数据名称，字符串
        name(1, 1) string = "new_experiment_data"
        
        % 数据描述，字符串
        description(1, 1) string
        
        % 数据源文件路径，字符串
        data_source_file_path(:, 1) string
        
        % SDI绘图配置文件路径，字符串
        SDI_plot_config_file_path(1, 1) string
        
        % 清除上一轮测试数据SDI绘图使能
        clear_previous_SDI_plot_enable(1, 1) logical = true
        
    end
    
    %成员函数
    methods
        
        %构造EXPERIMENTDATAMANAGER的一个实例
        %   以试验数据配置XML文件作为EXPERIMENTDATAMANAGER类的实例与
        %   系统交互的媒介，构造实例时传输XML文件完整路径
        function obj = ExperimentDataManager(XML_file_path)
            
            % 如果输入参数数量不等于0，将其按顺序赋予试验数据配置XML文件路径属性
            if ~isequal(0, nargin)
                n_row = size(XML_file_path, 1);
                n_column = size(XML_file_path, 2);
                obj(n_row, n_column) = obj;
                for index1 = 1 : n_row
                    for index2 = 1: n_column
                        obj(index1, index2).experiment_data_config_XML_file_path = ...
                            XML_file_path(index1, index2);
                    end
                end
            end
            
        end
        
        %修改试验数据配置XML文件路径
        %   为私有属性定义外部设置接口函数
        function [obj] = Experiment_data_config_XML_file_path_set(obj, XML_file_path)
            obj.experiment_data_config_XML_file_path = XML_file_path;
        end
        
        %写入试验数据配置XML文件
        %   将EXPERIMENTDATAMANAGER类实例的属性信息写入试验数据配置XML文件
        [] = Experiment_data_config_XML_write(obj)
        
        %读取试验数据配置XML文件
        %   从试验数据配置XML文件读取EXPERIMENTDATAMANAGER类实例的属性信息
        [obj] = Experiment_data_config_XML_read(obj)
        
        %更新试验数据源文件
        %    选择数据源文件，备份到试验数据暂存目录下，同步更新数据源文件属性
        [obj] = Experiment_data_source_file_update(obj)
        
        %创建试验数据相关文件
        %   生成试验数据配置XML文件，备份数据源文件
        [obj] = Experiment_data_file_create(obj)
        
        %修改试验数据相关文件
        %   修改SDI绘图配置文件，重新选择数据源文件
        [obj] = Experiment_data_file_modify(obj)
        
        %删除试验数据相关文件
        %   删除试验数据配置XML文件、SDI绘图配置文件、删除数据源文件备份文件夹
        [obj] = Experiment_data_file_delete(obj)
        
        %导出试验数据相关文件
        %   将试验数据配置XML文件、SDI绘图配置文件、数据源文件压缩打包，
        %   并附加时间戳，导出到当前工作目录
        [] = Experiment_data_file_export(obj)
        
        %导入试验数据相关文件
        %   从当前工作目录的cache子目录下将试验数据配置XML文件、SDI绘图配置文件、
        %   数据源文件拷贝到指定文件夹下
        [obj] = Experiment_data_file_import(obj, filenames)
        
        %显示试验数据配置文件信息
        %   快速查看一份试验数据的全部配置信息
        [] = Experiment_data_config_display(obj)
        
    end
    
end
