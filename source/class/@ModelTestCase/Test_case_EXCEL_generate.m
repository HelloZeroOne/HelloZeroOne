% 生成EXCEL版本的测试用例
function [] = Test_case_EXCEL_generate(obj)
%   1.输入参数：
%       (1)obj    MODELTESTCASE类的一个实例
%   2.输出参数：无

%% 初始化
% EXCEL文件Sheet页名称
sheet_name = 'TestScenario';

%% 获取信号名称清单
input_signal_names = obj.input_signal_type.Properties.VariableNames;
output_signal_names = obj.output_signal_type.Properties.VariableNames;

%% 将除信号数值外的所有变量的数据类型统一转换为string，方便拼接
string_input_signal_type = convertvars(obj.input_signal_type, ...
    input_signal_names, 'string');
string_output_signal_type = convertvars(obj.output_signal_type, ...
    output_signal_names, 'string');
string_output_signal_absolute_tolerance = convertvars(...
    obj.output_signal_absolute_tolerance, output_signal_names, 'string');
string_output_signal_block_path = convertvars(obj.output_signal_block_path, ...
    output_signal_names, 'string');

%% 测试用例表格预处理
% 横向合并输入、输出信号表格，暂存，以便后续写入文件
test_case_signal_value_table = [obj.input_signal_value, obj.output_signal_value];

% 获取合并后的表头
test_case_table_column_name = test_case_signal_value_table.Properties.VariableNames;

% 新建元素类型为string的测试用例空表格
test_case_table = table('Size', [0, length(test_case_table_column_name)], ...
    'VariableTypes', repmat("string", 1, length(test_case_table_column_name)), ...
    'VariableNames', test_case_table_column_name);

%% 为测试用例表格附加绝对误差行
% 在原表格末尾扩充一行空数据
test_case_table{end + 1, :} = strings(1, width(test_case_table));

% 拼接指定前缀AbsTol
string_output_signal_absolute_tolerance{:, :} = strcat("AbsTol:", ...
    string_output_signal_absolute_tolerance{:, :});

% 为输出信号列填入绝对误差行
test_case_table(end, output_signal_names) = string_output_signal_absolute_tolerance;

%% 为测试用例表格附加数据类型行
% 在原表格末尾扩充一行空数据
test_case_table{end + 1, :} = strings(1, width(test_case_table));

% 拼接指定前缀Type
string_input_signal_type{:, :} = strcat("Type:", string_input_signal_type{:, :});
string_output_signal_type{:, :} = strcat("Type:", string_output_signal_type{:, :});

% 为输入、输出信号列填入数据类型行
test_case_table(end, input_signal_names) = string_input_signal_type;
test_case_table(end, output_signal_names) = string_output_signal_type;

%% 为测试用例表格附加模块路径行
% 在原表格末尾扩充一行空数据
test_case_table{end + 1, :} = strings(1, width(test_case_table));

% 拼接指定前缀BlockPath
string_output_signal_block_path{:, :} = strcat("BlockPath:", ...
    string_output_signal_block_path{:, :});

% 为输出信号列填入模块路径行
test_case_table(end, output_signal_names) = string_output_signal_block_path;

%% 为测试用例表格附加端口索引行
% 在原表格末尾扩充一行空数据
test_case_table{end + 1, :} = strings(1, width(test_case_table));

% 根据输出信号排列顺序构建端口索引字符串
string_port_index = string(1 : length(output_signal_names));

% 拼接指定前缀PortIndex
string_port_index = strcat("PortIndex:", string_port_index);

% 为输出信号列填入端口索引行
test_case_table{end, output_signal_names} = string_port_index;

%% 为测试用例表格附加插值方式行
% 在原表格末尾扩充一行空数据
test_case_table{end + 1, :} = strings(1, width(test_case_table));

% 固定插值方式为保持上一时刻的值（zoh），构建与信号数量对应的字符串数组
string_interpolation_method = repmat("Interp:zoh", 1, length(output_signal_names));

% 为输出信号列填入插值方式行
test_case_table{end, output_signal_names} = string_interpolation_method;

%% 为测试用例表格附加信号传输方向行
% 在原表格末尾扩充一行空数据
test_case_table{end + 1, :} = strings(1, width(test_case_table));

% 为输入、输出信号各自的第一列填入信号传输方向
test_case_table{end, input_signal_names{1}} = "Source:Input";
test_case_table{end, output_signal_names{1}} = "Source:Output";

%% 将测试用例写入EXCEL文件
% 如果目标文件夹下已经有同名文件，则完全覆盖其内容
writetable(test_case_table, obj.test_case_EXCEL_file_path, 'WriteMode', ...
    'replacefile', 'Sheet', sheet_name);

% 在目标EXCEL文件末尾追加写入信号数值表格，不写入表头
writetable(test_case_signal_value_table, obj.test_case_EXCEL_file_path, ...
    'WriteMode', 'append', 'WriteVariableNames', false, 'Sheet', sheet_name);

%% 为测试用例EXCEL文件重写信号名称行，以解决table不支持输入、输出信号重名time的时间轴名称问题
% 构建信号名称行cell，将输入、输出信号附带的时间轴input_time_axis、output_time_axis的名称改为time
new_table_column_names = ['time', input_signal_names, 'time', output_signal_names];

% 写入目标EXCEL文件覆盖首行表头
writecell(new_table_column_names, obj.test_case_EXCEL_file_path, 'Sheet', sheet_name);

end
