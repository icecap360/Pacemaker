cd .

if "%1"=="" ("C:\PROGRA~1\MATLAB\R2020a\bin\win64\gmake"  -f AdaptivePacing_3.mk all) else ("C:\PROGRA~1\MATLAB\R2020a\bin\win64\gmake"  -f AdaptivePacing_3.mk %1)
@if errorlevel 1 goto error_exit

exit 0

:error_exit
echo The make command returned an error of %errorlevel%
exit 1
