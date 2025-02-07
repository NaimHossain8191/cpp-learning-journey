#include <iostream>
#include <string>

int main(){
    std::string name {"Naim"};
    std::cout << "Name: " << name << std::endl;
    name = "Alex";
    std::cout << "Changed Name: " << name << std::endl;
    std::cout << "Enter new name: ";
    std::getline(std::cin, name);
    std::cout << "Now name is: " << name << std::endl;
}