#include <iostream>

extern int globalVar;  // Declaration (not definition)
extern void printVar();  // Declaration of function from file1.cpp

int main() {
    printVar();  // Calls function from file1.cpp
    std::cout << "Accessing globalVar in a.cpp: " << globalVar << std::endl;
    return 0;
}
