% 激活模型的指定配置
function [] = Model_config_active(model_name, config_name)
%   1.输入参数：
%       (1)model_name     模型名称
%       (2)config_name    配置名称
%   2.输出参数：无

% 载入模型
load_system(model_name);

% 获取模型当前的配置
current_config = getActiveConfigSet(model_name);

% 配置不同则修改配置
if ~strcmp(current_config.Name, config_name)
    setActiveConfigSet(model_name, config_name);
    save_system(model_name);
end

% 关闭引用模型
close_system(model_name);

end

