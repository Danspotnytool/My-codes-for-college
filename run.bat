@echo off

@REM Get the file name from the arguments
set FILENAME=%1

@echo Running %FILENAME%

@REM gcc FILENAME.c && a.exe
gcc %FILENAME% && a.exe