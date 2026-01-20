#include <iostream>
using namespace std;

class MathEngine {
    public: 
    int sum(int a, int b) {return a + b; }
};
int main(){
    MathEngine engine;
    int n1 = 10, n2 = 20;
    cout << "Intermediate Sum: " << engine.sum(n1, n2) << endl;
    return 0;
}