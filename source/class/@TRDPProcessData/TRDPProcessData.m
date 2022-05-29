classdef TRDPProcessData
    %TRDP过程数据
    %   用以维护一类TRDP变量清单
    
    %公开属性
    properties
        
        % TRDP过程数据名，字符串
        name(1, 1) string
        
        % TRDP变量清单，TRDPVariable类
        variable_list(:, 1) TRDPVariable
        
    end
    
    methods
        
        %构造TRDPPROCESSDATA类的一个实例
        %   记录TRDP过程数据名
        function obj = TRDPProcessData(name)
            
            % 如果输入了1个的参数，将其赋予TRDP过程数据名属性
            if isequal(1, nargin)
                obj.name = name;
            end
            
        end
        
        %解析TRDP过程数据
        %   通过TRDP过程数据名称筛选表格，读取TRDP变量属性
        [obj] = TRDP_process_data_parse(obj, TRDP_variable_list_table, ...
            port_data_list_table)
        
    end
    
end
