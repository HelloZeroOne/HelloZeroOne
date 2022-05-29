% 应用协议编解码配置XML结构写入指定文件
function [] = APC_config_XML_write(obj)
%   1.输入参数：
%       (1)obj    SQLITEMANAGER类的一个实例
%   2.输出参数：无

%% 数据有效性检查
% XML文档为空时报错
if isempty(obj.XML_document)
    error('XML文档为空！');
end

% XML根节点为空时报错
if isempty(obj.XML_root_node)
    error('XML根节点为空！');
end

%% 设置目标XML文件名
[selected_file_name, selected_file_path] = uiputfile({...
    '*.xml', 'XML files (*.xml)'}, '请设置目标XML文件名', 'ADASCFG');
if isequal(0, selected_file_name)
    warning('未设置目标XML文件名！');
    return;
end

%% 将应用协议编解码配置XML结构写入目标XML文件
writer = matlab.io.xml.dom.DOMWriter;
writer.Configuration.FormatPrettyPrint = true;
writeToFile(writer, obj.XML_document, fullfile(selected_file_path, ...
    selected_file_name));

% 提示写入成功
fprintf('***将APC配置XML结构成功写入【%s】***\n', ...
    fullfile(selected_file_path, selected_file_name));

end
