% 运行全部测试用例
function [obj] = All_test_case_run(obj)
%   1.输入参数：
%       (1)obj    TESTMANAGER类的一个实例
%   2.输出参数：
%       (1)obj    TESTMANAGER类的一个实例

%% 初始化
% 测试报告文件夹名称
report_folder_name = 'test_report/';

% 报告文件后缀
report_suffix = '_Report.pdf';

% 测试报告文件路径
report_file_path = fullfile(pwd, [report_folder_name, ...
    obj.test_config_file_obj.Name, report_suffix]);

% 测试创建者
test_author = 'IDS_Group';

% 测试标题
test_title = obj.test_config_file_obj.Name;

%% 运行SimulinkTestManager中所有测试用例
test_result_obj = sltest.testmanager.run;

%% 解析测试结果相关属性
% 测试用例总数
total_test_case_number = test_result_obj.NumTotal;

% 通过的测试用例数量
passed_test_case_number = test_result_obj.NumPassed;

% 失败的测试用例数量
failed_test_case_number = test_result_obj.NumFailed;

%% 提示测试结果信息
% 固定提示通过的测试用例数量信息
fprintf('***通过的测试用例【%d/%d】***\n', passed_test_case_number, ...
    total_test_case_number);

% 在失败的测试用例数量非0时提示失败的信息
if 0 < failed_test_case_number
    fprintf('***失败的测试用例【%d/%d】***\n', failed_test_case_number, ...
        total_test_case_number);
end

%% 生成测试报告
% 删除指定路径下可能存在的同名报告文件
Existing_file_delete(fullfile(pwd, report_folder_name), [...
    obj.test_config_file_obj.Name, report_suffix]);

% 拆分报告文件名
[~, coverage_result_folder_name, ~] = fileparts([...
    obj.test_config_file_obj.Name, report_suffix]);

% 删除指定路径下可能存在的同名测试覆盖度结果文件夹
Existing_file_delete(fullfile(pwd, report_folder_name), ...
    coverage_result_folder_name);

% 生成报告
sltest.testmanager.report(test_result_obj, report_file_path, ...
	'Author', test_author, 'Title', test_title, 'IncludeMLVersion', true, ...
	'IncludeTestResults', 0, 'IncludeSimulationSignalPlots', true, ...
    'IncludeComparisonSignalPlots', true, 'IncludeSimulationMetadata', true, ...
    'LaunchReport', false, 'IncludeCoverageResult', true);

% 提示生成的报告所在路径
fprintf('***生成的报告位于【%s】***\n', report_file_path);

% 删除测试结果
test_result_obj.remove;

% 关闭测试配置文件
obj.test_config_file_obj.close;

end
