% 应用协议编解码配置XML结构初始化
function [obj] = APC_config_XML_initialize(obj)
%   1.输入参数：
%       (1)obj    SQLITEMANAGER类的一个实例
%   2.输出参数：
%       (1)obj    SQLITEMANAGER类的一个实例

%% 初始化
XML_file_author  = 'zxr';   % XML配置文件作者
XML_file_version = '1.2.3'; % XML配置文件版本


%% 创建定制化的XML结构
obj.XML_document = matlab.io.xml.dom.Document('APC_config');
obj.XML_document.XMLStandalone = true;
obj.XML_root_node = obj.XML_document.getDocumentElement;
obj.XML_root_node.setAttribute('author', XML_file_author);
obj.XML_root_node.setAttribute('version', XML_file_version);

end
