% 删除可能存在的文件
function Existing_file_delete(file_directory, file_name)
%   1.输入参数：
%       (1)file_directory    文件目录，字符数组或字符串
%       (2)file_name         文件名，字符数组或字符串
%   2.输出参数：无

% 遍历文件目录
folder_list = dir(file_directory);

% 搜索指定名称的文件
index = strcmp({folder_list(:).name}, file_name) == 1;
search_result = folder_list(index);

% 如果指定名称文件存在，则删除
if ~isempty(search_result)
    % 判断指定名称文件是否为文件夹，采用不同的删除指令
    if isfolder(fullfile(file_directory, file_name))
        rmdir(fullfile(file_directory, file_name), 's');
    else
        delete(fullfile(file_directory, file_name));
    end
end

end
