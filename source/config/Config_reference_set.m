
%配置引用的设置与激活
function [] = Config_reference_set(model_name, config_reference_name,config_source_name)
%   1.输入参数：
%       (1)model_name     模型名称
%       (2)config_reference_name    配置引用的名称
%       (3)config_source_name  被引用的配置的名称
%   2.输出参数：无

% 载入模型
load_system(model_name);

%%
% 创建配置引用
config_ref = Simulink.ConfigSetRef;
set_param(config_ref,'SourceName',config_source_name);
set_param(config_ref,'Name',config_reference_name);

% 获取模型当前的配置
current_config = getConfigSets(model_name);%获取模型当前所有的配置引用
config_num = length(current_config);%计算配置引用设置名称的数量

%按顺序查找模型中的配置引用，判断是否已经存在与期望名称一致的命名，利用duplicated_flag记录结果
duplicated_flag = 0;
for index = 1:1:config_num 
    if strcmp(current_config(index,1), config_reference_name)
        duplicated_flag = 1;
    end
end

%如果没有出现过与期望名称一致的命名，则设置
if ~duplicated_flag
 attachConfigSet(model_name,config_ref);
end

%%
% 获取模型当前激活的配置
actived_config = getActiveConfigSet(model_name);
% 若已激活的配置引用不同，则修改配置
if ~strcmp(actived_config.Name, config_reference_name)
    setActiveConfigSet(model_name,config_reference_name);
    save_system(model_name);
end
close_system(model_name);
end