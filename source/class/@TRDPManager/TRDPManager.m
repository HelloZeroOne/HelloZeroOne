classdef TRDPManager
    %TRDP协议管理
    %   用以维护TRDP协议、TRDP相关数据组织形式

    %公开属性
    properties
        
        % 保存了TRDP协议的SQLite管理器对象，SQLiteManager
        SQLite_manager_obj(1, 1) SQLiteManager
        
        % 车型索引，double，大于等于1
        tram_type_index(1, 1) double {mustBeGreaterThanOrEqual(tram_type_index, 1)} = 1
        
        % 车厢索引，double，大于等于1，小于等于2
        carriage_index(1, 1) double {mustBeGreaterThanOrEqual(...
            carriage_index, 1), mustBeLessThanOrEqual(carriage_index, 2)} = 1
        
        % 接收TRDP过程数据列表，表格
        receive_TRDP_process_data_list_table(:, :) table
        
        % 发送TRDP过程数据列表，表格
        send_TRDP_process_data_list_table(:, :) table
        
        % 端口临时数据变量列表，表格
        port_data_variable_list_table(:, :) table
        
        % 接收TRDP变量列表，表格
        receive_TRDP_variable_list_table(:, :) table
        
        % 发送TRDP变量列表，表格
        send_TRDP_variable_list_table(:, :) table
        
        % 输入TRDP过程数据清单，TRDPProcessData类
        input_TRDP_process_data_list(:, 1) TRDPProcessData
        
        % 输出TRDP过程数据清单，TRDPProcessData类
        output_TRDP_process_data_list(:, 1) TRDPProcessData
        
    end
    
    methods
        
        %构造TRDPMANAGER类的一个实例
        %   记录指定车型、车厢索引和SQLite数据库路径以读取对应TRDP协议内容
        function obj = TRDPManager(SQLite_database_file_path, carriage_index, tram_type_index)
            
            % 如果输入了大于等于1个的参数，使用第1个参数创建保存了TRDP协议的SQLite管理器对象属性
            if 1 <= nargin
                obj.SQLite_manager_obj = SQLiteManager(SQLite_database_file_path);
            end
            
            % 如果输入了大于等于2个的参数，将第2个参数赋予车厢索引属性
            if 2 <= nargin
                obj.carriage_index = carriage_index;
            end
            
            % 如果输入了大于等于3个的参数，将第3个参数赋予车型索引属性
            if 3 <= nargin
                obj.tram_type_index = tram_type_index;
            end
                        
        end
        
        %导入TRDP协议表格
        %   根据预置查询描述从SQLite数据库导入表格内容，筛选车型、车厢，更新TRDP过程数据清单
        [obj] = TRDP_table_import(obj)
        
    end
    
end
