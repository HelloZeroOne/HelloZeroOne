% 接收TCP连接ASCII码清单从table格式转换为XML格式
function [obj] = Receive_TCP_ASCII_list_table2XML_convert(obj)
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
% 新建指定清单标签节点并关联为XML节点的子节点
list_tag_node = obj.XML_document.createElement('receive_TCP_ASCII_list');
obj.XML_root_node.appendChild(list_tag_node);

% 数据源表格为空时报警并返回
if isempty(obj.sorted_receive_TCP_ASCII_list)
    warning('接收TCP连接ASCII码清单为空！');
    return;
end

% 遍历配置表格
for index = 1 : height(obj.sorted_receive_TCP_ASCII_list)
    
    % 新建当前表格条目对应的节点并关联为指定清单标签节点的子节点
    temp_node = obj.XML_document.createElement(...
        obj.sorted_receive_TCP_ASCII_list.('TCP_ASCII_head_name'){index});
    list_tag_node.appendChild(temp_node);

    % 新建当前表格条目各属性对应的节点
    package_order_index_node = obj.XML_document.createElement('package_order_index');
    package_order_index_node.appendChild(obj.XML_document.createTextNode(char(string(...
        obj.sorted_receive_TCP_ASCII_list.('package_order_index')(index)))));
    max_signal_number_node = obj.XML_document.createElement('max_signal_number');
    max_signal_number_node.appendChild(obj.XML_document.createTextNode(char(string(...
        obj.sorted_receive_TCP_ASCII_list.('max_signal_number')(index)))));
    
    % 将当前表格条目各属性对应的节点关联为当前表格条目对应的节点的子节点
    temp_node.appendChild(package_order_index_node);
    temp_node.appendChild(max_signal_number_node);

end

end
