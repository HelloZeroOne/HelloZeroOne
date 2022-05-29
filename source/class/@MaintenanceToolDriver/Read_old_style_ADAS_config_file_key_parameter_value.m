% 读取老风格ADASCFG文件中的关键参数值
function key_parameter = Read_old_style_ADAS_config_file_key_parameter_value(...
    obj, file_path)
%   1.输入参数：
%       (1)obj              MAINTENANCETOOLDRIVER类的一个实例
%       (2)file_path        ADASCFG文件的绝对路径，字符数组或字符串
%   2.输出参数：
%       (1)key_parameter    期望查询关键参数的数值，结构体

% 尝试运行，如果失败则弹出提示框，便于在其他电脑上独立运行时排查问题
try
    key_parameter = LF_read_old_style_ADAS_config_file_key_parameter_value(...
        file_path, obj.tram_type_index);
catch
    uialert(obj.UI_figure, '读取老风格ADASCFG文件中的关键参数值时出现异常.', '错误提示');
end

end

% ----- Local function READ_OLD_STYLE_ADAS_CONFIG_FILE_KEY_PARAMETER_VALUE -----
function key_parameter = LF_read_old_style_ADAS_config_file_key_parameter_value(...
    file_path, tram_type_index)
%   1.输入参数：
%       (1)file_path          ADASCFG文件的绝对路径，字符数组或字符串
%       (2)tram_type_index    车型索引，double
%   2.输出参数：
%       (1)key_parameter      期望查询关键参数的数值，结构体

% 读取XML文件
xDoc = parseXML(file_path);

% 解析关键参数值
if 1 == tram_type_index || 2 == tram_type_index % 株洲车
    key_parameter.A0_offset = str2double(Previous_config_file_parameter_value_get(xDoc, ...
        'Camera1ErrorCorrection', 'LowSpeedA0Offset'));
    key_parameter.A1_offset = str2double(Previous_config_file_parameter_value_get(xDoc, ...
        'Camera1ErrorCorrection', 'A1Offset'));
    key_parameter.steering_wheel_angle_offset = str2double(Previous_config_file_parameter_value_get(xDoc, ...
        'SteeringWheelErrorCorrection', 'SteeringWheelAngleOffset'));
    key_parameter.A0_offset_step2 = 0;
    key_parameter.steering_wheel_angle_threshold = 0;
elseif 3 == tram_type_index % 永修车
    key_parameter.A0_offset = str2double(Previous_config_file_parameter_value_get(xDoc, ...
        'Camera1ErrorCorrection', 'LowSpeedA0Offset'));
    key_parameter.A1_offset = str2double(Previous_config_file_parameter_value_get(xDoc, ...
        'Camera1ErrorCorrection', 'A1Offset'));
    key_parameter.steering_wheel_angle_offset = str2double(Previous_config_file_parameter_value_get(xDoc, ...
        'SteeringWheelErrorCorrection', 'SteeringWheelAngleOffset'));
    key_parameter.A0_offset_step2 = str2double(Previous_config_file_parameter_value_get(xDoc, ...
        'Camera1ErrorCorrectionStep2', 'LowSpeedA0Offset'));
    key_parameter.steering_wheel_angle_threshold = str2double(Previous_config_file_parameter_value_get(xDoc, ...
        'Camera1ErrorCorrectionStep2', 'ThresholdSteeringWheelAngle'));
elseif 4 == tram_type_index % 宜宾车
    key_parameter.A0_offset = str2double(Previous_config_file_parameter_value_get(xDoc, ...
        'Camera1ErrorCorrection', 'A0Offset'));
    key_parameter.A1_offset = str2double(Previous_config_file_parameter_value_get(xDoc, ...
        'Camera1ErrorCorrection', 'A1Offset'));
    key_parameter.steering_wheel_angle_offset = str2double(Previous_config_file_parameter_value_get(xDoc, ...
        'SteeringWheelErrorCorrection', 'SteeringWheelAngleOffset'));
    key_parameter.A0_offset_step2 = 0;
    key_parameter.steering_wheel_angle_threshold = 0;
end

end

% 从老配置文件中提取参数数值
function parameter_value = Previous_config_file_parameter_value_get(xmlDoc, element, attribute)
%   1.输入参数：
%       (1)xmlDoc             XML文档节点
%       (2)element            元素名称，字符数组或字符串
%       (3)attribute          属性名称，字符数组或字符串
%   2.输出参数：
%       (1)parameter_value    期望查询参数的数值，字符串

index1 = strcmp({xmlDoc.Children(:).Name}, element) == 1;
temp = xmlDoc.Children(index1);
index2 = strcmp({temp.Attributes(:).Name}, attribute) == 1;
parameter_value = temp.Attributes(index2).Value;

end
