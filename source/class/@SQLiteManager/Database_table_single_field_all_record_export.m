% 导出数据库表中的单一字段下的全部记录
function output_table = Database_table_single_field_all_record_export(obj, ...
    table_name, field_name)
%   1.输入参数：
%       (1)obj             SQLITEMANAGER类的一个实例
%       (2)table_name      指定表名称，英文，字符数组或字符串
%       (3)field_name      指定字段名称，英文，字符数组或字符串
%   2.输出参数：
%       (1)output_table    导出的表格

%% 拼接查询指令
table_query = append('select ', char(field_name), ' from ', char(table_name));

%% 从数据库连接中查询表内容
table_content = fetch(obj.database_connection, table_query);

%% 当查询结果非空时，将cell类型的结果转换为table类型，指定表格列名，否则构建空白表格
if ~isempty(table_content)
    output_table = cell2table(table_content, 'VariableNames', cellstr(field_name));
else
    output_table = table('Size', [0, 1], 'VariableTypes', ...
        repmat("cell", 1, 1), 'VariableNames', char(field_name));
end

end
