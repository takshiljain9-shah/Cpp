#include <iostream>

namespace first{
    void greet(){
        std::cout << "Hello from first namespace " << std::endl;
    }
}

namespace second{
    void greet(){
        std::cout << "Hello from second namespace "  << std::endl;
    }
}

int main(){
    first::greet();
    second::greet();

    return 0;
}