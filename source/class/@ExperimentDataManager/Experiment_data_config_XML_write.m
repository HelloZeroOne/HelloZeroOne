% 写入试验数据配置XML文件
function [] = Experiment_data_config_XML_write(obj)
%   1.输入参数：
%       (1)obj    EXPERIMENTDATAMANAGER类的一个实例
%   2.输出参数：无

%% 初始化
XML_file_author  = 'zxr';   % XML配置文件作者
XML_file_version = '0.0.1'; % XML配置文件版本

%% 创建XML文档节点
doc_node = matlab.io.xml.dom.Document('experiment_data_config');
doc_node.XMLStandalone = true;
experiment_data_config_node = doc_node.getDocumentElement;

% 设置文件属性
experiment_data_config_node.setAttribute('author', XML_file_author);
experiment_data_config_node.setAttribute('version', XML_file_version);

%% 根据对象属性依次创建文档节点下的子节点
% 获取对象的全部属性
properties_array = properties(obj);

% 对象无属性时提示异常并返回，否则遍历属性数组创建子节点
if isempty(properties_array)
    warning('EXPERIMENTDATAMANAGER类的对象中无属性');
    return;
else
    for index1 = 1 : length(properties_array)
        
        % 对于非字符串型的属性值，强制类型转换为string
        if isstring(obj.(properties_array{index1}))
            stored_content = obj.(properties_array{index1});
        else
            stored_content = string(obj.(properties_array{index1}));
        end
        
        % 创建子节点
        child_node = doc_node.createElement(properties_array{index1});
        
        % 对于有效数量大于1的属性，新建二级子节点以区别其他属性存储
        if 1 < size(obj.(properties_array{index1}), 1)
            
            % 遍历对当前属性的每条有效记录
            for index2 = 1 : size(obj.(properties_array{index1}), 1)
                
                % 新建二级子节点
                level_2_child_node = doc_node.createElement([...
                    properties_array{index1}, num2str(index2)]);
                
                % 存储对应内容
                level_2_child_node.appendChild(doc_node.createTextNode(...
                    stored_content(index2, :)));
                
                % 关联为当前属性子节点的子节点
                child_node.appendChild(level_2_child_node);
                
            end
            
        else
            
            % 子节点附加文本存储内容
            child_node.appendChild(doc_node.createTextNode(stored_content));
            
        end
        
        % 将子节点关联到上一级节点之下
        experiment_data_config_node.appendChild(child_node);
        
    end
end

%% 输出XML配置文件
writer = matlab.io.xml.dom.DOMWriter;
writer.Configuration.FormatPrettyPrint = true;
writeToFile(writer, doc_node, obj.experiment_data_config_XML_file_path);

end
