% 运行指定测试用例
function [obj] = Specific_test_case_run(obj)
%   1.输入参数：
%       (1)obj    TESTMANAGER类的一个实例
%   2.输出参数：
%       (1)obj    TESTMANAGER类的一个实例

%% 初始化
% 测试报告文件夹名称
report_folder_name = 'test_report/';

% 报告文件后缀
report_suffix = '_Report.pdf';

% 测试创建者
test_author = 'IDS_Group';

% 获取测试管理器中既有测试用例数量
test_case_number = length(obj.test_case_obj);

%% 提示信息选择需要运行的测试用例
if 0 < test_case_number
    fprintf('$可选测试用例如下：\n');
    fprintf('%s - %s\n', [string(1 : test_case_number); string({...
        obj.test_case_obj.Name})]);
    test_case_index_string = input(['->请选择需要运行的测试用例索引（' ...
        '多选请用下划线_连接） [回车默认1]: '], 's');
    if isempty(test_case_index_string)
        test_case_index_string = "1";
    end
else
    warning('测试配置文件中没有测试用例！');
    return;
end

%% 解析选择结果
% 将待运行测试用例索引字符串分割为索引集
test_case_index_array = str2double(regexp(test_case_index_string, '_', 'split'));

% 从待运行的索引中筛选小于等于既有测试用例数量的
run_test_case_index = test_case_index_array(test_case_number >= test_case_index_array);

%% 依次运行选择的测试用例并生成报告
for index = 1 : length(run_test_case_index)
    
    % 运行测试用例
    test_result_obj = obj.test_case_obj(run_test_case_index(index)).run;
    
    % 合成测试报告文件路径
    report_file_path = fullfile(pwd, [report_folder_name, obj.test_case_obj(...
        run_test_case_index(index)).getProperty('Model'), '_', ...
        obj.test_case_obj(run_test_case_index(index)).Name, report_suffix]);
    
    % 获取测试标题
    test_title = obj.test_case_obj(run_test_case_index(index)).Name;
    
    % 解析通过的测试用例数量
    passed_test_case_number = test_result_obj.NumPassed;
    
    % 提示测试结果
    if 0 < passed_test_case_number
        fprintf('***测试用例【%s】运行通过***\n', test_title);
    else
        fprintf('***测试用例【%s】运行失败***\n', test_title);
    end

    % 删除指定路径下可能存在的同名报告文件
    Existing_file_delete(fullfile(pwd, report_folder_name), [obj.test_case_obj(...
        run_test_case_index(index)).getProperty('Model'), '_', ...
        obj.test_case_obj(run_test_case_index(index)).Name, report_suffix]);
    
    % 拆分报告文件名
    [~, coverage_result_folder_name, ~] = fileparts([obj.test_case_obj(...
        run_test_case_index(index)).getProperty('Model'), '_', ...
        obj.test_case_obj(run_test_case_index(index)).Name, report_suffix]);
    
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
    
end

%% 关闭测试配置文件
obj.test_config_file_obj.close;

end
