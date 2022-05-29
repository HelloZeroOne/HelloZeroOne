% 创建测试用例
function [obj] = Test_case_create(obj, test_suite_index, test_case_name, ...
    test_tag, test_description, model_name, harness_owner, harness_name, ...
    test_case_EXCEL_file_path)
%   1.输入参数：
%       (1)obj                          TESTMANAGER类的一个实例
%       (2)test_suite_index             指定测试套件在测试配置文件中的索引，正整数
%       (3)test_case_name               希望创建的测试用例名称，字符数组或字符串
%       (4)test_tag                     希望创建的测试用例标签，字符数组或字符串
%       (5)test_description             希望创建的测试用例描述，字符数组或字符串
%       (6)model_name                   待测模型名称，字符数组或字符串
%       (7)harness_owner                测试框架所有者名称，字符数组或字符串
%       (8)harness_name                 测试框架名称，字符数组或字符串
%       (9)test_case_EXCEL_file_path    保存了测试相关设置的EXCEL文件路径，字符数组或字符串
%   2.输出参数：
%       (1)obj                          TESTMANAGER类的一个实例

%% 合法性检查
% 如果既有测试用例是否有与新建测试用例名称重名的，警告并返回
if ~isempty(obj.test_case_obj)
    if matches(test_case_name, {obj.test_case_obj.Name})
        warning('新建的测试用例与既有用例重名，请修改后重试！');
        return;
    end
end

%% 新建测试用例
% 获取测试管理器中既有测试用例数量
test_case_number = length(obj.test_case_obj);

% 在测试用例数量加1对应的列号处新建测试用例
obj.test_case_obj(test_case_number + 1) = obj.test_suite_obj(...
    test_suite_index).createTestCase('baseline', test_case_name);

%% 将测试用例关联到待测模型、测试框架
obj.test_case_obj(test_case_number + 1).setProperty('Model', model_name, ...
    'HarnessName', harness_name, 'HarnessOwner', harness_owner);

%% 从指定EXCEL文件创建测试用例的输入信号、基线判据相关配置参数
obj.test_case_obj(test_case_number + 1).setProperty(...
    'istestdatareferenced', true);
obj.test_case_obj(test_case_number + 1).setProperty(...
    'TestDataPath', test_case_EXCEL_file_path);

%% 设置测试用例标签、描述
obj.test_case_obj(test_case_number + 1).('Tags') =  test_tag;
obj.test_case_obj(test_case_number + 1).('Description') =  test_description;

%% 保存测试配置文件
obj.test_config_file_obj.saveToFile;

%% 提示新建测试用例成功
fprintf('***新建测试用例【%s】成功***\n', test_case_name);

end
