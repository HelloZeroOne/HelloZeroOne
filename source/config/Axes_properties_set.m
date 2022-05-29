% 统一设置坐标轴属性
function Axes_properties_set(axes_handle, font_size)
%   1.输入参数：
%       (1)axes_handle    坐标轴句柄
%       (2)font_size      字体大小
%   2.输出参数：无

% 以下可按需设置坐标轴属性
axes_handle.FontSize = font_size;
axes_handle.FontName = 'Times New Roman';
axes_handle.GridLineStyle = ':';
axes_handle.GridColor = 'k';
axes_handle.GridAlpha = 0.5;
axes_handle.LineWidth = 2;

end
