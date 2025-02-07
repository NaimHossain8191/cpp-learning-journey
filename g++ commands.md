## G++ Commands
### 🔹 Basic Compilation & Execution

    g++ -o output_file source_file.cpp
     ./output_file


### 🔹 Compile with C++ Standard (*C++11, C++14, C++17, C++20*)

    g++ -std=c++17 -o my_program main.cpp
    ./my_program


### 🔹 Compile Multiple Files

    g++ -o my_program main.cpp utils.cpp
    ./my_program

### 🔹 Compile with Debugging Enabled

    g++ -g -o my_program main.cpp
    gdb ./my_program

### 🔹 Compile with Optimization

    g++ -O2 -o my_program main.cpp
    ./my_program

### 🔹 Compile with Warnings (*Recommended*)

    g++ -Wall -Wextra -Wpedantic -o my_program main.cpp
    ./my_program

### 🔹 Compile with Address Sanitizer (*Memory Debugging*)

    g++ -fsanitize=address -g -o my_program main.cpp
    ./my_program

### 🔹 Compile Only (*Without Linking*)

    g++ -c main.cpp -o main.o
### 🔹 Link Object Files

    g++ main.o utils.o -o my_program
    ./my_program
### 🔹 One-Liner for Large Projects

    g++ -o my_program *.cpp
    ./my_program


## Automate with **`.bat`** script

    @echo off
    g++ -Wall -Wextra -std=c++17 -o my_program main.cpp utils.cpp
    if %errorlevel% neq 0 (
        echo Compilation failed.
        exit /b %errorlevel%
    )
    echo Compilation successful. Running program...
    my_program.exe

Save it as **`build.bat`** in the same folder as your C++ files.
Run it.