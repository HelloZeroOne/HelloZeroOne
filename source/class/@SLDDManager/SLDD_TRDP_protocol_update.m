% 更新数据字典中的TRDP协议
function [obj] = SLDD_TRDP_protocol_update(obj)
%   1.输入参数：
%       (1)obj    SLDDMANAGER类的一个实例
%   2.输出参数：
%       (1)obj    SLDDMANAGER类的一个实例

%% 选择目标数据库
fprintf(['$可选数据库如下：\n1 - 智轨电车循迹控制应用协议编解码配置数据库\n', ...
    '2 - 智轨电车地图管理应用协议编解码配置数据库\n']);
database_index = input('->请设置目标数据库 [回车默认1]: ');
if isempty(database_index) || 1 > database_index
    database_index = 1;
end

switch database_index
    case 1 % 智轨电车循迹控制应用协议编解码配置数据库（获取绝对路径）
        database_file_path = which('ART_IDS_APC_config.db');
        
    case 2 % 智轨电车地图管理应用协议编解码配置数据库（获取绝对路径）
        database_file_path = which('ART_MMU_APC_config.db');
        
    otherwise
        warning('未定义的数据库索引！');
        return;
end

%% TRDP协议管理器初始化
obj.TRDP_manager = TRDPManager(database_file_path);

%% 选择车型
% 连接数据库
obj.TRDP_manager.SQLite_manager_obj = ...
    obj.TRDP_manager.SQLite_manager_obj.Database_connect;

% 获取车型列表
tram_type_list = obj.TRDP_manager.SQLite_manager_obj.Database_table_export(...
    'tram_type_list');

% 断开数据库连接
obj.TRDP_manager.SQLite_manager_obj = ...
    obj.TRDP_manager.SQLite_manager_obj.Database_disconnect;

% 提示信息选择车型
fprintf('$可选车型如下：\n');
fprintf('%s - %s\n', [string(1 : height(tram_type_list)); ...
    transpose(string(tram_type_list.('tram_type')))]);
tram_type_index = input('->请设置目标车型索引 [回车默认1]: ');
if isempty(tram_type_index) || 1 > tram_type_index
    tram_type_index = 1;
end
obj.TRDP_manager.tram_type_index = tram_type_index;

%% 依次进行MC1、MC2端TRDP协议更新操作
for index = 1 : 2
    
    % 设置车厢索引
    obj.TRDP_manager.carriage_index = index;
    
    % 导入TRDP协议表格
    obj.TRDP_manager = obj.TRDP_manager.TRDP_table_import;
    
    % 将TRDP协议导入数据字典
    obj = obj.SLDD_TRDP_import;

end

end
