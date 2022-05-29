% 将TRDP协议导入数据字典
function [obj] = SLDD_TRDP_import(obj)
%   1.输入参数：
%       (1)obj    SLDDMANAGER类的一个实例
%   2.输出参数：
%       (1)obj    SLDDMANAGER类的一个实例

%% TRDP协议管理器为空时不执行导入数据字典操作
if isempty(obj.TRDP_manager)
    warning('***未识别到有效的TRDP协议***');
    return;
end

%% 将数据字典管理器中的全部TRDP协议信息打印到数据字典配置专用m文件中
% 打开数据字典配置专用m文件
obj = obj.Open_data_import_file;

% 打印输入TRDP高层总线定义信息
input_bus_name = sprintf('MC%d_InputTRDP', obj.TRDP_manager.carriage_index);
input_bus_comment = input_bus_name;
obj.TRDP_higher_bus_definition_print(input_bus_name, input_bus_comment, ...
    obj.TRDP_manager.input_TRDP_process_data_list);

% 打印输入TRDP过程数据总线定义信息
obj.TRDP_process_data_bus_definition_print(...
    obj.TRDP_manager.input_TRDP_process_data_list);

% 打印输入TRDP配置总线定义信息
obj.TRDP_config_bus_definition_print(...
    obj.TRDP_manager.input_TRDP_process_data_list);

% 打印输入TRDP配置数值结构体定义信息
obj.TRDP_config_value_struct_definition_print(...
    obj.TRDP_manager.input_TRDP_process_data_list);

% 打印输入TRDP信号默认值结构体定义信息
obj.TRDP_signal_default_value_struct_definition_print(...
    obj.TRDP_manager.input_TRDP_process_data_list);

% 打印输出TRDP高层总线定义信息
output_bus_name = sprintf('MC%d_OutputTRDP', obj.TRDP_manager.carriage_index);
output_bus_comment = output_bus_name;
obj.TRDP_higher_bus_definition_print(output_bus_name, output_bus_comment, ...
    obj.TRDP_manager.output_TRDP_process_data_list);

% 打印输出TRDP过程数据总线定义信息
obj.TRDP_process_data_bus_definition_print(...
    obj.TRDP_manager.output_TRDP_process_data_list);

% 打印输出TRDP配置总线定义信息
obj.TRDP_config_bus_definition_print(...
    obj.TRDP_manager.output_TRDP_process_data_list);

% 打印输出TRDP配置数值结构体定义信息
obj.TRDP_config_value_struct_definition_print(...
    obj.TRDP_manager.output_TRDP_process_data_list);

% 打印输出TRDP信号默认值结构体定义信息
obj.TRDP_signal_default_value_struct_definition_print(...
    obj.TRDP_manager.output_TRDP_process_data_list);

% 关闭数据字典配置专用m文件
obj.Close_data_import_file;

%% 将数据字典配置专用m文件内容导入数据字典
% 打开数据字典
dictionary_object = Simulink.data.dictionary.open(obj.SLDD_file_path);

% 获取数据字典中的设计数据
design_data_object = getSection(dictionary_object, 'Design Data');

% 将数据字典配置专用m文件内容导入数据字典
importFromFile(design_data_object, obj.data_import_file_path, ...
    'existingVarsAction', 'overwrite');

% 保存并关闭数据字典
saveChanges(dictionary_object);
close(dictionary_object);

% 提示更新数据字典成功
[~, dictionary_name, ~] = fileparts(obj.SLDD_file_path);
fprintf('***更新数据字典【%s】的【MC%d端】TRDP协议成功***\n', dictionary_name, ...
    obj.TRDP_manager.carriage_index);

end
