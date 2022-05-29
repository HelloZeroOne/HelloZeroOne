% 打印TRDP信号默认值结构体定义信息
function [] = TRDP_signal_default_value_struct_definition_print(obj, TRDP_process_data_list)
%   1.输入参数：
%       (1)obj                       SLDDMANAGER类的一个实例
%       (2)TRDP_process_data_list    TRDP过程数据清单，TRDPPROCESSDATA类
%   2.输出参数：无

% 统计TRDP过程数据清单条目数量
TRDP_process_data_number = size(TRDP_process_data_list, 1);

% 遍历TRDP过程数据清单，根据数据字典固定格式打印TRDP信号默认值结构体定义信息
for index1 = 1 : TRDP_process_data_number
    
    % 合成区分牵引端的TRDP信号默认值结构体名称，剔除掉MC1或者MC2的后缀
    splited_name = regexp(TRDP_process_data_list(index1, 1).name, '_', 'split');
    bus_name = sprintf('TRDP_SIGNALS_MC%d_%s', ...
        obj.TRDP_manager.carriage_index, strjoin(setdiff(...
        splited_name(2 : end), {'MC1', 'MC2'}), '_'));
    
    % 根据数据字典固定格式打印信息
    % 结构体专属头部声明
    fprintf(obj.data_import_file_index, '%s = struct;\n', bus_name);
    
    % 依次打印每一对域、值
    for index2 = 1 : length(TRDP_process_data_list(index1, 1).variable_list)
        
        % 查找原始清单中是否有重名项
        duplicate_name_index = find(ismember([TRDP_process_data_list(index1, ...
            1).variable_list.name], TRDP_process_data_list(index1, ...
            1).variable_list(index2, 1).name));
        
        % 如果有重名项则对后面的信号名补充后缀
        if 1 < length(duplicate_name_index) && duplicate_name_index(1) < index2
            addition_index = find(~(duplicate_name_index - index2));
            fprintf(obj.data_import_file_index, '%s.%s_%d = [', bus_name, ...
                TRDP_process_data_list(index1, 1).variable_list(index2, 1).name, ...
                addition_index);
        else
            fprintf(obj.data_import_file_index, '%s.%s = [', bus_name, ...
                TRDP_process_data_list(index1, 1).variable_list(index2, 1).name);
        end
        
        fprintf(obj.data_import_file_index, '%s; ', ...
            TRDP_process_data_list(index1, 1).variable_list(index2, 1).min);
        fprintf(obj.data_import_file_index, '];\n');
        
    end
    
    % 换行分隔
    fprintf(obj.data_import_file_index, '\n');
    
end

end
