% 创建定制化的SDI运行实例
function [obj] = Customized_SDI_run_create(obj)
%   1.输入参数：
%       (1)obj    DATAANALYZER类的一个实例
%   2.输出参数：
%       (1)obj    DATAANALYZER类的一个实例

%% 选择是否清空历史SDI数据
clear_SDI_string = input(...
    '->是否清空历史SDI数据（Y/N） [回车默认为N]: ', 's');
if ~isempty(clear_SDI_string)
    if contains(clear_SDI_string, {'Y', 'y', 'YES', 'Yes', 'yes'})
        Simulink.sdi.clear;
        Simulink.sdi.clearPreferences;
    end
end

%% 创建Simulink.sdi.Run对象
obj.test_run = Simulink.sdi.Run.create;
obj.test_run.Name = obj.data_description;
obj.test_run.Description = ['分析', obj.data_description];

%% 信号名称后缀使能
signal_name_suffix_enable = false;
signal_name_suffix_enable_string = input(...
    '->是否使能信号名称后缀（Y/N） [回车默认为N]: ', 's');
if ~isempty(signal_name_suffix_enable_string)
    signal_name_suffix_enable = contains(...
        signal_name_suffix_enable_string, {'Y', 'y', 'YES', 'Yes', 'yes'});
end

%% 区分CAN信号结构体是否为空执行不同操作步骤
if isempty(obj.CAN_signals_struct)
    
    % 将表格按照时间顺序升序重新排序，避免DR300数据记录板时间错位引起的原始数据排列顺序
    % 与时间精度补偿向量（按时间升序排列）错位的问题
    obj.data_collection = sortrows(obj.data_collection, 'time_axis');
    
    % 初始化inspector数据源，Dataset对象
    inspector_data_source = Simulink.SimulationData.Dataset;
    inspector_data_source.Name = obj.data_description;
    
    % 为表格数据集拆分构建时分秒三列信号，补偿时间轴精度
    obj = obj.Table_time_axis_compensate;
    
    % 将用于绘制sdi的时间轴改为从0开始的相对秒数
    if ~isempty(obj.data_collection.('time_axis'))
        time_axis = obj.data_collection.('time_axis') - ...
            obj.data_collection.('time_axis')(1);
    else
        time_axis = obj.data_collection.('time_axis');
    end
    
    % 获取数据集表格表头（信号名称）并剔除time_axis
    signal_namelist_original = obj.data_collection.Properties.VariableNames;
    signal_namelist = signal_namelist_original(~ismember(signal_namelist_original, ...
        'time_axis'));
    
    % 信号名称后缀使能有效时，将数据描述作为后缀补充到信号名称之后
    if signal_name_suffix_enable
        SDI_plot_signal_namelist = append(signal_namelist, '_', ...
            obj.data_description);
    else
        SDI_plot_signal_namelist = signal_namelist;
    end
    
    % 遍历数据集中除time_axis外的每个信号构造Timeseries对象并添加到Dataset中
    for index = 1 : size(signal_namelist, 2)
        temp_timeseries = timeseries(obj.data_collection.(signal_namelist{index}), ...
            time_axis, 'Name', SDI_plot_signal_namelist{index});
        inspector_data_source = inspector_data_source.addElement(temp_timeseries);
    end
    
    % 将Dataset对象加入Run对象
    obj.test_run.add(inspector_data_source);
    
else
    
    % 获取CAN信号结构体域名
    struct_fields = fieldnames(obj.CAN_signals_struct);
    
    % 针对CAN信号结构体成员域数量初始化时间轴cell
    time_axis = cell(size(struct_fields));
    
    % 遍历所有域名内的信号表格以创建SDI_Run
    for index1 = 1 : size(struct_fields, 1)
        
        % 仅针对非空CAN报文的数据进行绘图显示
        if isempty(obj.CAN_signals_struct.(struct_fields{index1}).signal_table)
            continue;
        end
        
        % 初始化inspector数据源，Dataset对象
        inspector_data_source = Simulink.SimulationData.Dataset;
        inspector_data_source.Name = obj.CAN_signals_struct.(...
            struct_fields{index1}).description;
        
        % 为CAN结构体数据集拆分构建时分秒三列信号，补偿时间轴精度
        obj = obj.CAN_struct_time_axis_compensate;
        
        % 将用于绘制sdi的时间轴改为从0开始的相对秒数
        if ~isempty(obj.CAN_signals_struct.(struct_fields{index1}).time_axis)
            time_axis{index1} = obj.CAN_signals_struct.(struct_fields{index1}).time_axis - ...
                obj.CAN_signals_struct.(struct_fields{index1}).time_axis(1);
        else
            time_axis{index1} = obj.CAN_signals_struct.(struct_fields{index1}).time_axis;
        end
        
        % 获取信号表格表头（信号名称）
        signal_namelist = obj.CAN_signals_struct.(...
            struct_fields{index1}).signal_table.Properties.VariableNames;
        
        % 信号名称后缀使能有效时，将数据描述作为后缀补充到信号名称之后
        if signal_name_suffix_enable
            SDI_plot_signal_namelist = append(signal_namelist, '_', ...
                obj.data_description);
        else
            SDI_plot_signal_namelist = signal_namelist;
        end
        
        % 遍历信号表格的每个信号构造Timeseries对象并添加到Dataset中
        for index2 = 1 : size(signal_namelist, 2)
            
            % 提取信号
            temp_signal = obj.CAN_signals_struct.(struct_fields{...
                index1}).signal_table.(signal_namelist{index2});
            
            % 如果提取出来的信号是cell，需要将其拆出cell
            if iscell(temp_signal)
                temp_signal = cell2mat(temp_signal);
            end
            
            % 构造时间序列
            temp_timeseries = timeseries(temp_signal, ...
                time_axis{index1}, 'Name', SDI_plot_signal_namelist{index2});
            
            % 将时间序列加入Dataset数据源
            inspector_data_source = inspector_data_source.addElement(temp_timeseries);
            
        end
        
        % 将Dataset对象加入Run对象
        obj.test_run.add(inspector_data_source);
        
    end
    
end

end
