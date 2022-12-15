@echo off

@REM Get the file name from the arguments
set FILENAME=%1

set SPACE=" "

@REM Get flags all from the arguments
@REM --clear: clear the screen before running the program
@REM --infinite: run the program infinitely unless the user stops it
set FLAGS=%2 %3 %4 %5 %6 %7 %8 %9

@REM Time now (Epoch)
set TIME_NOW=%TIME:~0,2%%TIME:~3,2%%TIME:~6,2%

gcc %FILENAME% -lm

if %FLAGS% == --clear (
    cls
)

@REM Check if the program should run infinitely
if %FLAGS% == --infinite (
    while true (
        a.exe
        set TIME_AFTER=%TIME:~0,2%%TIME:~3,2%%TIME:~6,2%
        set /a TIME_DIFFERENCE=%TIME_AFTER%-%TIME_NOW%
        echo(
        echo(
        echo(
        echo Program finished after %TIME_DIFFERENCE% seconds.
        set TIME_NOW=%TIME_AFTER%
        pause
    )
) else (
    a.exe
    set TIME_AFTER=%TIME:~0,2%%TIME:~3,2%%TIME:~6,2%
    set /a TIME_DIFFERENCE=%TIME_AFTER%-%TIME_NOW%
    echo(
    echo(
    echo(
    echo Program finished after %TIME_DIFFERENCE% seconds.
)