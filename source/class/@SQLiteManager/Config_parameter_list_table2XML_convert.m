% 配置参数清单从table格式转换为XML格式
function [obj] = Config_parameter_list_table2XML_convert(obj)
%   1.输入参数：
%       (1)obj    SQLITEMANAGER类的一个实例
%   2.输出参数：
%       (1)obj    SQLITEMANAGER类的一个实例

%% 数据有效性检查
% 数据源表格为空时报警并返回
if isempty(obj.sorted_config_parameter_list)
    warning('配置参数清单为空！');
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
% 遍历配置表格
for index = 1 : height(obj.sorted_config_parameter_list)
    
    % 如果隶属参数集还没被创建为XML文档元素节点，新建以之命名的节点
    if 0 == obj.XML_root_node.getElementsByTagName(...
            obj.sorted_config_parameter_list.('tag'){index}).getLength
        
        % 新建节点并关联为XML根节点的子节点
        new_belong_to_section_node = obj.XML_document.createElement(...
            obj.sorted_config_parameter_list.('tag'){index});
        new_belong_to_section_node.setAttribute('type', 'parameter_config');
        obj.XML_root_node.appendChild(new_belong_to_section_node);
    end
    
    % 获取当前表格条目隶属参数集对应的节点
    belong_to_section_node = obj.XML_root_node.getElementsByTagName(...
        obj.sorted_config_parameter_list.('tag'){index}).item(0);
    
    % 新建当前表格条目对应的节点并关联为隶属参数集节点的子节点
    temp_node = obj.XML_document.createElement(...
        obj.sorted_config_parameter_list.('parameter_name'){index});
    temp_node.appendChild(obj.XML_document.createTextNode(char(string(...
        str2double(obj.sorted_config_parameter_list.('default_value'){index})))));
    belong_to_section_node.appendChild(temp_node);
    
end

end
