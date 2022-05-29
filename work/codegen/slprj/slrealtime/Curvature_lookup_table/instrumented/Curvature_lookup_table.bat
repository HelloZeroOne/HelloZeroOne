
call "%SLREALTIME_QNX_SP_ROOT%\%SLREALTIME_QNX_VERSION%\qnxsdp-env.bat"

cd .

if "%1"=="" (make  -f Curvature_lookup_table.mk all) else (make  -f Curvature_lookup_table.mk %1)
@if errorlevel 1 goto error_exit

exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
exit /B 1