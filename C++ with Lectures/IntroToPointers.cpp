#include <iostream>

using namespace std;

int main (){
    int a = 3894590;
    int* ptra;
    ptra = &a;
    cout << *ptra << endl;

    cout << "The value of a is " << a << endl;
    cout << "The value of a is " << *ptra << endl;
    cout << "The address fo a is " << &a << endl;
    cout << "The address of a is " << ptra << endl;

    return 0;
}