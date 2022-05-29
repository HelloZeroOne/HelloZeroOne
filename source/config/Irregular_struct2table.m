% 成员域长度不规则的结构体转化为表格
function [output_table] = Irregular_struct2table(original_struct)
%   1.输入参数：
%       (1)original_struct     原始结构体
%   2.输出参数：
%       (1)output_table        输出表格

%% 统计结构体中最大的成员域长度
% 统计结构体中每个成员域的长度
fields_length = structfun(@(field) length(field), original_struct);

% 统计最大长度
max_length = max(fields_length);

%% 对每个成员域补充NaN尾巴至最大成员域长度，得到成员域长度规则的结构体
regular_struct = structfun(@(field) Local_add_NaN_tail(field, max_length), ...
    original_struct, 'UniformOutput', false);

%% 将成员域长度规则的结构体直接转化成表格
output_table = struct2table(regular_struct);

end


% 局部函数：补充NaN尾巴至指定长度
function [output_data] = Local_add_NaN_tail(original_data, specified_NaN_length)
%   1.输入参数：
%       (1)original_data           原始数据，列向量
%       (2)specified_NaN_length    指定NaN长度
%   2.输出参数：
%       (1)output_data             补充了NaN尾巴的输出数据，列向量

%% 尾部拼接剩余长度的NaN，原始数据长度大于指定长度时则不会拼接
output_data = [original_data; ...
    NaN(specified_NaN_length - length(original_data), 1)];

end
