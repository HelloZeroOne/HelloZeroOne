classdef ReferenceTrajectory
    %参考轨迹
    %   描述一条参考轨迹的数据集
    
    %私有属性
    properties (Access = private)
        % 参考轨迹文件路径，字符串
        reference_trajectory_file_path(1, 1) string
    end
    
    %公开属性
    properties
        % 轨迹名称，字符串
        name(1, 1) string
        
        % 路点属性，表格
        way_point_properties(:, :) table
    end
    
    methods
        function obj = ReferenceTrajectory(reference_trajectory_file_path)
            %构造REFERENCETRAJECTORY的一个实例
            %   记录参考轨迹数据文件的路径以读取其内容
            % 如果输入了1个参数，将其赋予参考轨迹文件路径属性
            if isequal(1, nargin)
                [obj.reference_trajectory_file_path] = reference_trajectory_file_path;
            end
        end
        
        function [obj] = Reference_trajectory_file_path_set(obj, reference_trajectory_file_path)
            %修改参考轨迹文件路径
            %   为私有属性定义外部设置接口函数
            obj.reference_trajectory_file_path = reference_trajectory_file_path;
        end
        
        %载入参考轨迹
        %   从参考轨迹数据文件解析轨迹名称、属性表格
        [obj] = Reference_trajectory_load(obj)
        
        %显示参考轨迹信息
        %   为路点属性表格补充观察量，采用模板绘图
        [] = Reference_trajectory_display(obj, plot_mode)
    end
end
