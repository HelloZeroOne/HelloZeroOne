classdef TRDPVariable
    %TRDP变量
    %   用以维护TRDP变量属性
    
    %公开属性
    properties
        
        % 变量名，字符串
        name(1, 1) string
        
        % 格式，字符串
        byte_order(1, 1) string
        
        % 系数，字符串，防止丢失精度
        factor(1, 1) string
        
        % 偏移，字符串，防止丢失精度
        offset(1, 1) string
        
        % 类型，字符串
        type(1, 1) string
        
        % 起始字节，uint32
        start_byte(1, 1) uint32
        
        % 起始位，uint32
        start_bit(1, 1) uint32
        
        % 位宽，uint32
        bit_length(1, 1) uint32
        
        % 最小值，字符串，防止丢失精度
        min(1, 1) string
        
        % 最大值，字符串，防止丢失精度
        max(1, 1) string
        
        % 数据名称，字符串
        comment(1, 1) string
        
    end
    
    methods
        
        %构造TRDPVARIABLE类的一个实例
        %   暂时空白
        function obj = TRDPVariable()
            
        end
        
    end
    
end
