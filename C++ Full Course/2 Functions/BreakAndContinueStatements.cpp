/*Write a C++ program that asks the user to enter 10 numbers using a loop.
 The program should skip any negative numbers using the continue
  statement and not include them in the sum. If the user enters 0,
   the program should immediately stop taking further input using
    the break statement. At the end, display the sum of all valid 
    (positive) numbers entered before termination.*/
    
#include <iostream>
using namespace std;

int main(){
    int positiveintegers;
    int total = 0;

    for (int i = 1; i <= 10; i++){
        cout << "Enter number " << i << endl;
        cin >> positiveintegers;
    
           
        if(positiveintegers == 0){
        break;
        }

        if (positiveintegers < 0){
            continue;
        }

    total += positiveintegers;
    }
    cout << "The sum of positive number is " << total << endl;
    
    return 0;
}