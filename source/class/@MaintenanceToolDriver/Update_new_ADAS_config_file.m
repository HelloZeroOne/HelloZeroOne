% 更新新版ADASCFG文件
function [] = Update_new_ADAS_config_file(obj, file_path, key_parameter)
%   1.输入参数：
%       (1)obj              MAINTENANCETOOLDRIVER类的一个实例
%       (2)file_path        ADASCFG文件的绝对路径，字符数组或字符串
%       (3)key_parameter    期望更新的关键参数数值，结构体
%   2.输出参数：无

% 尝试运行，如果失败则弹出提示框，便于在其他电脑上独立运行时排查问题
try
    LF_Update_new_ADAS_config_file(file_path, key_parameter);
catch
    uialert(obj.UI_figure, '更新新版ADASCFG文件时出现异常.', '错误提示');
end

end

% ----- Local function UPDATE_NEW_ADAS_CONFIG_FILE -----
function [] = LF_Update_new_ADAS_config_file(file_path, key_parameter)
%   1.输入参数：
%       (1)file_path        ADASCFG文件的绝对路径，字符数组或字符串
%       (2)key_parameter    期望更新的关键参数数值，结构体
%   2.输出参数：无

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

% 修改关键参数子节点特征数据数值
node_A0_offset.setTextContent(num2str(key_parameter.A0_offset));
node_A1_offset.setTextContent(num2str(key_parameter.A1_offset));
node_steering_wheel_angle_offset.setTextContent(num2str(...
    key_parameter.steering_wheel_angle_offset));
node_A0_offset_step2.setTextContent(num2str(key_parameter.A0_offset_step2));
node_steering_wheel_angle_threshold.setTextContent(num2str(...
    key_parameter.steering_wheel_angle_threshold));

% 将修改后的xml对象写入xml文件
xmlwrite(file_path, xDoc);

end
