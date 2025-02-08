#include <iostream>

int add(int a, int b);
int addition(int a, int b);

int main(){
    std::cout << addition(3, 4) << std::endl;
    // std::cout << add(3, 4) << std::endl;      It'll produce an error
    return 0;
}