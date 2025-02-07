#include <iostream>
#include <bitset> // for converting to binary

int main(){
    int dec = 12;
    int oct = 012;
    int bin = 0b0111;
    int hex = 0xAC;

    // Automatically Converts them to decimal
    std::cout << "dec: " << dec << std::endl;
    std::cout << "oct: " << oct << std::endl;
    std::cout << "bin: " << bin << std::endl;
    std::cout << "hex: " << hex << std::endl;

    // Converting manually
    std::cout << std::hex << "dec2hex: " << dec << std::endl; // dec to hex
    std::cout << std::oct << "dec2oct: " << dec << std::endl; // dec to oct

    // Digit Separators
    int bin2 {0b0000'0100'1000};
    std::cout << bin2 << std::endl;

    // Converting to Binary
    std::cout << std::bitset<8> {1} << std::endl;
    std::bitset<4> bin3 {3};
    
    std::cout << bin3 <<std::endl;

    return 0;
}