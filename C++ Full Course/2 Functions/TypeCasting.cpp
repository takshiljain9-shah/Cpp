#include <iostream>

using namespace std;

int main (){
    int a = 45;
    float b = 45.50;
    
    cout << "The value of a is " << (float)a << endl;
    cout << "The value of a is " << float(a) << endl;
    
    cout << "The value of b is " << int(b) << endl;
    cout << "The value of b is " << (int)a << endl;

    int c = int(b);

    cout << "The expression is " << a + b << endl; //90.50
    cout << "The expression is " << a + int(b) << endl; //90
    cout << "The expression is " << a + (int)b << endl; //90

    return 0;
} 