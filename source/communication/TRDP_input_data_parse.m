% TRDP输入数据解析
function output_signals = TRDP_input_data_parse(raw_data, ...
    TRDP_config_structure, TRDP_signals_structure)
%   1.输入参数：
%       (1)raw_data                  原始数据
%       (2)TRDP_config_structure     TRDP配置结构体
%       (3)TRDP_signals_structure    TRDP信号结构体
%   2.输出参数：
%       (1)output_signals            输出信号结构体

%% 初始化
TRDP_data_length = length(raw_data);                         % TRDP原始数据长度
signal_number    = length(TRDP_config_structure.byte_order); % 信号数量
buffer           = uint8(zeros(8, 1));                       % 解析临时缓存
namelist         = fieldnames(TRDP_signals_structure);       % 信号结构体域名清单
output_signals   = TRDP_signals_structure;                   % 输出信号结构体初始赋值保持和输入相同

%% 根据TRDP解析配置结构体按顺序依次解析信号数值
for index1 = 1 : signal_number
    
    % PC是小端，解析Motorola格式信号需要将原始字节序列倒置
    if 1 == TRDP_config_structure.byte_order(index1)
        
        % 当起始字节小于7时，不能凑齐8个字节赋值，修改遍历结束索引
        if 7 > TRDP_config_structure.start_byte(index1)
            end_index = TRDP_config_structure.start_byte(index1) + 1;
        else
            end_index = 8;
        end
        
        % 遍历信号对应的字节域读取数据
        for index2 = 1 : end_index
            
            % 防止数值访问越界，起始字节索引需要从0序转换为1序，则对其加1，
            % index2为1时需要提取起始字节，则对其减1
            if 0 < TRDP_config_structure.start_byte(index1) + 1 - (index2 - 1)
                buffer(index2) = raw_data(...
                    TRDP_config_structure.start_byte(index1) + 1 - (index2 - 1));
            else
                buffer(index2) = uint8(0);
            end
            
        end
        
    % PC是小端，解析Intel格式信号直接按顺序截取原始字节序列
    else
        
        % 当起始字节大于（总长度-7）时，不能凑齐8个字节赋值，修改遍历结束索引
        if (TRDP_data_length - 7) < TRDP_config_structure.start_byte(index1)
            end_index = TRDP_data_length - TRDP_config_structure.start_byte(index1);
        else
            end_index = 8;
        end
        
        % 遍历信号对应的字节域读取数据
        for index2 = 1 : end_index
            
            % 防止数值访问越界，起始字节索引需要从0序转换为1序，则对其加1，
            % index2为1时需要提取起始字节，则对其减1
            if TRDP_data_length >= ...
                    TRDP_config_structure.start_byte(index1) + 1 + (index2 - 1)
                buffer(index2) = raw_data(...
                    TRDP_config_structure.start_byte(index1) + 1 + (index2 - 1));
            else
                buffer(index2) = uint8(0);
            end
            
        end
        
    end
    
    % 将缓冲拼接为uint64
    uint64_buffer = uint64(0);
    for index3 = 1 : 8
        uint64_buffer = uint64_buffer + ...
            bitshift(uint64(buffer(index3)), 8 * (index3 - 1));
    end
    
    % 将缓冲数据最低位右移到零位
    uint64_buffer = bitshift(uint64_buffer, ...
        -double(TRDP_config_structure.start_bit(index1)));
    
    % 将数值掩码左移bit_length位,筛取数据
    mask_data = bitcmp(bitshift(bitcmp(uint64(0)), ...
        TRDP_config_structure.bit_length(index1)));
    uint64_buffer = bitand(uint64_buffer, mask_data, 'uint64');

    % INT格式需要解析符号位再换算数值
    if 1 == TRDP_config_structure.type(index1)
        
        % 构建符号掩码
        mask_symbol = bitshift(uint64(1), ...
            TRDP_config_structure.bit_length(index1) - 1);
        
        % 符号位非0时将无符号缓冲通过补码转换为有符号缓冲
        if 0 ~= bitand(uint64_buffer, mask_symbol, 'uint64')
            int64_buffer = int64(double(uint64_buffer) - double(bitshift(uint64(1), ...
                TRDP_config_structure.bit_length(index1))));
        else
            int64_buffer = int64(uint64_buffer);
        end
        
        % 公式换算信号数值
        output_signals.(namelist{index1}) = double(int64_buffer) * ...
            TRDP_config_structure.factor(index1) + TRDP_config_structure.offset(index1);
        
    % UINT格式直接公式换算数值
    else
        output_signals.(namelist{index1}) = double(uint64_buffer) * ...
            TRDP_config_structure.factor(index1) + TRDP_config_structure.offset(index1);
    end
    
    % 对输出信号进行最小、最大数值限制
    output_signals.(namelist{index1}) = max(TRDP_config_structure.min(index1), ...
        min(TRDP_config_structure.max(index1), output_signals.(namelist{index1})));

end

end

