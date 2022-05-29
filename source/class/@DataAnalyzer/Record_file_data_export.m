% 导出数据记录文件中的数据
function [obj] = Record_file_data_export(obj, varargin)
%   1.输入参数：
%       (1)obj         DATAANALYZER类的一个实例
%       (2)varargin    筛选的信号名称，可变长度参数
%   2.输出参数：
%       (1)obj         DATAANALYZER类的一个实例

%% 信号重命名映射表格非空时，将工程内脚本输入的信号名称重命名为数据记录文件中所用的信号名称
if ~isempty(obj.signal_rename_mapping_table)
    selected_signal_names = obj.Script_file_signal_name2record_file_signal_name(...
        varargin);
else
    selected_signal_names = varargin;
end

%% 如果只单选了一个信号，非cell，将选择的信号转换为cell格式，以适配后续调用
if ~iscell(selected_signal_names)
    selected_signal_names = {selected_signal_names};
end

%% 检查文件路径有效性
if isempty(obj.record_file_path)
    error('数据分析器中的记录文件路径为空！');
end

%% 区分文件格式执行不同的导出流程
% 解析文件扩展名
[~, ~, file_extension] = fileparts(obj.record_file_path(1));

% 匹配指定扩展名
switch file_extension
    case '.mat'
        obj.data_collection = Local_mat_data_export(obj.record_file_path, ...
            selected_signal_names{:});
        
    case {'.ASC', '.asc'}
        obj.CAN_signals_struct = Local_asc_data_export(obj.record_file_path, ...
            selected_signal_names{:});
        
    case {'.MDF', '.mdf', '.MF4', '.mf4', '.dat'}
        obj.CAN_signals_struct = Local_mdf_data_export(obj.record_file_path, ...
            selected_signal_names{:});
        
    case {'.BLF', '.blf'}
        obj.CAN_signals_struct = Local_blf_data_export(obj.record_file_path, ...
            selected_signal_names{:});
        
    case '.xls'
        obj.data_collection = Local_xls_data_export(obj.record_file_path, ...
            selected_signal_names{:});
        
    otherwise
        error('不支持该文件格式！');
end

%% 信号重命名映射表格非空时，将数据集内的数据记录文件中所用的信号名称重命名为工程内脚本所用的信号名称
if ~isempty(obj.signal_rename_mapping_table)
    
    % 获取数据集表格的信号名称
    original_signal_names = obj.data_collection.Properties.VariableNames;
    
    % 对指定信号重命名
    obj.data_collection.Properties.VariableNames = ...
        obj.Record_file_signal_name2script_file_signal_name(original_signal_names);
    
end

%% 检查原始数据中是否存在NaN，如果有则用上一行正常点的数据替代
NaN_check_results = isnan(table2array(obj.data_collection));
[NaN_rows, NaN_columns] = find(NaN_check_results);
if ~isempty(NaN_rows)
    for index = 1 : size(NaN_rows, 1)
        % 如果第一个点就不正常，用0赋值
        if isequal(1, NaN_rows(index))
            obj.data_collection(NaN_rows(index), NaN_columns(index)) = 0;
        else
            obj.data_collection(NaN_rows(index), NaN_columns(index)) = ...
                obj.data_collection(NaN_rows(index) - 1, NaN_columns(index));
        end
    end
    warning('***该轨迹原始数据存在NaN点，对应行索引：【%d】***\n', NaN_rows);
end

end

%% 局部函数：mat文件数据导出
function [recorded_data] = Local_mat_data_export(file_path, varargin)
%   1.输入参数：
%       (1)file_path        文件路径，n×1字符串
%       (2)varargin         筛选的信号名称，可变长度参数
%   2.输出参数：
%       (1)recorded_data    记录数据，表格，由筛选的信号组成

%% 初始化
temp_table = table;
time_axis = [];

%% 遍历全部文件路径导出数据记录
for index1 = 1 : size(file_path, 1)
    
    % 创建mat对象的一个实例
    mat_obj = matfile(file_path);
    
    % 获取mat中的变量名集合
    variable_name = who(mat_obj);
    
    % 提取第1个变量（正常情况下存储的mat文件中只有1个变量）
    if ~isempty(variable_name)
        temp_data = mat_obj.(variable_name{1});
    else
        error('数据文件内部无匹配数据！');
    end
    
    % 正常的inspector导出文件中只应存在1个Simulink.SimulationData.Dataset对象
    if isa(temp_data, 'Simulink.SimulationData.Dataset')
        
        % 去除Dataset对象外壳，直至访问到包含Signal的集合为止
        select_counter = 0;
        while ~isa(temp_data{1}, 'Simulink.SimulationData.Signal') && ...
                ~isa(temp_data{1}, 'Simulink.SimulationData.Parameter') && ...
                3 > select_counter
            temp_data = temp_data{1};
            select_counter = select_counter + 1;
        end
        
        % 从temp_data（Simulink.SimulationData.Dataset对象）中遍历导出全部信号量
        for index2 = 1 : numElements(temp_data)
            
            % 只录入Simulink.SimulationData.Signal类型数据
            if isa(temp_data{index2}, 'Simulink.SimulationData.Signal')
                
                temp_table.(temp_data{index2}.Name) = temp_data{index2}.Values.Data;
                
                % 更新一次时间轴
                if isempty(time_axis)
                    time_axis = temp_data{index2}.Values.Time;
                end
                
            end
        end
        
    % 对经过矿卡无人驾驶项目控制方向软件预处理（时间轴形式特殊）得到的表格变量执行简化处理
    elseif isa(temp_data, 'table')
        
        % 提取原表格中的所有信号
        temp_table = temp_data;
        
        % 提取原表格中的时间以构造时间轴
        temp_time = datetime(num2str(temp_table.('时间')), ...
            'InputFormat', 'yyyyMMddHHmmss');
        time_axis = posixtime(temp_time);
        
    else
        error('数据文件内部数据类型不支持导出！');
    end
end

% 补充时间轴信号
temp_table.('time_axis') = time_axis;

% 未指定信号时导出全部信号
if 1 >= nargin
    recorded_data = temp_table;
else
    if any(ismember(temp_table.Properties.VariableNames, varargin))
        recorded_data = temp_table(:, {temp_table.Properties.VariableNames{...
            ismember(temp_table.Properties.VariableNames, varargin)}, 'time_axis'});
    else
        error('所选信号在原始数据记录文件中不存在！');
    end
end

end

%% 局部函数：asc文件数据导出
function [recorded_data] = Local_asc_data_export(file_path, varargin)
%   1.输入参数：
%       (1)file_path        文件路径，n×1字符串
%       (2)varargin         筛选的信号名称，可变长度参数
%   2.输出参数：
%       (1)recorded_data    记录数据，结构体，由筛选的信号组成

%% 初始化
recorded_data = struct;

%% 选择并打开相匹配的DBC文件
[DBC_file_name, DBC_file_path] = uigetfile({'*.dbc'}, '请选择相匹配的DBC文件');
if isequal(0, DBC_file_name)
    error('未选择DBC文件！');
end

% 打开DBC文件内的数据库
CAN_database = canDatabase(fullfile(DBC_file_path, DBC_file_name));

% 获取数据库内的CAN消息清单
message_info = messageInfo(CAN_database);

%% 遍历全部文件路径导出数据记录
for index1 = 1 : size(file_path, 1)
    % 将CAN消息导入为带时间的表格
    message_record = canMessageImport(file_path(index1), 'Vector', ...
        CAN_database, 'OutputFormat', 'timetable');
    
    % 在message_record中提取指定信号，并组合成表格
    signal_timetable = cell(size(message_info, 1), 1);
    for index2 = 1 : size(message_info, 1)
        % 将CAN信号导出为带时间的表格
        signal_timetable{index2} = canSignalTimetable(message_record, ...
            message_info(index2).Name);
        
        % 获取带时间表格表头（信号名称）
        signal_namelist = signal_timetable{index2}.Properties.VariableNames;
        
        % 临时结构体对应CAN消息子结构体下的描述设置
        if ~isempty(message_info(index2).Comment)
            recorded_data.(message_info(index2).Name).description = ...
                message_info(index2).Comment;
        else
            recorded_data.(message_info(index2).Name).description = ...
                message_info(index2).Name;
        end
        
        % 临时结构体对应CAN消息子结构体下的信号表格、时间轴初始化
        recorded_data.(message_info(index2).Name).signal_table = table;
        recorded_data.(message_info(index2).Name).time_axis = [];
        
        % 根据可变输入筛选信号
        if 1 >= nargin
            selected_signals = signal_namelist;
        else
            selected_signals = signal_namelist(ismember(signal_namelist, ...
                varargin{1 : end}));
        end
        
        % 将带时间表格的信号传递至临时结构体对应CAN消息子结构体下的信号表格中
        recorded_data.(message_info(index2).Name).signal_table{:, ...
            selected_signals(:)} = signal_timetable{index2}{:, selected_signals(:)};
        
        % 补充时间轴信号
        [hour, minute, second] = hms(signal_timetable{index2}.Time);
        recorded_data.(message_info(index2).Name).time_axis = ...
            60 * 60 * hour + 60 * minute + second;
    end
end

end

%% 局部函数：mdf文件数据导出
function [recorded_data] = Local_mdf_data_export(file_path, varargin)
%   1.输入参数：
%       (1)file_path        文件路径，n×1字符串
%       (2)varargin         筛选的信号名称，可变长度参数
%   2.输出参数：
%       (1)recorded_data    记录数据，表格，由筛选的信号组成

%% 初始化
recorded_data = struct;

%% 遍历全部文件路径导出数据记录
for index1 = 1 : size(file_path, 1)
    % 载入mdf格式原始数据
    temp_data = mdf(file_path(index1));
    
    % 提取记录通道清单表格
    channel_list_table = channelList(temp_data);
    
    % 解析通道组名作为后续构造CAN信号结构体的成员域名
    channel_group_index = unique(channel_list_table.ChannelGroupNumber);
    channel_group_comment = unique(channel_list_table.ChannelGroupComment);
    
    % 依次为每个通道组创建对应的CAN信号结构体的子结构体
    for index2 = 1 : length(channel_group_index)
        recorded_data.(['group', num2str(channel_group_index(...
            index2))]).description = [char(channel_group_comment(index2)), '记录'];
        
        % 每个通道组子结构体下的信号表格、时间轴初始化
        recorded_data.(['group', num2str(channel_group_index(...
            index2))]).signal_table = table;
        recorded_data.(['group', num2str(channel_group_index(...
            index2))]).time_axis = [];
    end
    
    % 获取CAN信号结构体域名以备后续遍历过程中对比选择
    struct_field_name = fieldnames(recorded_data);
    
    % 根据可变输入筛选信号
    selected_signal_name = unique(channel_list_table.ChannelName);
    if 1 < nargin
        selected_signal_name(~ismember(cellstr(selected_signal_name), ...
            varargin)) = [];
    end
    
    % 遍历记录通道清单载入信号
    for index2 = 1 : size(selected_signal_name, 1)
        % 搜索所选信号在通道清单表格中对应的行数
        selected_row = ismember(channel_list_table.ChannelName, ...
            selected_signal_name(index2));
        
        % 从mdf格式原始数据中提取信号数据
        signal_data = read(temp_data, channel_list_table(selected_row, :));
        
        % 对于重名信号，遍历录入数据
        for index3 = 1 : size(signal_data, 1)
            % 搜索信号所属通道组
            temp_group_index = channel_list_table.ChannelGroupNumber(...
                selected_row);
            selected_group = ismember(channel_group_index, temp_group_index(index3));
            
            % 将信号数据保存至CAN信号结构体的对应子结构体中
            recorded_data.(struct_field_name{selected_group}).signal_table.(...
                selected_signal_name(index2)) = signal_data{index3}{:, 1};
            
            % 补充时间轴信号
            [hour, minute, second] = hms(signal_data{index3}.Time);
            recorded_data.(struct_field_name{selected_group}).time_axis = ...
                60 * 60 * hour + 60 * minute + second;
        end
    end
end

end

%% 局部函数：blf文件数据导出
function [recorded_data] = Local_blf_data_export(file_path, varargin)
%   1.输入参数：
%       (1)file_path        文件路径，n×1字符串
%       (2)varargin         筛选的信号名称，可变长度参数
%   2.输出参数：
%       (1)recorded_data    记录数据，结构体，由筛选的信号组成

%% 初始化
recorded_data = struct;

%% 选择并打开相匹配的DBC文件
[DBC_file_name, DBC_file_path] = uigetfile({'*.dbc'}, '请选择相匹配的DBC文件');
if isequal(0, DBC_file_name)
    error('未选择DBC文件！');
end

% 打开DBC文件内的数据库
CAN_database = canDatabase(fullfile(DBC_file_path, DBC_file_name));

% 获取数据库内的CAN消息清单
message_info = messageInfo(CAN_database);

%% 遍历全部文件路径导出数据记录
for index1 = 1 : size(file_path, 1)
    % 载入blf格式原始数据
    blf_data = blfread(file_path(index1), 'Database', CAN_database);
    
    % 根据DBC中配置的CAN消息数量对带时间的信号表格cell初始化
    signal_timetable = cell(size(message_info, 1), 1);
    
    % 遍历blf原始数据的所有通道解析信号
    for index2 = 1 : size(blf_data, 1)
        % 遍历DBC中的所有CAN消息，从blf原始数据中提取指定信号，并组合成表格
        for index3 = 1 : size(message_info, 1)
            % 将CAN信号导出为带时间的表格
            signal_timetable{index3} = canSignalTimetable(blf_data{index2}, ...
                message_info(index3).Name);
            
            % 获取带时间表格表头（信号名称）
            signal_namelist = signal_timetable{index3}.Properties.VariableNames;
            
            % 临时结构体对应CAN消息子结构体下的描述设置
            if ~isempty(message_info(index3).Comment)
                recorded_data.(message_info(index3).Name).description = ...
                    message_info(index3).Comment;
            else
                recorded_data.(message_info(index3).Name).description = ...
                    message_info(index3).Name;
            end
            
            % 临时结构体对应CAN消息子结构体下的信号表格、时间轴初始化
            recorded_data.(message_info(index3).Name).signal_table = table;
            recorded_data.(message_info(index3).Name).time_axis = [];
            
            % 根据可变输入筛选信号
            if 1 >= nargin
                selected_signals = signal_namelist;
            else
                selected_signals = signal_namelist(ismember(signal_namelist, ...
                    varargin{1 : end}));
            end
            
            % 将带时间表格的信号传递至临时结构体对应CAN消息子结构体下的信号表格中
            recorded_data.(message_info(index3).Name).signal_table{:, ...
                selected_signals(:)} = signal_timetable{index3}{:, selected_signals(:)};
            
            % 补充时间轴信号
            [hour, minute, second] = hms(signal_timetable{index3}.Time);
            recorded_data.(message_info(index3).Name).time_axis = ...
                60 * 60 * hour + 60 * minute + second;
        end
    end
end

end

%% 局部函数：xls文件数据导出
function [recorded_data] = Local_xls_data_export(file_path, varargin)
%   1.输入参数：
%       (1)file_path        文件路径，n×1字符串
%       (2)varargin         筛选的信号名称，可变长度参数
%   2.输出参数：
%       (1)recorded_data    记录数据，表格，由筛选的信号组成

%% 初始化
temp_data = cell(size(file_path, 1), 1);
first_record_time = zeros(size(file_path, 1), 1);
total_rows = 0;

%% 遍历全部文件路径导出数据记录
for index = 1 : size(file_path, 1)
    temp_data{index} = readtable(file_path(index), 'PreserveVariableNames', true);
    
    % 提取时间轴信号，转换时间格式
    absolute_time = datetime(temp_data{index}{:, 1}, ...
        'InputFormat', 'yyyy-MM-dd HH:mm:ss');
    
    % 合成UNIX时间形式的相对秒数时间轴
    temp_data{index}.time_axis = posixtime(absolute_time);
    
    % 舍弃原始数据表格第一列时间记录，保留其余所有信号及合成的时间轴
    temp_data{index} = temp_data{index}(:, 2 : end);
    
    % 提取每一段数据的第一行记录时间用于排序
    first_record_time(index) = temp_data{index}.time_axis(1);
    
    % 累计最大行数
    total_rows = total_rows + height(temp_data{index});
end

% 对每段数据第一行记录时间排序
[~, sorted_index] = sort(first_record_time);

% 按照排序索引将临时数据按时间先后顺序拼接为完整的表格
temp_table = temp_data{sorted_index(1)};
temp_tail_index = height(temp_data{sorted_index(1)});
if 2 <= size(file_path, 1)
    for index = 2 : size(file_path, 1)
        temp_table(temp_tail_index + 1 : temp_tail_index + height(...
            temp_data{sorted_index(index)}), :) = temp_data{sorted_index(index)};
        temp_tail_index = temp_tail_index + height(temp_data{sorted_index(index)});
    end
end

% 从总表中提取指定信号组成新的表格,未指定信号时导出全部信号
if 1 >= nargin
    recorded_data = temp_table;
else
    if any(ismember(temp_table.Properties.VariableNames, varargin))
        recorded_data = temp_table(:, {temp_table.Properties.VariableNames{...
            ismember(temp_table.Properties.VariableNames, varargin)}, 'time_axis'});
    else
        error('所选信号在原始数据记录文件中不存在！');
    end
end

end
