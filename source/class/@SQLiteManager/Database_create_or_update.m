% 创建或更新数据库
function [obj] = Database_create_or_update(obj)
%   1.输入参数：
%       (1)obj    SQLITEMANAGER类的一个实例
%   2.输出参数：
%       (1)obj    SQLITEMANAGER类的一个实例

%% 初始化
% 保存了APC配置数据库属性信息的模板表格文件
template_table_file = 'Database_properties_APC_config.xlsx';

% 待新建的数据库表名称清单
database_table_name_list = readtable(template_table_file, ...
    'PreserveVariableNames', true, 'Sheet', '表名称清单');

% 外键字段声明缓存，假设最多10个外键
foreign_key_buffer = cell(1, 10);

% 外键缓存索引，用以记录当前外键字段声明缓存中的有效字符数组数量
foreign_key_buffer_index = 0;

% 主键字段声明缓存，假设最多10个主键
primary_key_buffer = cell(1, 10);

% 主键缓存索引，用以记录当前主键字段声明缓存中的有效字符数组数量
primary_key_buffer_index = 0;

%% 根据数据库文件是否存在调用对应的数据库接口函数
if isfile(obj.database_file_path)
    
    % 连接既有SQLite数据库
    obj = obj.Database_connect;
    
    % 设置提示语操作模式为更新
    operation_tips = '更新';
    
else
    
    % 创建空白SQLite数据库
    obj.database_connection = sqlite(obj.database_file_path, 'create');
    
    % 设置提示语操作模式为创建
    operation_tips = '创建';
    
end

%% 筛选需要新建的表名称清单
% 获取SQLite数据库里已经存在的所有表的名称
existed_table_name_list = obj.Database_table_name_list_export;

% 当已经存在的表非空时，删除待新建的数据库表名称清单中与已经存在的表同名的表名称
if ~isempty(existed_table_name_list)
    database_table_name_list(ismember(database_table_name_list.('英文名'), ...
        existed_table_name_list), :) = [];
end

%% 遍历数据库表名称清单，依次在数据库中新建表
if isempty(database_table_name_list)
    warning('既有SQLite数据库中已经包含所有待新建的表，无需重复新建！');
    return;
end
for index1 = 1 : height(database_table_name_list)
    
    % 读取遍历到的数据库表名称对应的配置表格内容
    traverse_table_config = readtable(template_table_file, ...
        'PreserveVariableNames', true, 'Sheet', ...
        database_table_name_list.('中文名'){index1});
    
    % 拼接创建表的数据库指令的起始部分
    create_table_command = append('create table ', ...
        database_table_name_list.('英文名'){index1}, ' (');
    
    % 遍历配置表格内容以接续创建表的数据库指令的字段声明部分
    for index2 = 1 : height(traverse_table_config)
        
        % 接续字段英文名和数据类型
        create_table_command = append(create_table_command, ...
            traverse_table_config.('英文名'){index2}, ' ', ...
            traverse_table_config.('数据类型'){index2});
        
        % 如果是外键，拼接外键字段声明
        if true == traverse_table_config.('是否为外键')(index2)
            foreign_key_buffer_index = foreign_key_buffer_index + 1;
            foreign_key_buffer{foreign_key_buffer_index} = append('CONSTRAINT fk_', ...
                traverse_table_config.('外链表'){index2}, ' FOREIGN KEY (', ...
                traverse_table_config.('英文名'){index2}, ') REFERENCES ', ...
                traverse_table_config.('外链表'){index2}, '(', ...
                traverse_table_config.('外链字段'){index2}, ')');
        end
        
        % 如果是主键，记录主键字段声明
        if true == traverse_table_config.('是否为主键')(index2)
            primary_key_buffer_index = primary_key_buffer_index + 1;
            primary_key_buffer{primary_key_buffer_index} = ...
                traverse_table_config.('英文名'){index2};
        end
        
        % 当前字段结束，如果不是最后一个字段，接续逗号
        if height(traverse_table_config) > index2
            create_table_command = append(create_table_command, ', ');
        end
        
    end
    
    % 如果外键字段声明缓存中的有效字符数组数量（缓存索引）大于0，在创建表的数据库指令后接续外键声明
    if 0 < foreign_key_buffer_index
        for index3 = 1 : foreign_key_buffer_index
            create_table_command = append(create_table_command, ', ', ...
                foreign_key_buffer{index3});
        end
    end
    
    % 如果主键字段声明缓存中的有效字符数组数量（缓存索引）大于0，在创建表的数据库指令后接续主键声明
    if 0 < primary_key_buffer_index
        
        % 接续头部PRIMARY KEY关键词
        create_table_command = append(create_table_command, ', PRIMARY KEY (');
        
        % 遍历主键字段声明缓存有效字符数组
        for index4 = 1 : primary_key_buffer_index
            
            % 接续每一个主键名称
            create_table_command = append(create_table_command, ...
                primary_key_buffer{index4});
            
            % 当前字段结束，如果不是最后一个字段，接续逗号，否则接续中括号结束
            if primary_key_buffer_index > index4
                create_table_command = append(create_table_command, ', ');
            else
                create_table_command = append(create_table_command, ')');
            end
            
        end
        
    end
    
    % 在创建表的数据库指令后接续中括号结束
    create_table_command = append(create_table_command, ')');
    
    % 执行创建表的数据库指令
    exec(obj.database_connection, create_table_command);
    
    % 将缓存索引清0，以便正确统计下一张表遍历的结果
    foreign_key_buffer_index = 0;
    primary_key_buffer_index = 0;
    
end

%% 提示操作成功
fprintf('***%sSQLite数据库【%s】成功***\n', operation_tips, obj.database_file_path);

end
