% 端口临时数据变量清单从table格式转换为XML格式
function [obj] = Port_data_variable_list_table2XML_convert(obj)
%   1.输入参数：
%       (1)obj    SQLITEMANAGER类的一个实例
%   2.输出参数：
%       (1)obj    SQLITEMANAGER类的一个实例

%% 数据有效性检查
% XML文档为空时报错
if isempty(obj.XML_document)
    error('XML文档为空！');
end

% XML根节点为空时报错
if isempty(obj.XML_root_node)
    error('XML根节点为空！');
end

%% 格式转换
% 新建port_data_list节点并关联为XML节点的子节点
port_data_list_node = obj.XML_document.createElement('port_data_list');
obj.XML_root_node.appendChild(port_data_list_node);

% 数据源表格为空时报警并返回
if isempty(obj.sorted_port_data_variable_list)
    warning('端口临时数据变量清单为空！');
    return;
end

% 遍历配置表格
for index = 1 : height(obj.sorted_port_data_variable_list)
    
    % 新建当前表格条目对应的节点并关联为port_data_list节点的子节点
    temp_node = obj.XML_document.createElement(...
        obj.sorted_port_data_variable_list.('variable_name'){index});
    port_data_list_node.appendChild(temp_node);
    
    % 新建当前表格条目各属性对应的节点
    source_node = obj.XML_document.createElement('source');
    destination_list_node = obj.XML_document.createElement('destination_list');
    feature_parameter_node = obj.XML_document.createElement('feature_parameter');
    min_value_node = obj.XML_document.createElement('min_value');
    min_value_node.appendChild(obj.XML_document.createTextNode(...
        obj.sorted_port_data_variable_list.('min_value'){index}));
    max_value_node = obj.XML_document.createElement('max_value');
    max_value_node.appendChild(obj.XML_document.createTextNode(...
        obj.sorted_port_data_variable_list.('max_value'){index}));
 
    % 新建当前表格条目对应的数据名称注释，添加为当前表格条目对应的节点的子节点
    comment = obj.XML_document.createComment(...
        obj.sorted_port_data_variable_list.('data_name'){index});
    temp_node.appendChild(comment);
    
    % 将当前表格条目各属性对应的节点关联为当前表格条目对应的节点的子节点
    temp_node.appendChild(source_node);
    temp_node.appendChild(destination_list_node);
    temp_node.appendChild(feature_parameter_node);
    feature_parameter_node.appendChild(min_value_node);
    feature_parameter_node.appendChild(max_value_node);

end

end
