% TRDP输出数据打包
function output_data = TRDP_output_data_pack(TRDP_data_length, ...
    TRDP_config_structure, TRDP_signals_structure)
%   1.输入参数：
%       (1)TRDP_data_length          TRDP输出数据长度（字节数）
%       (2)TRDP_config_structure     TRDP配置结构体
%       (3)TRDP_signals_structure    TRDP信号结构体
%   2.输出参数：
%       (1)output_data               输出uint8型数组

%% 初始化
signal_number         = length(TRDP_config_structure.byte_order); % 信号数量
buffer                = uint8(zeros(8, 1));                       % 临时uint8缓冲
cleaner               = uint8(zeros(8, 1));                       % 临时uint8清除器
namelist              = fieldnames(TRDP_signals_structure);       % 信号结构体域名清单
output_data           = uint8(zeros(TRDP_data_length, 1));        % 输出uint8型数组初始赋零

%% 根据TRDP解析配置结构体按顺序依次对信号数值进行编码
for index1 = 1 : signal_number
    
    % 对输入信号进行最小、最大数值限制
    TRDP_signals_structure.(namelist{index1}) = max(TRDP_config_structure.min(index1), ...
        min(TRDP_config_structure.max(index1), TRDP_signals_structure.(namelist{index1})));
    
    % 计算传输值
    transmit_value = (TRDP_signals_structure.(namelist{index1}) - ...
        TRDP_config_structure.offset(index1)) / TRDP_config_structure.factor(index1);
    
    % 强制类型转换为int64
    int64_buffer = int64(transmit_value);
    
    % INT格式需要进行有符号整型转换并根据符号位判断是否采用补码
    if 1 == TRDP_config_structure.type(index1)
        
        % 符号位非0时将有符号缓冲通过补码转换为无符号缓冲
        if 0 > int64_buffer
            uint64_buffer = uint64(int64_buffer + bitshift(int64(1), ...
                TRDP_config_structure.bit_length(index1)));

        % 符号位为0时直接将有符号缓冲转换为无符号缓冲
        else
            uint64_buffer = uint64(int64_buffer);
        end
     
    % UINT格式直接将有符号缓冲转换为无符号缓冲
    else
        uint64_buffer = uint64(int64_buffer);
        
    end
    
    % 将数值掩码左移bit_length位,筛取数据
    mask_data = bitcmp(bitshift(bitcmp(uint64(0)), ...
        TRDP_config_structure.bit_length(index1)));
    uint64_buffer = bitand(uint64_buffer, mask_data, 'uint64');
    
    % 将缓冲数据最低位左移到起始位
    uint64_buffer = bitshift(uint64_buffer, ...
        TRDP_config_structure.start_bit(index1));
   
    % 将数值掩码左移到起始位,取反得到清除器掩码,可将变量所占位清空
    mask_cleaner = bitcmp(bitshift(mask_data, ...
        TRDP_config_structure.start_bit(index1)));
    
    % 检查起始字节是否合法
    if TRDP_data_length <= TRDP_config_structure.start_byte(index1)
        return;
    end
    
    % 拆分打包临时缓存、清除器临时缓存
    for index3 = 1 : 8
        buffer(index3) = uint8(bitshift(bitand(uint64_buffer, ...
            bitshift(uint64(0xFF), (index3 - 1) * 8)), -(index3 - 1) * 8));
        cleaner(index3) = uint8(bitshift(bitand(mask_cleaner, ...
            bitshift(uint64(0xFF), (index3 - 1) * 8)), -(index3 - 1) * 8));
    end
        
    % PC是小端，编码Motorola格式信号需要将原始字节、清除器掩码序列倒置
    if 1 == TRDP_config_structure.byte_order(index1)
        
        % 当起始字节小于7时，不能凑齐8个字节赋值，修改遍历结束索引
        if 7 > TRDP_config_structure.start_byte(index1)
            end_index = TRDP_config_structure.start_byte(index1) + 1;
        else
            end_index = 8;
        end
        
        % 遍历信号对应的字节域修改数据
        for index2 = 1 : end_index
            
            % 防止数值访问越界，起始字节索引需要从0序转换为1序，则对其加1，
            % index2为1时需要提取起始字节，则对其减1
            output_data(TRDP_config_structure.start_byte(index1) + 1 - (index2 - 1)) = ...
                bitand(output_data(TRDP_config_structure.start_byte(index1) + 1 - (...
                index2 - 1)), cleaner(index2));
            output_data(TRDP_config_structure.start_byte(index1) + 1 - (index2 - 1)) = ...
                bitor(output_data(TRDP_config_structure.start_byte(index1) + 1 - (...
                index2 - 1)), buffer(index2));
            
        end
        
    % PC是小端，编码Intel格式信号直接按原始字节序列顺序排布
    else
        
        % 当起始字节大于（总长度-7）时，不能凑齐8个字节赋值，修改遍历结束索引
        if (TRDP_data_length - 7) < TRDP_config_structure.start_byte(index1)
            end_index = TRDP_data_length - TRDP_config_structure.start_byte(index1);
        else
            end_index = 8;
        end
        
        % 遍历信号对应的字节域修改数据
        for index2 = 1 : end_index
            
            % 防止数值访问越界，起始字节索引需要从0序转换为1序，则对其加1，
            % index2为1时需要提取起始字节，则对其减1
            output_data(TRDP_config_structure.start_byte(index1) + 1 + (index2 - 1)) = ...
                bitand(output_data(TRDP_config_structure.start_byte(index1) + 1 + (...
                index2 - 1)), cleaner(index2));
            output_data(TRDP_config_structure.start_byte(index1) + 1 + (index2 - 1)) = ...
                bitor(output_data(TRDP_config_structure.start_byte(index1) + 1 + (...
                index2 - 1)), buffer(index2));

        end
    end

end

end
