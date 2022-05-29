% 为数据库表中的单一字段批量更新记录
function [] = Database_table_single_field_record_duplicated_update(obj)
%   1.输入参数：
%       (1)obj    SQLITEMANAGER类的一个实例
%   2.输出参数：无

%% 初始化
% 保存了APC配置数据库属性信息的模板表格文件
template_table_file = 'Database_properties_APC_config.xlsx';

% 数据库表名称清单
database_table_name_list = readtable(template_table_file, ...
    'PreserveVariableNames', true, 'Sheet', '表名称清单');

%% 指定数据库表
fprintf('$可选数据库表如下：\n');
fprintf('%s - %s\n', [string(1 : height(database_table_name_list)); ...
    string(transpose(database_table_name_list.('中文名')))]);
database_table_index = input('->请选择数据库表索引 [回车默认1]: ');
if isempty(database_table_index) || 1 > database_table_index
    database_table_index = 1;
end

%% 指定字段
% 读取指定数据库表对应的配置表格内容
database_table_config = readtable(template_table_file, ...
    'PreserveVariableNames', true, 'Sheet', ...
    database_table_name_list.('中文名'){database_table_index});

% 选择字段索引
fprintf('$可选字段如下：（仅支持对第2个及之后的字段赋值）\n');
fprintf('%s - %s\n', [string(1 : height(database_table_config)); ...
    string(transpose(database_table_config.('中文名')))]);
database_table_field_index = input('->请选择字段索引 [回车默认2]: ');
if isempty(database_table_field_index) || 2 > database_table_field_index
    database_table_field_index = 2;
end

%% 指定批量赋值的内容
duplicated_content = input('->请设置批量赋值的内容 [回车默认为空]: ', 's');
if isempty(duplicated_content)
    duplicated_content = "";
end

%% 获取指定数据库表中的全部既有主键记录内容
original_primary_ID_table = obj.Database_table_single_field_all_record_export(...
    database_table_name_list.('英文名'){database_table_index}, ...
    database_table_config.('英文名'){1});

%% 针对指定字段批量赋值
for index = 1 : height(original_primary_ID_table)
    obj.Database_record_update(database_table_name_list.('英文名'){...
        database_table_index}, database_table_config.('英文名'){...
        database_table_field_index}, original_primary_ID_table{index, 1}, ...
        duplicated_content);
end

%% 提示操作成功
[~, database_name, ~] = fileparts(obj.database_file_path);
fprintf('***向数据库【%s】中的表【%s】的字段【%s】批量赋值【%s】成功***\n', ...
    database_name, database_table_name_list.('英文名'){database_table_index}, ...
    database_table_config.('英文名'){database_table_field_index}, duplicated_content);

end
