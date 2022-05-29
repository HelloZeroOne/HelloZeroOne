classdef ModelTestCase
    %模型测试用例
    %   按照SimulinkTestManager的格式要求组织模型测试用例数据
    
    %公开属性
    properties
        
        % 测试用例EXCEL文件绝对路径，字符串
        test_case_EXCEL_file_path(1, 1) string
        
        % 模型的输入信号数值，必须包含名为input_time_axis的时间轴列，表格
        input_signal_value(:, :) table
        
        % 模型的输出信号数值，必须包含名为output_time_axis的时间轴列，表格
        output_signal_value(:, :) table
        
        % 模型的输入信号类型，表格
        input_signal_type(:, :) table
        
        % 模型的输出信号类型，表格
        output_signal_type(:, :) table
        
        % 模型的输出信号绝对误差，表格
        output_signal_absolute_tolerance(:, :) table
        
        % 模型的输出信号模块路径，表格
        output_signal_block_path(:, :) table
        
    end
    
    %成员函数
    methods
        
        %构造MODELTESTCASE类的一个实例
        %   记录测试用例EXCEL文件绝对路径以维护其内容
        function [obj] = ModelTestCase(test_case_EXCEL_file_path)
            
            % 如果输入了大于等于1个的参数，将其赋予测试用例EXCEL文件绝对路径属性
            if 1 <= nargin
                obj.test_case_EXCEL_file_path = test_case_EXCEL_file_path;
            end
            
        end
        
        %生成EXCEL版本的测试用例
        %   利用本class的成员属性，按照测试用例指定格式拼接表格，输出到指定EXCEL文件中
        [] = Test_case_EXCEL_generate(obj)

    end
    
end
