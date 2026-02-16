#include <iostream>

using namespace std;

int main(){
    cout << "Control structures Demo" << endl;

    //Simple if
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number > 0){
        cout << "simple if: number is positive" << endl;
    }

    //IF-Else
    if (number % 2 == 0){
        cout << "IF-Else: number is even" << endl;
    }else{
        cout << "IF-Else: number is odd" << endl;
    }

    // IF-else Ladder
    int marks;
    cout << "Enter your marks (0-100): ";
    cin >> marks;

    if(marks>=90){
        cout << "Grade: A" << endl;
    }else if(marks>=75){
        cout << "Grade: B" << endl;
    }else if (marks >=50){
        cout << "Grade: C" << endl;
    }else if(marks >=33){
        cout << "Grade: D" << endl;
    }else{
        cout << "FAAAAAA" << endl;
    }

    //Switch case
    int choice;
    cout << "THE SIMPLE CALCULATOR" << endl;

    cout <<"1. Add" << endl;
    cout <<"2. Subtract" << endl;
    cout <<"3. Multiply" << endl;
    cout <<"4. Divide" << endl;

    cout << "Enter your Choice: " << endl;
    cin >> choice;

    int a, b;
    cout << "Enter two number: " << endl;
    cin >> a >> b;

    switch(choice){
        case 1:
        cout << "Result: " << a + b << endl;
        break;

        case 2:
        cout << "Result: " << a - b << endl;
        break;

        case 3:
        cout << "Result: " << a * b << endl;
        break;

        case 4:
        if (b != 0)
        cout << "Result: " << a / b << endl;
        else
        cout << "YOu cannot divide by zero." << endl;
        break;

        default:
        cout << "Invalid choice." << endl;
    }

    cout << "Program completed. " << endl;
    return 0;
}