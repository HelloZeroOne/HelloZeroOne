% 数字量输入变量清单从table格式转换为XML格式
function [obj] = Digital_input_variable_list_table2XML_convert(obj)
%   1.输入参数：
%       (1)obj    SQLITEMANAGER类的一个实例
%   2.输出参数：
%       (1)obj    SQLITEMANAGER类的一个实例

%% 数据有效性检查
% 数据源表格为空时报警并返回
if isempty(obj.sorted_digital_input_variable_list)
    warning('数字量输入变量清单为空！');
    return;
end

% XML文档为空时报错
if isempty(obj.XML_document)
    error('XML文档为空！');
end

% XML根节点为空时报错
if isempty(obj.XML_root_node)
    error('XML根节点为空！');
end

%% 格式转换
% 获取port_data_list节点
port_data_list_node = obj.XML_root_node.getElementsByTagName(...
    'port_data_list').item(0);

% 遍历配置表格
for index = 1 : height(obj.sorted_digital_input_variable_list)
    
    % 获取变量名对应的port_data节点
    port_data_node = port_data_list_node.getElementsByTagName(...
        obj.sorted_digital_input_variable_list.('variable_name'){index}).item(0);
    
    % 获取port_data节点的指定方向标签节点
    direction_tag_node = port_data_node.getElementsByTagName('source').item(0);

    % 新建当前表格条目对应的节点并关联为对应指定方向标签节点的子节点
    temp_node = obj.XML_document.createElement(...
        obj.sorted_digital_input_variable_list.('DIO_name'){index});
    direction_tag_node.appendChild(temp_node);

    % 新建当前表格条目各属性对应的节点
    channel_node = obj.XML_document.createElement('channel');
    channel_node.appendChild(obj.XML_document.createTextNode(char(string(...
        obj.sorted_digital_input_variable_list.('channel')(index)))));
    function_valid_value_node = obj.XML_document.createElement('function_valid_value');
    function_valid_value_node.appendChild(obj.XML_document.createTextNode(char(string(...
        obj.sorted_digital_input_variable_list.('function_valid_value')(index)))));
    
    % 将当前表格条目各属性对应的节点关联为当前表格条目对应的节点的子节点
    temp_node.appendChild(channel_node);
    temp_node.appendChild(function_valid_value_node);

end

end
