#include <iostream>

using namespace std;

int glo = 9; //An global variable is declared, it is outside of the main funciton.

void sum(){
    cout << glo; //Prints the global function, because there is no local function declared inside void funciton.
}

int main(){
    int glo = 18; //Local variable declared inside main function
    sum(); // Using the sum function here
    cout << glo; //It will print local function because it is defined inside main function

    return 0;
}

//output = 918