% 定制化SDI绘图显示试验数据曲线
function [obj] = Template_4_analyze(obj)
%   1.输入参数：
%       (1)obj    DATAANALYZER类的一个实例
%   2.输出参数：
%       (1)obj    DATAANALYZER类的一个实例

%% 引用java.awt.Robot类，并实例化，以便后续模拟键盘操作
import java.awt.Robot;
import java.awt.event.*;

robot = java.awt.Robot;

%% 初始化
% 关闭SDI画面，清空既有SDI数据、设置
Simulink.sdi.close;
Simulink.sdi.clear;
Simulink.sdi.clearPreferences;

% 截图确认信息
snapshot_confirm_string = "N";

% 以字符数组cell的形式载入SDI绘图配置表格
SDI_plot_config_table = readtable(obj.experiment_data_manager.SDI_plot_config_file_path, ...
    'PreserveVariableNames', true, 'ReadRowNames', true, 'Format', 'auto');

% SDI绘图配置表格被修改过的状态
SDI_plot_config_table_modified_status = false;

% 将表格按照时间顺序升序重新排序，避免DR300数据记录板时间错位引起的原始数据排列顺序
% 与时间精度补偿向量（按时间升序排列）错位的问题
obj.data_collection = sortrows(obj.data_collection, 'time_axis');

%% 将时间轴换算成绝对时间，分割为时、分、秒三个信号，以便在sdi中定位时间点
if ~isempty(obj.data_collection.('time_axis'))
    
    % 为表格数据集拆分构建时分秒三列信号，补偿时间轴精度
    obj = obj.Table_time_axis_compensate;
    
else
    
    % 警告并返回
    warning('原始数据为空！');
    return;
    
end

%% 计算从当天午夜零点到某时刻的秒数，便于筛选起始、结束时间
today_time = obj.data_collection.('时间轴-时') * 60 * 60 + ...
    obj.data_collection.('时间轴-分') * 60 + obj.data_collection.('时间轴-秒');

%% 获取数据集表格除time_axis外的表头信号名称
signal_namelist_original = obj.data_collection.Properties.VariableNames;
signal_namelist = signal_namelist_original(~ismember(signal_namelist_original, 'time_axis'));

%% 遍历所有定制绘图配置（前2行是曲线颜色、线形配置，跳过）
for index1 = 3 : height(SDI_plot_config_table)
    
    % 截图不满足要求时，重复绘图
    while matches(snapshot_confirm_string, {'N', 'n', 'NO', 'No', 'no'})
        
        % 根据清除上一轮测试数据SDI绘图使能状态执行不同的操作
        if obj.experiment_data_manager.clear_previous_SDI_plot_enable
            
            % 清空上一轮的绘图
            Simulink.sdi.clearAllSubPlots;
            
            % 信号的名称之后不加后缀
            SDI_plot_signal_namelist = signal_namelist;
            
        else
            
            % 在每个信号的名称之后加测试名称作为后缀，以区分不同测试的曲线
            SDI_plot_signal_namelist = append(signal_namelist, '_', ...
                SDI_plot_config_table.Properties.RowNames{index1});
            
        end
        
        % 创建Simulink.sdi.Run对象
        obj.test_run = Simulink.sdi.Run.create;
        obj.test_run.Name = SDI_plot_config_table.Properties.RowNames{index1};
        obj.test_run.Description = ['分析', SDI_plot_config_table.Properties.RowNames{index1}];
        
        % 创建inspector数据源，Dataset对象
        inspector_data_source = Simulink.SimulationData.Dataset;
        inspector_data_source.Name = obj.test_run.Name;
        
        % 以字符数组cell的形式载入表格
        SDI_plot_config_table = readtable(...
            obj.experiment_data_manager.SDI_plot_config_file_path, ...
            'PreserveVariableNames', true, 'ReadRowNames', true, 'Format', 'auto');
        
        % 根据任务代号截取首次出现的连续索引数据用于显示
        temp_index1 = 1 : height(obj.data_collection);
        match_result1 = ismember(obj.data_collection.('task_ID'), ...
            double(string(SDI_plot_config_table{...
            SDI_plot_config_table.Properties.RowNames{index1}, '任务代号'})));
        if isempty(match_result1)
            warning('第%d个测试项任务代号与原始数据不匹配！', index1);
            return;
        end
        temp_index2 = [-1, temp_index1(match_result1), length(temp_index1) + 2];
        match_result2 = find(diff(temp_index2) > 1);
        interested_data_collection = obj.data_collection(...
            temp_index2(match_result2(1) + 1) : temp_index2(match_result2(2)), :);
        
        % 根据任务代号截取当天时间用于截取数据时间
        temp_today_time = today_time(temp_index2(...
            match_result2(1) + 1) : temp_index2(match_result2(2)), :);
        
        % 将起始时间换算为相对秒数
        start_time_string = SDI_plot_config_table{...
            SDI_plot_config_table.Properties.RowNames{index1}, '起始时间'};
        absolute_start_time = datetime(string(start_time_string), ...
            'InputFormat', 'yyyy-MM-dd HH:mm:ss');
        [start_hour, start_minute, start_second] = hms(absolute_start_time);
        start_time_second = start_hour * 60 * 60 + start_minute * 60 + start_second;
        
        % 如果表格设置的起始时间小于任务代号筛选过后的数据起始时间，或者大于任务代号
        % 筛选过后的数据结束时间，修改表格设置的起始时间为任务代号筛选过后的数据起始时间
        if interested_data_collection.('time_axis')(1) > posixtime(absolute_start_time) || ...
                interested_data_collection.('time_axis')(end) < posixtime(absolute_start_time)
            temp_absolute_time = datetime(interested_data_collection.('time_axis')(1), ...
                'ConvertFrom', 'posixtime', 'Format', 'HH:mm:ss.SSS');
            [temp_hour, temp_minute, temp_second] = hms(temp_absolute_time);
            start_time_second = temp_hour * 60 * 60 + temp_minute * 60 + temp_second;
            temp_absolute_time = datetime(interested_data_collection.('time_axis')(1), ...
                'ConvertFrom', 'posixtime');
            SDI_plot_config_table{SDI_plot_config_table.Properties.RowNames{...
                index1}, '起始时间'} = cellstr(datestr(temp_absolute_time, ...
                'yyyy-mm-dd HH:MM:ss'));
            SDI_plot_config_table_modified_status = true;
        end
        
        % 将结束时间换算为相对秒数
        end_time_string = SDI_plot_config_table{...
            SDI_plot_config_table.Properties.RowNames{index1}, '结束时间'};
        absolute_end_time = datetime(string(end_time_string), ...
            'InputFormat', 'yyyy-MM-dd HH:mm:ss');
        [end_hour, end_minute, end_second] = hms(absolute_end_time);
        end_time_second = end_hour * 60 * 60 + end_minute * 60 + end_second;
        
        % 如果表格设置的结束时间大于任务代号筛选过后的数据结束时间，或者小于任务代号
        % 筛选过后的数据起始时间，修改表格设置的结束时间为任务代号筛选过后的数据结束时间
        if interested_data_collection.('time_axis')(end) < posixtime(absolute_end_time) || ...
                interested_data_collection.('time_axis')(1) > posixtime(absolute_end_time)
            temp_absolute_time = datetime(interested_data_collection.('time_axis')(end), ...
                'ConvertFrom', 'posixtime', 'Format', 'HH:mm:ss.SSS');
            [temp_hour, temp_minute, temp_second] = hms(temp_absolute_time);
            end_time_second = temp_hour * 60 * 60 + temp_minute * 60 + temp_second;
            temp_absolute_time = datetime(interested_data_collection.('time_axis')(end), ...
                'ConvertFrom', 'posixtime');
            SDI_plot_config_table{SDI_plot_config_table.Properties.RowNames{...
                index1}, '结束时间'} = cellstr(datestr(temp_absolute_time, ...
                'yyyy-mm-dd HH:MM:ss'));
            SDI_plot_config_table_modified_status = true;
        end
        
        % 根据起止时间截取数据用于显示
        display_data_collection = interested_data_collection(...
            start_time_second <= temp_today_time & ...
            end_time_second >= temp_today_time, :);
        
        % 将用于绘制sdi的时间轴改为从0开始的相对秒数
        if isempty(display_data_collection)
            warning('设置的起止时间不在所选数据记录时间范围内！')
            return;
        else
            time_axis = display_data_collection.('time_axis') - ...
                display_data_collection.('time_axis')(1);
        end
        
        % 遍历显示数据集中除time_axis外(从第2列开始)的每个信号构造Timeseries对象并添加到Dataset中
        for index2 = 1 : size(signal_namelist, 2)
            temp_timeseries = timeseries(display_data_collection.(signal_namelist{index2}), ...
                time_axis, 'Name', SDI_plot_signal_namelist{index2});
            inspector_data_source = addElement(inspector_data_source, temp_timeseries);
        end
        
        % 将Dataset对象加入Run对象
        obj.test_run.add(inspector_data_source);
        
        % 切分SDI子坐标轴区域
        Simulink.sdi.setSubPlotLayout(str2double(string(SDI_plot_config_table{index1, ...
            '子图行数'})), str2double(string(SDI_plot_config_table{index1, '子图列数'})));
        
        % 获取试验数据显示配置模板中设定为需要展示的信号名称列表,遍历设置信号曲线颜色、线形，从第6列开始
        plotted_signal_names = SDI_plot_config_table(:, 6 : end).Properties.VariableNames(...
            ~matches(SDI_plot_config_table{index1, 6 : end}, {'/', ''}));
        for index2 = 1 : length(plotted_signal_names)
            
            % 清除上一轮测试数据SDI绘图使能状态有效时，直接获取当前信号对象，
            % 否则为已绘制信号名称拼接后缀再获取当前信号对象
            if obj.experiment_data_manager.clear_previous_SDI_plot_enable
                temp_signal = getSignalsByName(obj.test_run, plotted_signal_names{index2});
            else
                temp_signal = getSignalsByName(obj.test_run, append(...
                    plotted_signal_names{index2}, '_', ...
                    SDI_plot_config_table.Properties.RowNames{index1}));
            end
            
            % 清除上一轮测试数据SDI绘图使能状态有效时，根据SDI绘图配置表格参数设置曲线颜色、线型
            if obj.experiment_data_manager.clear_previous_SDI_plot_enable
                
                % 将16进制颜色码转换为RGB值，再归一化到0~1之间，设定为信号曲线颜色
                temp_signal.LineColor = hex2dec(string(regexp(string(SDI_plot_config_table{...
                    '曲线颜色', plotted_signal_names{index2}}), '\w{2}', 'match'))) / 255;
                
                % 设定信号曲线线形
                temp_signal.LineDashed = string(SDI_plot_config_table{'曲线线形', ...
                    plotted_signal_names{index2}});
                
            end
            
            % 在指定子图上绘制曲线
            [row, column] = ind2sub([str2double(string(SDI_plot_config_table{index1, ...
                '子图行数'})), str2double(string(SDI_plot_config_table{index1, '子图列数'}))], ...
                str2double(string(SDI_plot_config_table{index1, plotted_signal_names{index2}})));
            plotOnSubPlot(temp_signal, row, column, true);
            
        end
        
        % 如果SDI绘图配置表格被修改过，将修改过的内容写入excel文件，并重置修改状态以便下个循环使用
        if SDI_plot_config_table_modified_status
            writetable(SDI_plot_config_table(index1, :), ...
                obj.experiment_data_manager.SDI_plot_config_file_path, ...
                'WriteRowNames', true, 'PreserveFormat', true, ...
                'WriteVariableNames', false, 'Range', ['A', ...
                num2str(index1 + 1)], 'AutoFitWidth', false);
            SDI_plot_config_table_modified_status = false;
        end
        
        % 打开SDI画面展示波形
        Simulink.sdi.view;
        
        % 模拟键盘空格键以实现曲线自适应铺满坐标轴显示范围
        % 等待2s，SDI画面完全显现并聚焦，此后模拟键盘输入才能得到正确的响应
        pause(2);
        robot.keyPress(java.awt.event.KeyEvent.VK_SPACE);
        robot.keyRelease(java.awt.event.KeyEvent.VK_SPACE);
        
        % 将绘图复制到剪切板，等待手动确认
        % 等待2s，SDI画面完全刷新，此后才能截取到最新的图像
        pause(2);
        Simulink.sdi.snapshot('to', 'clipboard');
        
        % 确认绘图是否满意
        question = sprintf('->绘图%d截图时间段是否准确（Y/N） [回车默认Y]: ', index1 - 2);
        snapshot_confirm_string = input(question, 's');
        if isempty(snapshot_confirm_string)
            snapshot_confirm_string = "Y";
        end
        
        % 如果绘图截图时间段不合适，弹出时间显示配置表格，修改后重新绘图
        if matches(snapshot_confirm_string, {'N', 'n', 'NO', 'No', 'no'})
            winopen(obj.experiment_data_manager.SDI_plot_config_file_path);
            edit_status = input(['->是否已经编辑完SDI绘图显示配置文件' ...
                '并且关闭（Y/N） [回车默认Y]: '], 's');
            if isempty(edit_status)
                edit_status = 'Y';
            end
            if ~matches(edit_status, {'Y', 'y', 'YES', 'Yes', 'yes'})
                warning('请优先编辑完SDI绘图显示配置文件并且关闭！');
                return;
            end
        end
        
    end
    
    % 将截图确认信息改为N，以便下个循环能正常绘图
    snapshot_confirm_string = "N";
    
end

%% 关闭SDI画面，清空既有SDI数据、设置，提示分析完成
Simulink.sdi.close;
Simulink.sdi.clear;
Simulink.sdi.clearPreferences;
fprintf('***定制化SDI绘图分析完成***\n');

end
