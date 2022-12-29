@echo off

@REM Get the file name from the arguments
set FILENAME=%1

@REM Get flags all from the arguments
@REM --clear: clear the screen before running the program
@REM --infinite: run the program infinitely unless the user stops it
set FLAGS=%*
@REM Remove the file name from the flags
set FLAGS=%FLAGS:"%FILENAME%"=%

@REM Time now
set TIME_NOW=%time:~0,2%:%time:~3,2%:%time:~6,2%:%time:~9,3%

gcc %FILENAME% -lm

set clear=0
set infinite=0

@REM Check if the flags are set
for %%i in (%FLAGS%) do (
    if "%%i"=="--clear" set clear=1
    if "%%i"=="--infinite" set infinite=1
)

if %clear%==1 cls

@REM Run the program
if %infinite%==1 (
    :loop
    if %clear%==1 cls
    if %clear%==0 echo:
    a.exe
    echo:
    echo:
    echo:
    echo Program finished after %TIME_NOW%-%time:~0,2%:%time:~3,2%:%time:~6,2%:%time:~9,3%
    set TIME_NOW=%time:~0,2%:%time:~3,2%:%time:~6,2%:%time:~9,3%
    pause > nul
    goto loop
) else (
    a.exe
    echo:
    echo:
    echo:
    echo Program finished after %TIME_NOW%-%time:~0,2%:%time:~3,2%:%time:~6,2%:%time:~9,3%
    set TIME_NOW=%time:~0,2%:%time:~3,2%:%time:~6,2%:%time:~9,3%
    pause > nul
)

echo: