% 获取数据分析所需的参考轨迹名称
function [obj] = Reference_trajectory_name_get(obj)
%   1.输入参数：
%       (1)obj    DATAANALYZER类的一个实例
%   2.输出参数：
%       (1)obj    DATAANALYZER类的一个实例

%% 初始化
% 轨迹配置文件目录
trajectory_config_directory = fullfile(pwd, '../data/trajectory/config_XML/');

%% 选择参考轨迹数据源
fprintf(['$可选参考轨迹数据源如下：\n1 - Matlab工程内部参考轨迹文件\n' ...
    '2 - 智轨一代车地图管理应用数据字典\n' ...
    '3 - 智轨一代车循迹控制应用数据字典\n']);
trajectory_source_index = input('->请设置参考轨迹数据源索引 [回车默认1]: ');
if isempty(trajectory_source_index) || 1 > trajectory_source_index
    trajectory_source_index = 1;
end

switch trajectory_source_index
    case 1 % Matlab工程内部参考轨迹文件
        dictionary_file = "";
        
    case 2 % 智轨一代车地图管理应用数据字典
        dictionary_file = "ART_1G_MMU.sldd";
        
    case 3 % 智轨一代车循迹控制应用数据字典
        dictionary_file = "ART_1G_IDS.sldd";
        
    otherwise
        error('未定义的参考轨迹数据源索引！');
end

%% 根据所选参考轨迹数据源执行指定的操作
if isequal(1, trajectory_source_index)
    
    % 选择既有轨迹配置XML文件
    [trajectory_config_file, ~] = uigetfile({...
        '*.xml', 'XML file (*.xml)'}, '请选择轨迹配置XML文件', ...
        trajectory_config_directory);
    if isequal(0, trajectory_config_file)
        error('未选择轨迹配置XML文件！');
    end
    
    % 拆解文件名得到轨迹名称
    [~, obj.reference_trajectory_name, ~] = fileparts(trajectory_config_file);
    
else
    
    % 从表格中提取期望轨迹索引集合
    desired_trajectory_index_collection = obj.data_collection.('desired_trajectory_index');
    
    % 如果索引集合中存在多余1种数值，说明过程中切换过轨迹，不符合分析需求，报警
    if 1 < length(unique(desired_trajectory_index_collection))
        warning('***数据集中存在多于1种的期望轨迹索引***');
    end
    
    % 采用期望轨迹索引集合的第一个数值作为数据分析所用的期望轨迹索引
    desired_trajectory_index = desired_trajectory_index_collection(1);
    
    % 参考轨迹对象的数据字典管理器属性初始化
    obj.SLDD_manager = SLDDManager(dictionary_file);
    
    % 从数据字典中搜索轨迹名称
    obj.reference_trajectory_name = ...
        obj.SLDD_manager.SLDD_reference_trajectory_name_get(desired_trajectory_index);
    
end

end
