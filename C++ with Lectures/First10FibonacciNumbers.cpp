#include <iostream>
#include <vector> 

int main(){
    std::vector<int> fib = {0, 1};
    std::cout << fib[0] << " " << fib[1] << " ";

    for (int i = 2; i < 20; ++i){
        int next = fib[i-1] + fib[i-2];
        fib.push_back(next);
        std::cout << next << " ";
    }
    return 0;
}