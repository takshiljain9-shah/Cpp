#include <iostream>

using namespace std;

inline int add(int x, int y){
    return x + y;
}

int main(){
    int num1, num2;
    
    cout << "Enter any two integers: " << endl;
    cin >> num1 >> num2;
    
    int result = add(num1, num2);


    cout << "The sum of two numbers is " << result << endl;
    return 0;
}