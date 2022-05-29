% 创建自定义取模模型的正向功能测试用例EXCEL文件
function [] = Custom_mod_testcase1_create(test_case_EXCEL_file_path)
%   1.输入参数：
%       (1)test_case_EXCEL_file_path    测试用例EXCEL文件绝对路径，字符串
%   2.输出参数：无

%% 初始化
% 新建模型测试用例对象
model_test_case_obj = ModelTestCase(test_case_EXCEL_file_path);

% 测试结果的绝对误差阈值
absolute_tolerance = 1e-6;

% 时间轴
input_time_axis = transpose(0 : 0.05 : 2);
output_time_axis = input_time_axis;

% 数值范围阈值，主要用于角度取模，假设正、反各转10圈
min_value = -3600;
max_value = 3600;

% 输入信号名称集合
input_signal_names = {'dividend', 'compensation1', 'divisor', 'compensation2'};

% 输出信号名称集合
output_signal_names = {'remainder'};

% 被测模型名称
under_test_model_name = "Custom_mod_Harness_Inport_Outport";

%% 构建输入信号序列
% 随机构建输入信号数值
random_input_value = min_value + (max_value - min_value) * rand(...
    length(input_time_axis), length(input_signal_names));
input_signal_value_array = [input_time_axis, random_input_value];
model_test_case_obj.input_signal_value = array2table(input_signal_value_array, ...
    'VariableNames', ['input_time_axis', input_signal_names]);

% 设置几个被除数为0以验证模型的切换逻辑是否正常
model_test_case_obj.input_signal_value.('divisor')([1, 3, 7], 1) = 0;

% 设置几个被除数加补偿值1是除数的整数倍以验证模型的小数值切换逻辑是否正常
model_test_case_obj.input_signal_value.('divisor')(15, 1) = (...
    model_test_case_obj.input_signal_value.('dividend')(15, 1) + ...
    model_test_case_obj.input_signal_value.('compensation1')(15, 1)) /  2;
model_test_case_obj.input_signal_value.('divisor')(19, 1) = (...
    model_test_case_obj.input_signal_value.('dividend')(19, 1) + ...
    model_test_case_obj.input_signal_value.('compensation1')(19, 1)) /  5;
model_test_case_obj.input_signal_value.('divisor')(23, 1) = (...
    model_test_case_obj.input_signal_value.('dividend')(23, 1) + ...
    model_test_case_obj.input_signal_value.('compensation1')(23, 1)) /  7;

% 设定输入信号数据类型
input_signal_type_array = repmat("double", 1, length(input_signal_names));
model_test_case_obj.input_signal_type = array2table(input_signal_type_array, ...
    'VariableNames', input_signal_names);

%% 构建输出信号序列
% 根据输入信号按公式计算输出信号
dividend = model_test_case_obj.input_signal_value.('dividend');
compensation1 = model_test_case_obj.input_signal_value.('compensation1');
divisor = model_test_case_obj.input_signal_value.('divisor');
compensation2 = model_test_case_obj.input_signal_value.('compensation2');
remainder = mod(dividend + compensation1, divisor) + compensation2;
output_signal_value_array = [output_time_axis, remainder];
model_test_case_obj.output_signal_value = array2table(output_signal_value_array, ...
    'VariableNames', ['output_time_axis', output_signal_names]);

% 设定输出信号数据类型
output_signal_type_array = repmat("double", 1, length(output_signal_names));
model_test_case_obj.output_signal_type = array2table(output_signal_type_array, ...
    'VariableNames', output_signal_names);

% 设定输出信号绝对误差阈值
output_signal_absolute_tolerance_array = repmat(absolute_tolerance, 1, ...
    length(output_signal_names));
model_test_case_obj.output_signal_absolute_tolerance = array2table(...
    output_signal_absolute_tolerance_array, 'VariableNames', output_signal_names);

% 设定输出信号模块路径
output_signal_block_path_array = strcat(under_test_model_name, "/", ...
    string(output_signal_names));
model_test_case_obj.output_signal_block_path = array2table(...
    output_signal_block_path_array, 'VariableNames', output_signal_names);

%% 生成EXCEL版本的测试用例
model_test_case_obj.Test_case_EXCEL_generate;

end
