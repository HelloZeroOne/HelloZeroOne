% 指定查询内容从数据库导出筛选指定车型车厢的结果
function output_table = Database_query_specific_tram_carriage_export(obj, ...
    query_description, tram_type_index, carriage_index)
%   1.输入参数：
%       (1)obj                  SQLITEMANAGER类的一个实例
%       (2)query_description    指定查询描述，中文，字符数组或字符串
%       (3)tram_type_index      车型索引，正整数，对应数据库中存储的车型列表
%       (4)carriage_index       车厢索引，正整数，对应数据库中存储的车厢列表
%   2.输出参数：
%       (1)output_table         导出的表格

%% 根据指定查询描述从SQLite数据库中导出全部内容
complete_query_table = obj.Database_query_export(query_description);

%% 导出车型、车厢列表
tram_type_table = obj.Database_table_export('tram_type_list');
carriage_table = obj.Database_table_export('carriage_list');

%% 筛选车型、车厢
output_table = complete_query_table(ismember(complete_query_table.('tram_type'), ...
    tram_type_table.('tram_type'){tram_type_index}) & ismember(...
    complete_query_table.('carriage'), carriage_table.('carriage'){carriage_index}), :);

end
