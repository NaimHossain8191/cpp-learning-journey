#include <iostream>

int main(){
    int x {5};
    double y {static_cast<double> (x)}; // Use of `static_cast<type> (value)`
    std::cout << y << std::endl;
    return 0;
}