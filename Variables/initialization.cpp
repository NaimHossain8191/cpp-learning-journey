#include <iostream>>

int main(void){
    // Modern initialization forms (preferred):
    int d { 7 };   // direct-list-initialization (initial value in braces)
    int e {};      // value-initialization (empty braces)

    //Use Cases
    int x { 0 };    // direct-list-initialization with initial value 0
    std::cout << x; // we're using that 0 value here
    int x {};       // value initialization
    std::cin >> x;  // we're immediately replacing that value so an explicit 0 would be meaningless

    // May be unused...
    [[maybe_unused]] double pi { 3.14159 };  // Don't complain if pi is unused
    [[maybe_unused]] double gravity { 9.8 }; // Don't complain if gravity is unused
    [[maybe_unused]] double phi { 1.61803 }; // Don't complain if phi is unused

    std::cout << pi << '\n';
    std::cout << phi << '\n';

    // The compiler will no longer warn about gravity not being used

    return 0;
}