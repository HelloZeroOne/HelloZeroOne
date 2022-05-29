% 导出数据库指定表内容
function output_table = Database_table_export(obj, table_name)
%   1.输入参数：
%       (1)obj             SQLITEMANAGER类的一个实例
%       (2)table_name      指定表的名称，字符数组或字符串
%   2.输出参数：
%       (1)output_table    导出的表格

%% 拼接查询指令
% 表内容查询
table_query = ['SELECT * FROM ', char(table_name)];

% 建表SQL语句查询
creation_SQL_query = ['SELECT sql FROM sqlite_master WHERE tbl_name = ''', ...
    char(table_name), ''' AND type = "table"'];

%% 从数据库连接中查询表内容
table_content = fetch(obj.database_connection, table_query);

%% 从数据库连接中查询建表SQL语句结果
creation_SQL_query_result = fetch(obj.database_connection, creation_SQL_query);

%% 正则匹配空格括号开头或者逗号空格开头的字母得到该表的所有字段名称
% 如果建表语句中含有外键定义，仅保留前半部分的字段声明
capture_start_index = regexp(creation_SQL_query_result{1}, 'CONSTRAINT');
if ~isempty(capture_start_index) && ~isequal(1, capture_start_index(1))
    field_declaration = creation_SQL_query_result{1}(1 : ...
        capture_start_index(1) - 1);
else
    field_declaration = creation_SQL_query_result{1};
end

% 正则匹配解析字段名
column_name = regexp(field_declaration, '((?<=\s\()|(?<=,\s))\w+', 'match');

%% 当查询结果非空时，将cell类型的结果转换为table类型，指定表格列名，否则构建空白表格
if ~isempty(table_content)
    output_table = cell2table(table_content, 'VariableNames', ...
        column_name(1 : size(table_content, 2)));
else
    output_table = table('Size', [0, size(column_name, 2)], ...
        'VariableTypes', repmat("cell", 1, size(column_name, 2)), ...
        'VariableNames', column_name);
end

end
