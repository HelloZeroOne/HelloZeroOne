classdef SQLiteManager
    %SQLite数据库管理
    %   用以新建、维护SQLite数据库
    
    %私有属性
    properties (Access = private)
        
        % SQLite数据库路径，字符串
        database_file_path(1, 1) string
        
    end
    
    %公开属性
    properties
        
        % SQLite数据库连接
        database_connection(1, 1)
        
        % 指定车型
        specified_tram_type(1, 1) string
        
        % 指定车厢
        specified_carriage(1, 1) string
        
        % 排序后的配置参数列表
        sorted_config_parameter_list(:, :) table
        
        % 排序后的接收CAN消息列表
        sorted_receive_CAN_message_list(:, :) table
        
        % 排序后的发送CAN消息列表
        sorted_send_CAN_message_list(:, :) table
        
        % 排序后的接收TRDP过程数据列表
        sorted_receive_TRDP_process_data_list(:, :) table
        
        % 排序后的发送TRDP过程数据列表
        sorted_send_TRDP_process_data_list(:, :) table
        
        % 排序后的数字量输入列表
        sorted_digital_input_list(:, :) table

        % 排序后的数字量输出列表
        sorted_digital_output_list(:, :) table
        
        % 排序后的接收TCP连接ASCII码列表
        sorted_receive_TCP_ASCII_list(:, :) table

        % 排序后的端口临时数据变量列表
        sorted_port_data_variable_list(:, :) table
        
        % 排序后的接收CAN变量列表
        sorted_receive_CAN_variable_list(:, :) table
        
        % 排序后的发送CAN变量列表
        sorted_send_CAN_variable_list(:, :) table
        
        % 排序后的接收TRDP变量列表
        sorted_receive_TRDP_variable_list(:, :) table
        
        % 排序后的发送TRDP变量列表
        sorted_send_TRDP_variable_list(:, :) table
        
        % 排序后的数字量输入变量列表
        sorted_digital_input_variable_list(:, :) table

        % 排序后的数字量输出变量列表
        sorted_digital_output_variable_list(:, :) table
        
        % 排序后的接收TCP连接ASCII码变量列表
        sorted_receive_TCP_ASCII_variable_list(:, :) table
        
        % XML文档
        XML_document(1, 1)
        
        % XML根节点
        XML_root_node(1, 1)
        
    end
    
    methods
        
        %构造SQLITEMANAGER类的一个实例
        %   记录SQLite数据库文件的路径以维护其内容
        function obj = SQLiteManager(database_file_path)
            
            % 如果输入了大于等于1个的参数，将第1个参数赋予SQLite数据库路径属性
            if 1 <= nargin
                obj.database_file_path = database_file_path;
            end
            
        end
        
        %连接数据库
        %   连接既有数据库
        function obj = Database_connect(obj)
            obj.database_connection = sqlite(obj.database_file_path);
        end
        
        %断开数据库连接
        %   释放内存空间
        function obj = Database_disconnect(obj)
            close(obj.database_connection);
        end
        
        %创建或更新数据库
        %   按照自定义模板格式创建一个新的SQLite数据库或者补充创建既有数据库的表清单中缺少的表
        [obj] = Database_create_or_update(obj)
        
        %从Access数据库导入内容
        %   从老式的Access应用数据库导入内容，必须提前配置好名为myAccess的ODBC驱动
        [obj] = Access_database_import(obj)
        
        %导出数据库指定表内容
        %   指定表名称，导出所有内容并转换为table类型
        output_table = Database_table_export(obj, table_name)
        
        %导出数据库表名称清单
        %   查询数据库中所有表的名称，如果查询结果为空，返回空值，否则以一行cell的格式输出
        table_name_list = Database_table_name_list_export(obj)
        
        %指定查询内容从数据库导出结果
        %   根据关系表查询、拼接成直观的车型、车厢匹配结果
        output_table = Database_query_export(obj, query_description)
        
        %更新数据库中的记录内容
        %   根据编辑工具指定表格、字段、主索引的结果更新数据库记录
        [] = Database_record_update(obj, table_name, field_name, ...
            primary_ID, new_content)
        
        %为数据库中指定表插入记录
        %   将需要插入数据库的数据提前整合为一张表格，一并执行插入操作
        [] = Database_record_insert(obj, table_name, source_table)
        
        %删除数据库中普通表的记录内容
        %   根据编辑工具指定表格、主索引的结果删除数据库记录
        [] = Database_normal_table_record_delete(obj, table_name, primary_ID)
        
        %删除数据库中关系表的记录内容
        %   根据编辑工具指定表格、主索引、车型索引、车厢索引的结果删除数据库记录
        [] = Database_relationship_table_record_delete(obj, table_name, ...
            primary_ID, tram_type_ID, carriage_ID)
        
        %应用协议编解码配置表格初始化
        %   从数据库中导出所有查询表，筛选、排序
        [obj] = APC_config_table_initialize(obj)
        
        %应用协议编解码配置XML结构初始化
        %   按照APC需求定制化XML结构
        [obj] = APC_config_XML_initialize(obj)
        
        %配置参数清单从table格式转换为XML格式
        %   按照APC需求定制化XML结构中的配置参数清单部分
        [obj] = Config_parameter_list_table2XML_convert(obj)
        
        %接收CAN消息清单从table格式转换为XML格式
        %   按照APC需求定制化XML结构中的接收CAN消息清单部分
        [obj] = Receive_CAN_message_list_table2XML_convert(obj)
        
        %发送CAN消息清单从table格式转换为XML格式
        %   按照APC需求定制化XML结构中的发送CAN消息清单部分
        [obj] = Send_CAN_message_list_table2XML_convert(obj)
        
        %接收TRDP过程数据清单从table格式转换为XML格式
        %   按照APC需求定制化XML结构中的接收TRDP过程数据清单部分
        [obj] = Receive_TRDP_process_data_list_table2XML_convert(obj)
        
        %发送TRDP过程数据清单从table格式转换为XML格式
        %   按照APC需求定制化XML结构中的发送TRDP过程数据清单部分
        [obj] = Send_TRDP_process_data_list_table2XML_convert(obj)
        
        %端口临时数据变量清单从table格式转换为XML格式
        %   按照APC需求定制化XML结构中的端口临时数据变量清单部分
        [obj] = Port_data_variable_list_table2XML_convert(obj)
        
        %接收CAN变量清单从table格式转换为XML格式
        %   按照APC需求定制化XML结构中的接收CAN变量清单部分
        [obj] = Receive_CAN_variable_list_table2XML_convert(obj)
        
        %发送CAN变量清单从table格式转换为XML格式
        %   按照APC需求定制化XML结构中的发送CAN变量清单部分
        [obj] = Send_CAN_variable_list_table2XML_convert(obj)
        
        %接收TRDP变量清单从table格式转换为XML格式
        %   按照APC需求定制化XML结构中的接收TRDP变量清单部分
        [obj] = Receive_TRDP_variable_list_table2XML_convert(obj)
        
        %发送TRDP变量清单从table格式转换为XML格式
        %   按照APC需求定制化XML结构中的发送TRDP变量清单部分
        [obj] = Send_TRDP_variable_list_table2XML_convert(obj)
        
        %应用协议编解码配置XML结构写入指定文件
        %   选择文件写入定制化XML结构全部内容
        [] = APC_config_XML_write(obj)
        
        %从SQLite数据库生成应用协议编解码配置XML结构文件
        %   查询数据库指定内容，转化为定制化XML结构，写入指定文件
        [obj] = APC_config_XML_generate(obj)
        
        %从指定Excel导入内容作为新记录插入SQLite数据库指定表中
        %   Excel文件名必须是APC配置模板表格中定义过的，将其内容插入到数据库对应表中
        [] = Excel2database_insert(obj)
        
        %数字量输入清单从table格式转换为XML格式
        %   按照APC需求定制化XML结构中的数字量输入清单部分
        [obj] = Digital_input_list_table2XML_convert(obj)
        
        %数字量输出清单从table格式转换为XML格式
        %   按照APC需求定制化XML结构中的数字量输出清单部分
        [obj] = Digital_output_list_table2XML_convert(obj)
        
        %数字量输入变量清单从table格式转换为XML格式
        %   按照APC需求定制化XML结构中的数字量输入变量清单部分
        [obj] = Digital_input_variable_list_table2XML_convert(obj)
        
        %数字量输出变量清单从table格式转换为XML格式
        %   按照APC需求定制化XML结构中的数字量输出变量清单部分
        [obj] = Digital_output_variable_list_table2XML_convert(obj)
        
        %接收TCP连接ASCII码清单从table格式转换为XML格式
        %   按照APC需求定制化XML结构中的接收TCP连接ASCII码清单部分
        [obj] = Receive_TCP_ASCII_list_table2XML_convert(obj)
        
        %接收TCP连接ASCII码变量清单从table格式转换为XML格式
        %   按照APC需求定制化XML结构中的接收TCP连接ASCII码变量清单部分
        [obj] = Receive_TCP_ASCII_variable_list_table2XML_convert(obj)

        %指定查询内容从数据库导出筛选指定车型车厢的结果
        %   先按查询描述导出全部内容，再根据车型、车厢索引筛选表格得到最终结果
        output_table = Database_query_specific_tram_carriage_export(obj, ...
            query_description, tram_type_index, carriage_index)
        
    end
    
end
