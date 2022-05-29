% 发送CAN消息清单从table格式转换为XML格式
function [obj] = Send_CAN_message_list_table2XML_convert(obj)
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
list_tag_node = obj.XML_document.createElement('send_CAN_message_list');
obj.XML_root_node.appendChild(list_tag_node);

% 数据源表格为空时报警并返回
if isempty(obj.sorted_send_CAN_message_list)
    warning('发送CAN消息清单为空！');
    return;
end

% 遍历配置表格
for index = 1 : height(obj.sorted_send_CAN_message_list)
    
    % 新建当前表格条目对应的节点并关联为指定清单标签节点的子节点
    temp_node = obj.XML_document.createElement(...
        obj.sorted_send_CAN_message_list.('CAN_message_name'){index});
    list_tag_node.appendChild(temp_node);

    % 新建当前表格条目各属性对应的节点
    CAN_ID_node = obj.XML_document.createElement('CAN_ID');
    CAN_ID_node.appendChild(obj.XML_document.createTextNode(...
        obj.sorted_send_CAN_message_list.('CAN_ID'){index}));
    slot_node = obj.XML_document.createElement('slot');
    slot_node.appendChild(obj.XML_document.createTextNode(char(string(...
        obj.sorted_send_CAN_message_list.('slot')(index)))));
    channel_node = obj.XML_document.createElement('channel');
    channel_node.appendChild(obj.XML_document.createTextNode(char(string(...
        obj.sorted_send_CAN_message_list.('channel')(index)))));
    DLC_node = obj.XML_document.createElement('DLC');
    DLC_node.appendChild(obj.XML_document.createTextNode(char(string(...
        obj.sorted_send_CAN_message_list.('DLC')(index)))));
    record_start_byte_node = obj.XML_document.createElement('record_start_byte');
    record_start_byte_node.appendChild(obj.XML_document.createTextNode(char(string(...
        obj.sorted_send_CAN_message_list.('record_start_byte')(index)))));
    
    % 将当前表格条目各属性对应的节点关联为当前表格条目对应的节点的子节点
    temp_node.appendChild(CAN_ID_node);
    temp_node.appendChild(slot_node);
    temp_node.appendChild(channel_node);
    temp_node.appendChild(DLC_node);
    temp_node.appendChild(record_start_byte_node);

end

end
