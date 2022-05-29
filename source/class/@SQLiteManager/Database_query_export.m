% 指定查询内容从数据库导出结果
function output_table = Database_query_export(obj, query_description)
%   1.输入参数：
%       (1)obj                  SQLITEMANAGER类的一个实例
%       (2)query_description    指定查询描述，中文，字符数组或字符串
%   2.输出参数：
%       (1)output_table         导出的表格

%% 初始化
% 保存了APC配置数据库属性信息的模板表格文件
template_table_file = 'Database_properties_APC_config.xlsx';

%% 获取相关的关系表信息
% 载入模板表格中的查询列表
query_list = readtable(template_table_file, 'PreserveVariableNames', ...
    true, 'Sheet', '查询列表');

% 获取指定查询描述对应的关系表英文名
relationship_table_english_name = string(query_list.('关系表')(ismember(...
    query_list.('中文名'), query_description)));

% 载入模板表格中的表名称清单
table_name_list = readtable(template_table_file, 'PreserveVariableNames', ...
    true, 'Sheet', '表名称清单');

% 根据关系表英文名获取对应中文名
relationship_table_chinese_name = string(table_name_list.('中文名')(ismember(...
    table_name_list.('英文名'), relationship_table_english_name)));

% 载入模板表格中的对应的关系表信息
relationship_table_info = readtable(template_table_file, ...
    'PreserveVariableNames', true, 'Sheet', relationship_table_chinese_name);

%% 载入模板表格中与指定查询描述同名的Sheet页信息
query_info = readtable(template_table_file, 'PreserveVariableNames', ...
    true, 'Sheet', query_description);

%% 遍历查询信息中所有的隶属表，筛选存在有效外键定义的行组成非关系表定义的外键表
unique_table_name_list = unique(string(query_info.('隶属表')));
none_relationship_foreign_key_table = relationship_table_info;
none_relationship_foreign_key_table(:, :) = [];
none_relationship_foreign_key_table.('主表名') = cell(0);
for index = 1 : length(unique_table_name_list)
    % 获取英文名表格对应的中文名
    chinese_table_name = string(table_name_list.('中文名')(ismember(...
        table_name_list.('英文名'), unique_table_name_list(index))));
    
    % 载入目标表格信息
    temp_info = readtable(template_table_file, 'PreserveVariableNames', ...
        true, 'Sheet', chinese_table_name);
    
    % 拼接当前主表名称
    temp_info.('主表名') = cellstr(repmat(unique_table_name_list(index), ...
        height(temp_info), 1));
    
    % 筛选存在外键定义的行
    temp_rows = temp_info(true == temp_info.('是否为外键'), :);
    
    % 如果存在外键定义的行，插入到非关系表定义的外键表末尾
    if ~isempty(temp_rows)
        none_relationship_foreign_key_table(end + 1 : ...
            end + height(temp_rows), :) = temp_rows;
    end
end

%% 构建多表联合查询指令
% 合成查询字段部分
source_string = string([query_info.('隶属表'), query_info.('英文名')]);
joint_string = join(source_string, '.');
query_field = join(transpose(joint_string), ',');

% 合成关系表内联声明部分
source_string1 = [repmat("INNER JOIN", height(relationship_table_info), 1), ...
    string(relationship_table_info.('外链表')), repmat("ON ", ...
    height(relationship_table_info), 1)];
joint_string1 = join(source_string1);

% 合成非关系表内联声明部分
source_string3 = [repmat("INNER JOIN", height(...
    none_relationship_foreign_key_table), 1), ...
    string(none_relationship_foreign_key_table.('外链表')), repmat("ON ", ...
    height(none_relationship_foreign_key_table), 1)];

% 非关系表不为空时，合并内联声明部分
if ~isempty(source_string3)
    joint_string3 = join(source_string3);
    joint_string1 = [joint_string1; joint_string3];
end

% 合成关系表内联字段条件部分
source_string2 = string([repmat(string(relationship_table_english_name), ...
    height(relationship_table_info), 1), relationship_table_info.('英文名'), ...
    relationship_table_info.('外链表'), relationship_table_info.('外链字段')]);
joint_string2 = join(source_string2, [".", " = ", "."]);

% 合成非关系表内联字段条件部分
source_string4 = string([none_relationship_foreign_key_table.('主表名'), ...
    none_relationship_foreign_key_table.('英文名'), ...
    none_relationship_foreign_key_table.('外链表'), ...
    none_relationship_foreign_key_table.('外链字段')]);

% 非关系表不为空时，合并内联字段条件部分
if ~isempty(source_string4)
    joint_string4 = join(source_string4, [".", " = ", "."]);
    joint_string2 = [joint_string2; joint_string4];
end

% 合成总的内联字段部分
inner_join_field = join(transpose(join([joint_string1, joint_string2])));

% 合成最终的查询指令
multi_table_query = ['SELECT ', char(query_field), ' FROM ', ...
    char(relationship_table_english_name), ' ', char(inner_join_field)];

%% 从数据库连接中查询内容
table_content = fetch(obj.database_connection, multi_table_query);

%% 当查询结果非空时，将cell类型的结果转换为table类型，指定表格列名，否则构建空白表格
if ~isempty(table_content)
    output_table = cell2table(table_content, 'VariableNames', ...
        transpose(query_info.('英文名')));
else
    output_table = table('Size', [0, size(query_info.('英文名'), 1)], ...
        'VariableTypes', repmat("cell", 1, size(query_info.('英文名'), 1)), ...
        'VariableNames', transpose(query_info.('英文名')));
end

end
