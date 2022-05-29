% 删除测试用例
function [obj] = Test_case_delete(obj)
%   1.输入参数：
%       (1)obj    TESTMANAGER类的一个实例
%   2.输出参数：
%       (1)obj    TESTMANAGER类的一个实例

%% 初始化
% 获取测试管理器中既有测试用例数量
test_case_number = length(obj.test_case_obj);

%% 提示信息选择需要删除的测试用例
if 0 < test_case_number
    fprintf('$可选测试用例如下：\n');
    fprintf('%s - %s\n', [string(1 : test_case_number); string({...
        obj.test_case_obj.Name})]);
    test_case_index_string = input(['->请选择需要删除的测试用例索引（' ...
        '多选请用下划线_连接，输入all代表全部删除） [回车默认all]: '], 's');
    if isempty(test_case_index_string)
        test_case_index_string = "all";
    end
else
    warning('测试配置文件中没有测试用例！');
    return;
end

%% 解析选择结果
% 如果输入了all，则删除全部测试用例，否则拆分待删除测试用例索引字符串为索引集合
if matches("all", test_case_index_string)
    delete_test_case_index = 1 : test_case_number;
else
    
    % 将待删除测试用例索引字符串分割为索引集
    test_case_index_array = str2double(regexp(test_case_index_string, ...
        '_', 'split'));
    
    % 从待删除的索引中筛选小于等于既有测试用例数量的
    delete_test_case_index = test_case_index_array(test_case_number >= ...
        test_case_index_array);

end

% 保存删除测试用例名称作为提示信息
delete_test_case_names = string({obj.test_case_obj(delete_test_case_index).Name});

%% 删除指定测试用例
obj.test_case_obj(delete_test_case_index).remove;

% 保存测试配置文件
obj.test_config_file_obj.saveToFile;

%% 更新测试用例对象
% 遍历测试套件对象以更新测试用例
for index = 1 : length(obj.test_suite_obj)
    temp_test_case_obj = obj.test_suite_obj.getTestCases;
    if 0 < length(temp_test_case_obj)
        obj.test_case_obj(end + 1 : end + length(...
            temp_test_case_obj)) = temp_test_case_obj;
    end
end

%% 提示删除测试用例成功
fprintf('***删除测试用例【%s】成功***\n', delete_test_case_names);

end
