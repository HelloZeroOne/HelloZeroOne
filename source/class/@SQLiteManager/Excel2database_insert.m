% 从指定Excel导入内容作为新记录插入SQLite数据库指定表中
function [] = Excel2database_insert(obj)
%   1.输入参数：
%       (1)obj    SQLITEMANAGER类的一个实例
%   2.输出参数：无

%% 初始化
% 保存了APC配置数据库属性信息的模板表格文件
template_table_file = 'Database_properties_APC_config.xlsx';

% 数据库表名称清单
database_table_name_list = readtable(template_table_file, ...
    'PreserveVariableNames', true, 'Sheet', '表名称清单');

%% 导入Excel文件内容
% 选择保存待新插入记录的Excel文件
[selected_file_name, selected_file_path] = uigetfile({...
    '*.xlsx', 'Excel files (*.xlsx)'}, '选择保存待新插入记录的Excel文件');
if isequal(0, selected_file_name)
    warning('未选择Excel文件！');
    return;
end

% 导入Excel文件中的表格
new_record_table = readtable(fullfile(selected_file_path, selected_file_name), ...
    'PreserveVariableNames', true);

%% 获取指定数据库表名称
% 去除所选文件的扩展名得到中文名
[~, chinese_name, ~] = fileparts(selected_file_name);

% 根据文件中文名匹配数据库表英文名
table_english_name = database_table_name_list.('英文名'){...
    matches(database_table_name_list.('中文名'), chinese_name)};
if isempty(table_english_name)
    warning('未找到与所选文件的名称匹配的数据库表，请改正文件名后重试！');
    return;
end

%% 修改导入Excel文件表格的表头为数据库可识别的形式
% 从APC配置数据库属性信息的模板表格文件中读取所选文件对应数据库表的配置信息
database_table_info = readtable(template_table_file, ...
    'PreserveVariableNames', true, 'Sheet', chinese_name);

% 修改新记录表格的表头为对应的英文名
[~, matched_index] = ismember(new_record_table.Properties.VariableNames, ...
    database_table_info.('中文名'));
new_record_table.Properties.VariableNames = database_table_info.(...
    '英文名')(matched_index);

%% 向数据库指定表中插入新的记录
obj.Database_record_insert(table_english_name, new_record_table);

% 提示操作成功
[~, database_name, ~] = fileparts(obj.database_file_path);
fprintf('***向数据库【%s】中的表【%s】插入新记录成功***\n', ...
    database_name, table_english_name);

end
