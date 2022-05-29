% 发送TRDP过程数据清单从table格式转换为XML格式
function [obj] = Send_TRDP_process_data_list_table2XML_convert(obj)
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
list_tag_node = obj.XML_document.createElement('send_TRDP_process_data_list');
obj.XML_root_node.appendChild(list_tag_node);

% 数据源表格为空时报警并返回
if isempty(obj.sorted_send_TRDP_process_data_list)
    warning('发送TRDP过程数据清单为空！');
    return;
end

% 遍历配置表格
for index = 1 : height(obj.sorted_send_TRDP_process_data_list)
    
    % 新建当前表格条目对应的节点并关联为指定清单标签节点的子节点
    temp_node = obj.XML_document.createElement(...
        obj.sorted_send_TRDP_process_data_list.('TRDP_process_data_name'){index});
    list_tag_node.appendChild(temp_node);

    % 新建当前表格条目各属性对应的节点
    COM_ID_node = obj.XML_document.createElement('COM_ID');
    COM_ID_node.appendChild(obj.XML_document.createTextNode(char(string(...
        obj.sorted_send_TRDP_process_data_list.('COM_ID')(index)))));
    DLC_node = obj.XML_document.createElement('length');
    DLC_node.appendChild(obj.XML_document.createTextNode(char(string(...
        obj.sorted_send_TRDP_process_data_list.('byte_length')(index)))));
    enable_record_node = obj.XML_document.createElement('enable_record');
    if false == obj.sorted_send_TRDP_process_data_list.('record_enable')(index)
        enable_record_node.appendChild(obj.XML_document.createTextNode('0'));
    else
        enable_record_node.appendChild(obj.XML_document.createTextNode('1'));
    end
    
    % 将当前表格条目各属性对应的节点关联为当前表格条目对应的节点的子节点
    temp_node.appendChild(COM_ID_node);
    temp_node.appendChild(DLC_node);
    temp_node.appendChild(enable_record_node);

end

end
