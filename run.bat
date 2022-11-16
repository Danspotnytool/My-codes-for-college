@echo off

@REM Get the file name from the arguments
set FILENAME=%1

@REM gcc FILENAME.c && a.exe
gcc %FILENAME% -lm && ./a.exe