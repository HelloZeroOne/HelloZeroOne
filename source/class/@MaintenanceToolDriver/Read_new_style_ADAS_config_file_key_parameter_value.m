% 读取新风格ADASCFG文件中的关键参数值
function key_parameter = Read_new_style_ADAS_config_file_key_parameter_value(...
    obj, file_path)
%   1.输入参数：
%       (1)obj              MAINTENANCETOOLDRIVER类的一个实例
%       (2)file_path        ADASCFG文件的绝对路径，字符数组或字符串
%   2.输出参数：
%       (1)key_parameter    期望查询关键参数的数值，结构体

% 尝试运行，如果失败则弹出提示框，便于在其他电脑上独立运行时排查问题
try
    key_parameter = LF_read_new_style_ADAS_config_file_key_parameter_value(file_path);
catch
    uialert(obj.UI_figure, '读取新风格ADASCFG文件中的关键参数值时出现异常.', '错误提示');
end

end

% ----- Local function READ_NEW_STYLE_ADAS_CONFIG_FILE_KEY_PARAMETER_VALUE -----
function key_parameter = LF_read_new_style_ADAS_config_file_key_parameter_value(file_path)
%   1.输入参数：
%       (1)file_path        ADASCFG文件的绝对路径，字符数组或字符串
%   2.输出参数：
%       (1)key_parameter    期望查询关键参数的数值，结构体

% 读取XML文件
xDoc = xmlread(file_path);

% 获取根节点
xRoot = xDoc.getDocumentElement();

% 获取参数配置节点
node_control_parameter_config = xRoot.getElementsByTagName('control_parameter_config').item(0);
node_YongXiu_patch_config = xRoot.getElementsByTagName('YongXiu_patch_config').item(0);

% 获取参数配置节点中的关键参数子节点
node_A0_offset = node_control_parameter_config.getElementsByTagName('A0_offset').item(0);
node_A1_offset = node_control_parameter_config.getElementsByTagName('A1_offset').item(0);
node_steering_wheel_angle_offset = node_control_parameter_config.getElementsByTagName(...
    'steering_wheel_angle_offset').item(0);
node_A0_offset_step2 = node_YongXiu_patch_config.getElementsByTagName('A0_offset_step2').item(0);
node_steering_wheel_angle_threshold = node_YongXiu_patch_config.getElementsByTagName(...
    'steering_wheel_angle_threshold').item(0);

% 获取关键参数子节点特征数据数值
key_parameter.A0_offset = str2double(node_A0_offset.getTextContent());
key_parameter.A1_offset = str2double(node_A1_offset.getTextContent());
key_parameter.steering_wheel_angle_offset = str2double(...
    node_steering_wheel_angle_offset.getTextContent());
key_parameter.A0_offset_step2 = str2double(node_A0_offset_step2.getTextContent());
key_parameter.steering_wheel_angle_threshold = str2double(...
    node_steering_wheel_angle_threshold.getTextContent());

end
