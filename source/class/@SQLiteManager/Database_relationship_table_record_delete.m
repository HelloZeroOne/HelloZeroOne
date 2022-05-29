% 删除数据库中关系表的记录内容
function [] = Database_relationship_table_record_delete(obj, table_name, ...
    primary_ID, tram_type_ID, carriage_ID)
%   1.输入参数：
%       (1)obj             SQLITEMANAGER类的一个实例
%       (2)table_name      指定表名称，英文，字符数组或字符串
%       (3)primary_ID      指定主索引，正整数
%       (4)tram_type_ID    指定车型索引，正整数
%       (5)carriage_ID     指定车厢索引，正整数
%   2.输出参数：无

%% 查询指定数据库关系表中的主索引字段名
% 保存了APC配置数据库属性信息的模板表格文件
template_table_file = 'Database_properties_APC_config.xlsx';

% 数据库表名称清单
database_table_name_list = readtable(template_table_file, ...
    'PreserveVariableNames', true, 'Sheet', '表名称清单');

% 获取指定表英文名对应的中文名
table_chinese_name = database_table_name_list.('中文名'){matches(...
    database_table_name_list.('英文名'), table_name)};

% 获取指定关系表属性
table_properties = readtable(template_table_file, ...
    'PreserveVariableNames', true, 'Sheet', table_chinese_name);

% 获取主索引字段名
primary_ID_name = table_properties.('英文名'){1};

%% 拼接删除指令
table_delete = ['DELETE FROM ', char(table_name), ' WHERE ', ...
    primary_ID_name, ' = ', char(string(primary_ID)), ' AND tram_type_ID = ', ...
    char(string(tram_type_ID)), ' AND carriage_ID = ', ...
    char(string(carriage_ID))];

%% 对数据库连接执行删除指令
exec(obj.database_connection, table_delete);

end
