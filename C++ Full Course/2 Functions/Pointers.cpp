#include <iostream>
using namespace std;

int main(){
    //pointer- data type which holds the address of other data
    int a = 3;
    int* b = &a;

    // & address of operator
    cout << "The address of a is " << &a << endl;
    cout << "The address of a is " << b << endl;

    // * dereference operator
    cout << "The value at the address of b is " << *b << endl;

    //pointer to a pointer
    int** c = &b;

    cout << "The address of b is " << &b << endl;
    cout << "The address of b is " << c << endl;
    cout << "The value at address of b is " << *c << endl;
    cout << "The value at address value_at(value_at(c)) is " << **c << endl;
    
    return 0;
}

