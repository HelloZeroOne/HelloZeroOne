% 重复数值检测
function [duplicate_value, occurred_times, unique_value, duplicate_times] = ...
    Duplicate_value_check(original_value)
%   1.输入参数：
%       (1)original_value     原始数值，列向量
%   2.输出参数：
%       (1)duplicate_value    检测到的重复数值（大于等于2次），列向量，按从小到大顺序排列
%       (2)occurred_times     重复数值出现次数，列向量，与重复数值在列向量中所处位置一一对应
%       (3)unique_value       检测到的唯一数值（大于等于1次），列向量，按从小到大顺序排列
%       (4)duplicate_times    唯一数值重复出现次数，列向量，与重复数值在列向量中所处位置一一对应

%% 检测重复数值
% 求唯一数值（没有重复过的）
[unique_value, original2unique_value_element_index, ...
    unique2original_value_element_index] = unique(original_value);

% 构造原始数值元素索引
original_value_element_index = transpose(1 : length(original_value));

% 求原始数值元素索引与唯一数值元素索引之间的差集
diff_index = setdiff(original_value_element_index, original2unique_value_element_index);

% 求唯一绘图编号构建原始绘图编号的重复索引
duplicate_value_element_index = unique(unique2original_value_element_index(diff_index));

% 求重复数值
duplicate_value = unique_value(duplicate_value_element_index);

%% 检测重复数值出现的次数
% 统计原始数值中各元素重复的次数(在唯一数值末尾补一个加1的数值以避免倒数1、2两个唯一数值被重复统计)
duplicate_times = histcounts(original_value, [unique_value(:); unique_value(end) + 1]);

% 求重复的绘图编号出现次数
occurred_times = duplicate_times(duplicate_value_element_index);

end
