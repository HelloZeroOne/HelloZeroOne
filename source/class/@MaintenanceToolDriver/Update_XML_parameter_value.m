% 更新XML文件中的参数值
function [] = Update_XML_parameter_value(obj, file_path, parameter_name, ...
    parameter_value)
%   1.输入参数：
%       (1)obj                MAINTENANCETOOLDRIVER类的一个实例
%       (2)file_path          XML文件的绝对路径，字符数组或字符串
%       (3)parameter_name     期望更新数值的参数名称，字符数组或字符串
%       (4)parameter_value    期望更新的参数数值
%   2.输出参数：无

% 尝试运行，如果失败则弹出提示框，便于在其他电脑上独立运行时排查问题
try
    LF_Update_XML_parameter_value(file_path, parameter_name, parameter_value);
catch
    uialert(obj.UI_figure, '更新XML文件中的参数值时出现异常.', '错误提示');
end

end

% ----- Local function UPDATE_XML_PARAMETER_VALUE -----
function [] = LF_Update_XML_parameter_value(file_path, parameter_name, ...
    parameter_value)
%   1.输入参数：
%       (1)file_path          XML文件的绝对路径，字符数组或字符串
%       (2)parameter_name     期望查询参数的名称，字符数组或字符串
%       (3)parameter_value    期望查询参数的数值
%   2.输出参数：无

% 读取XML文件
xDoc = xmlread(file_path);

% 获取根节点
xRoot = xDoc.getDocumentElement();

% 获取参数配置节点中的关键参数子节点
node_parameter = xRoot.getElementsByTagName(parameter_name).item(0);

% 修改关键参数子节点特征数据数值
node_parameter.setTextContent(num2str(parameter_value));

% 将修改后的xml对象写入xml文件
xmlwrite(file_path, xDoc);

end
