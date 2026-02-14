#include <iostream>

using namespace std;

int c = 45;

int main(){
    int a, b, c;
    cout << "Enter value of a and b: " << endl;
    cin >> a >> b;

    c = a + b;
    cout << "The sum is: " << c << endl;
    cout << "The global c is : " << ::c; // to print the global c here we use ::

    return 0;
}