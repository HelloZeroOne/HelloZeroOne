% 将数据记录文件里的信号重命名为工程内脚本所用信号名称
function [processed_signal_names] = Record_file_signal_name2script_file_signal_name(...
    obj, original_signal_names)
%   1.输入参数：
%       (1)obj                       DATAANALYZER类的一个实例
%       (2)original_signal_names     数据记录文件里的原始信号名称，cell字符数组
%   2.输出参数：
%       (1)processed_signal_names    重命名处理后的信号名称，cell字符数组

%% 直接传递原始信号名称给处理后的信号名称
processed_signal_names = original_signal_names;

%% 筛选原始信号名称中与信号重命名映射表数据源文件信号名称列同名项，替换为工程内脚本所用信号名称
[duplicate_status, duplicate_index] = ismember(original_signal_names, obj.signal_rename_mapping_table.(...
    '数据源文件信号名称'));
if any(duplicate_status)
    processed_signal_names(duplicate_status) = obj.signal_rename_mapping_table.(...
        '工程内脚本所用信号名称')(duplicate_index(duplicate_status));
end

end
