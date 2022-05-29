classdef TestManager
    %测试管理
    %   维护测试用例，自动执行测试
    
    %公开属性
    properties
        
        % 测试配置文件对象
        test_config_file_obj(1, 1)
        
        % 测试套件对象
        test_suite_obj(:, 1)
        
        % 测试用例对象
        test_case_obj(:, 1)
        
    end
    
    %成员函数
    methods
        
        %构造TESTMANAGER类的一个实例
        %   记录测试配置文件对象以维护其内容
        function obj = TestManager(test_config_file_path)
            
            % 如果输入了大于等于1个的参数，将其赋予测试配置文件对象属性
            if 1 <= nargin
                
                % 测试配置文件对象初始化
                obj.test_config_file_obj = sltest.testmanager.TestFile(...
                    test_config_file_path);
                
                % 新建的测试配置文件中包含一个自动创建的New Test Suite 1套件，删除掉
                surplus_test_suite_obj = obj.test_config_file_obj.getTestSuiteByName(...
                    'New Test Suite 1');
                if ~isempty(surplus_test_suite_obj)
                    remove(surplus_test_suite_obj);
                    obj.test_config_file_obj.saveToFile;
                end
                
                % 获取测试配置文件中的测试套件对象
                obj.test_suite_obj = obj.test_config_file_obj.getTestSuites;
                
                % 获取测试配置文件中的测试用例对象以转换数据类型
                obj.test_case_obj = obj.test_config_file_obj.getTestCases;
                
                % 遍历测试套件对象以更新测试用例
                for index = 1 : length(obj.test_suite_obj)
                    temp_test_case_obj = obj.test_suite_obj.getTestCases;
                    if 0 < length(temp_test_case_obj)
                        obj.test_case_obj(end + 1 : end + length(...
                            temp_test_case_obj)) = temp_test_case_obj;
                    end
                end
                
                % 检查测试配置文件的覆盖度设置状态，未开启则进行修改
                coverage_settings = obj.test_config_file_obj.getCoverageSettings;
                if false == coverage_settings.RecordCoverage
                    coverage_settings.RecordCoverage = true;
                    coverage_settings.MdlRefCoverage = true;
                    coverage_settings.MetricSettings = "dcm";
                    obj.test_config_file_obj.saveToFile;
                end
                
            end
            
        end
        
        %创建测试用例
        %   根据指定的测试套件索引、用例名称、标签、描述、模型名称、测试框架名称、
        %   测试框架所有者名称、EXCEL配置文件创建对应的测试用例
        [obj] = Test_case_create(obj, test_suite_index, test_case_name, ...
            test_tag, test_description, model_name, harness_owner, harness_name, ...
            test_case_EXCEL_file_path)
        
        %删除测试用例
        %   选择测试配置文件中的测试用例索引，删除测试用例，可多选删除
        [obj] = Test_case_delete(obj)
        
        %运行全部测试用例
        %   运行测试管理器中全部的测试用例，统计测试结果，生成测试报告
        [obj] = All_test_case_run(obj)
        
        %运行指定测试用例
        %   选择运行测试管理器中指定的测试用例，逐个统计测试结果，逐个生成测试报告，可多选
        [obj] = Specific_test_case_run(obj)
        
    end
    
end
