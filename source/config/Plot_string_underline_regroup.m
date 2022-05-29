% 绘图所用字符串下划线重组(增加转义字符\，避免绘图时下划线将字体拉小)
function [new_name] = Plot_string_underline_regroup(original_name)
%   1.输入参数：
%       (1)original_name    含下划线的原始名称
%   2.输出参数：
%       (1)new_name         下划线转义后的新名称

% 通过下划线分割原始名称
temp_name = regexp(original_name, '_', 'split');

% 将下划线转义后重组名称
if 1 < length(temp_name)
    temp_cat_name = temp_name{1};
    for index = 2 : length(temp_name)
        temp_cat_name = strcat(temp_cat_name, '\_', temp_name{index});
    end
    new_name = temp_cat_name;
else
    new_name = original_name;
end

end
