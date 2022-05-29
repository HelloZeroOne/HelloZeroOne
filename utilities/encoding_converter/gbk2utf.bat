@ECHO OFF
FOR /R %%F IN (*.m) DO (
echo %%~nxF
iconv.exe -f GB2312 -t UTF-8 %%F > %%F.utf8
move %%F.utf8 %%F >nul
)
PAUSE