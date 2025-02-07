@echo off
g++ -Wall -Wextra -o main main.cpp header.cpp
if %errorlevel% neq 0 (
    echo Compilation failed.
    exit /b %errorlevel%
)
echo Compilation successful. Running program...
main.exe
