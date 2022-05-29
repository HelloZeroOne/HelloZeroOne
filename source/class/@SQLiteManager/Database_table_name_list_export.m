% 导出数据库表名称清单
function table_name_list = Database_table_name_list_export(obj)
%   1.输入参数：
%       (1)obj                SQLITEMANAGER类的一个实例
%   2.输出参数：
%       (1)table_name_list    导出的数据库表名称清单，cell

%% 查询指令初始化
table_name_list_query = 'SELECT * FROM sqlite_master WHERE type = "table"';

%% 从数据库连接中查询所有表的名称清单
query_result = fetch(obj.database_connection, table_name_list_query);

%% 筛选特征信息返回
% 当查询结果为空时，返回空值，否则从查询结果中提取所有表的名称（第2列或第3列）,
% 将一列数据转换为一行数据
if isempty(query_result)
    table_name_list = [];
else
    table_name_list = transpose(query_result(:, 2));
end

end
