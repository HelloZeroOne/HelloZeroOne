% 为数据库中指定表插入记录
function [] = Database_record_insert(obj, table_name, source_table)
%   1.输入参数：
%       (1)obj             SQLITEMANAGER类的一个实例
%       (2)table_name      指定表名称，英文，字符数组或字符串
%       (3)source_table    数据源表格
%   2.输出参数：无

%% 去除数据源表格中可能存在的ID列（因为插入新记录时指定ID极易出错，应该交给机器自动生成）
original_column_name = source_table.Properties.VariableNames;
source_table = source_table(:, original_column_name(...
    ~matches(original_column_name, 'ID')));

%% 如果数据源表格非空，直接调用接口函数插入新的记录，否则报错
if ~isempty(source_table)
    insert(obj.database_connection, table_name, ...
        source_table.Properties.VariableNames, source_table);
else
    error('操作失败，数据源表格为空，无记录可插入数据库！');
end

end
