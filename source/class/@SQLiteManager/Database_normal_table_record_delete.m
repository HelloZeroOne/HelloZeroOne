% 删除数据库中普通表的记录内容
function [] = Database_normal_table_record_delete(obj, table_name, primary_ID)
%   1.输入参数：
%       (1)obj            SQLITEMANAGER类的一个实例
%       (2)table_name     指定表名称，英文，字符数组或字符串
%       (3)primary_ID     指定主索引，正整数
%   2.输出参数：无

%% 拼接删除指令
table_delete = ['DELETE FROM ', char(table_name), ' WHERE ID = ', ...
    char(string(primary_ID))];

%% 对数据库连接执行删除指令
exec(obj.database_connection, table_delete);

end
