% 读取试验数据配置XML文件
function [obj] = Experiment_data_config_XML_read(obj)
%   1.输入参数：
%       (1)obj    EXPERIMENTDATAMANAGER类的一个实例
%   2.输出参数：
%       (1)obj    EXPERIMENTDATAMANAGER类的一个实例

%% 初始化
obj_number = length(obj);

%% 遍历所有实例，解析XML内容
for index1 = 1 :  obj_number
    
    % 读取XML文件
    doc_node = xmlread(obj(index1).experiment_data_config_XML_file_path);
    
    % 获取根节点
    experiment_data_config_node = doc_node.getDocumentElement;
    
    % 获取对象的全部属性
    properties_array = properties(obj(index1));
    
    % 对象无属性时提示异常并返回
    if isempty(properties_array)
        warning('EXPERIMENTDATAMANAGER类的对象中无属性');
        return;
    else
        
        % 遍历属性数组以更新每个属性的内容
        for index2 = 1 : length(properties_array)
            
            % 获取属性名称对应节点
            property_node = experiment_data_config_node.getElementsByTagName(...
                properties_array{index2}).item(0);
            
            % 如果配置文件中没有存储某个属性的信息，则保持该属性默认值，跳到下一个属性继续解析
            if isempty(property_node)
                continue;
            end
            
            % 获取属性名称对应节点中的内容条目数
            property_content_number = property_node.getLength;
            
            % 内容条目数为0，说明本条属性无内容可读取，换下一条属性
            if isequal(0, property_content_number)
                warning('属性[%s]无内容可读取', properties_array{index2});
                continue;
            end
            
            % 内容条目数大于1，说明本条属性存在多条内容可读取
            if 1 < property_content_number
                
                % 创建临时变量以保存子节点索引、存储内容
                temp_child_node_index = zeros(property_content_number, 1);
                temp_stored_content = strings(property_content_number, 1);
                
                % 获取首个子节点
                child_node = property_node.getFirstChild;
                
                % 遍历节点内所有子节点内容
                for index3 = 1 : property_content_number
                    
                    % 筛选出NodeType为1（有效）的节点，如果NodeType为3代表#text（空格间隙）
                    if isequal(1, child_node.getNodeType)
                        temp_child_node_name = child_node.getTagName;
                        temp_child_node_index(index3) = str2double(regexp(...
                            string(temp_child_node_name), '\d*', 'match'));
                        temp_stored_content(index3) = child_node.getTextContent;
                    end
                    
                    % 获取紧临的下一个子节点
                    child_node = child_node.getNextSibling;
                    
                end
                
                % 清除多余的空的临时变量
                abandoned_index = all(temp_child_node_index == 0, 2);
                temp_child_node_index(abandoned_index, :) = [];
                temp_stored_content(abandoned_index, :) = [];
                
                % 根据属性本身的数据类型对提取的文本内容进行强制类型转换
                switch class(obj(index1).(properties_array{index2}))
                    case 'string'
                        obj(index1).(properties_array{index2})(temp_child_node_index, :) = ...
                            string(temp_stored_content);
                    case 'double'
                        obj(index1).(properties_array{index2})(temp_child_node_index, :) = ...
                            str2double(temp_stored_content);
                    case {'uint32', 'logical'}
                        obj(index1).(properties_array{index2})(temp_child_node_index, :) = ...
                            str2num(temp_stored_content);
                    otherwise
                        warning('EXPERIMENTDATAMANAGER类的对象中出现了其他未预设数据类型的属性');
                end
                
            else
                
                % 获取属性名称对应节点存储的文本内容
                stored_content = experiment_data_config_node.getElementsByTagName(...
                    properties_array{index2}).item(0).getTextContent;
                
                % 根据属性本身的数据类型对提取的文本内容进行强制类型转换
                switch class(obj(index1).(properties_array{index2}))
                    case 'string'
                        obj(index1).(properties_array{index2}) = string(stored_content);
                    case 'double'
                        obj(index1).(properties_array{index2}) = str2double(stored_content);
                    case {'uint32', 'logical'}
                        obj(index1).(properties_array{index2}) = str2num(stored_content);
                    otherwise
                        warning('EXPERIMENTDATAMANAGER类的对象中出现了其他未预设数据类型的属性');
                end
                
            end
            
        end
        
    end
    
end

end
