% 生成数据库表DDL(数据库定义语言)
function database_table_DDL = Database_table_DDL_generate(~, database_table_name, ...
    database_config_table)
%   1.输入参数：
%       (1)database_table_name      用于生成DDL的数据库表名称，字符数组
%       (2)database_config_table    用于生成DDL的数据库配置表格，table
%   2.输出参数：
%       (1)database_table_DDL       生成的数据库表DDL，字符数组

%% 初始化
% 外键字段声明缓存，假设最多10个外键
foreign_key_buffer = cell(1, 10);

% 外键缓存索引，用以记录当前外键字段声明缓存中的有效字符数组数量
foreign_key_buffer_index = 0;

% 主键字段声明缓存，假设最多10个主键
primary_key_buffer = cell(1, 10);

% 主键缓存索引，用以记录当前主键字段声明缓存中的有效字符数组数量
primary_key_buffer_index = 0;

%% 拼接创建表的数据库指令的起始部分
database_table_DDL = append('create table ', database_table_name, ' (');

%% 遍历配置表格内容以接续创建表的数据库指令的字段声明部分
for index1 = 1 : height(database_config_table)
    
    % 接续字段英文名和数据类型
    database_table_DDL = append(database_table_DDL, ...
        database_config_table.('英文名'){index1}, ' ', ...
        database_config_table.('数据类型'){index1});
    
    % 如果是外键，拼接外键字段声明
    if true == database_config_table.('是否为外键')(index1)
        foreign_key_buffer_index = foreign_key_buffer_index + 1;
        foreign_key_buffer{foreign_key_buffer_index} = append('CONSTRAINT fk_', ...
            database_config_table.('外链表'){index1}, ' FOREIGN KEY (', ...
            database_config_table.('英文名'){index1}, ') REFERENCES ', ...
            database_config_table.('外链表'){index1}, '(', ...
            database_config_table.('外链字段'){index1}, ')');
    end
    
    % 如果是主键，记录主键字段声明
    if true == database_config_table.('是否为主键')(index1)
        primary_key_buffer_index = primary_key_buffer_index + 1;
        primary_key_buffer{primary_key_buffer_index} = ...
            database_config_table.('英文名'){index1};
    end
    
    % 当前字段结束，如果不是最后一个字段，接续逗号
    if height(database_config_table) > index1
        database_table_DDL = append(database_table_DDL, ', ');
    end
    
end

%% 如果外键字段声明缓存中的有效字符数组数量（缓存索引）大于0，在创建表的数据库指令后接续外键声明
if 0 < foreign_key_buffer_index
    for index2 = 1 : foreign_key_buffer_index
        database_table_DDL = append(database_table_DDL, ', ', ...
            foreign_key_buffer{index2});
    end
end

%% 如果主键字段声明缓存中的有效字符数组数量（缓存索引）大于0，在创建表的数据库指令后接续主键声明
if 0 < primary_key_buffer_index
    
    % 接续头部PRIMARY KEY关键词
    database_table_DDL = append(database_table_DDL, ', PRIMARY KEY (');
    
    % 遍历主键字段声明缓存有效字符数组
    for index3 = 1 : primary_key_buffer_index
        
        % 接续每一个主键名称
        database_table_DDL = append(database_table_DDL, ...
            primary_key_buffer{index3});
        
        % 当前字段结束，如果不是最后一个字段，接续逗号，否则接续中括号结束
        if primary_key_buffer_index > index3
            database_table_DDL = append(database_table_DDL, ', ');
        else
            database_table_DDL = append(database_table_DDL, ')');
        end
        
    end
    
end

%% 在创建表的数据库指令后接续中括号结束
database_table_DDL = append(database_table_DDL, ')');

end
