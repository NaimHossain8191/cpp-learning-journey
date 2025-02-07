#include <iostream>

void there(){
    std::cout << "there!" << std::endl;
}

namespace math {
    int add (int a, int b){
        return a + b;
    }
    int subtract (int a, int b){
        return a - b;
    }
    void hello(){
        std::cout << "hello ";
        ::there();
    }
    
    namespace physics {
        const double g {9.8};
    }
}

namespace math::chem {
    const double R {8.314};
}

int main() {
    std::cout << math::add(3, 7) << std::endl;
    std::cout << math::subtract(7, 3) << std::endl;
    math::hello();
    std::cout << math::physics::g << std::endl;
    std::cout << math::chem::R << std::endl;

    namespace active = math;
    std::cout << active::add(2, 3) << std::endl;

    return 0;
}