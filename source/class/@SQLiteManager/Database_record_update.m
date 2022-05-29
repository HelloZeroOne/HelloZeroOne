% 更新数据库中的记录内容
function [] = Database_record_update(obj, table_name, field_name, ...
    primary_ID, new_content)
%   1.输入参数：
%       (1)obj            SQLITEMANAGER类的一个实例
%       (2)table_name     指定表名称，英文，字符数组或字符串
%       (3)field_name     指定字段名称，英文，字符数组或字符串
%       (4)primary_ID     指定主索引，正整数
%       (5)new_content    待更新的内容，字符数组或字符串
%   2.输出参数：无

%% 拼接更新指令
table_update = ['UPDATE ', char(table_name), ' SET ', char(field_name), ...
    ' = ''', char(new_content), ''' WHERE ID = ', char(string(primary_ID))];

%% 对数据库连接执行更新指令
exec(obj.database_connection, table_update);

end
