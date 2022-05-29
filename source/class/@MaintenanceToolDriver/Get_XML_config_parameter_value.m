% 获取XML文件中的配置参数值
function parameter_value = Get_XML_config_parameter_value(obj, file_path, ...
    parent_node_name, parameter_name)
%   1.输入参数：
%       (1)obj                 MAINTENANCETOOLDRIVER类的一个实例
%       (2)file_path           XML文件的绝对路径，字符数组
%       (3)parent_node_name    期望查询参数隶属的父节点名称，字符数组
%       (4)parameter_name      期望查询参数的名称，字符数组
%   2.输出参数：
%       (1)parameter_value    期望查询参数的数值

% 尝试运行，如果失败则弹出提示框，便于在其他电脑上独立运行时排查问题
try
    parameter_value = LF_Get_XML_config_parameter_value(file_path, ...
        parent_node_name, parameter_name);
catch
    uialert(obj.UI_figure, '获取XML文件中的配置参数值时出现异常.', '错误提示');
end

end

% ----- Local function GET_XML_CONFIG_PARAMETER_VALUE -----
function parameter_value = LF_Get_XML_config_parameter_value(file_path, ...
    parent_node_name, parameter_name)
%   1.输入参数：
%       (1)file_path           XML文件的绝对路径，字符数组或字符串
%       (2)parent_node_name    期望查询参数隶属的属性名称，字符数组
%       (3)parameter_name      期望查询参数的名称，字符数组或字符串
%   2.输出参数：
%       (1)parameter_value     期望查询参数的数值

% 读取XML文件
xDoc = xmlread(file_path);

% 获取根节点
xRoot = xDoc.getDocumentElement();

% 获取参数配置节点
node_control_parameter_config = xRoot.getElementsByTagName(parent_node_name).item(0);

% 获取参数配置节点中的关键参数子节点
node_parameter = node_control_parameter_config.getElementsByTagName(...
    parameter_name).item(0);

% 获取关键参数子节点特征数据数值
parameter_value = str2double(char(node_parameter.getTextContent()));

end
