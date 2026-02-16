#include <iostream>
#include <iomanip> //New header file discovered for manipulators like setw, setprecision

using namespace std;

int main(){
    //Constants
    const double PI = 3.14159; //constant = won't change in the entire program
    const int FIXED_VALUE = 10;

    cout << "CONSTANTS DEMO" << endl;
    
    cout << "The value of PI is " << PI << endl;
    cout << "The fixed value is " << FIXED_VALUE << endl;

    //Manipulators
    double number = 123.456789;

    cout << "MANIPULATORS DEMO" << endl;
    
    cout << "Original number is " << number << endl;

    cout << "Using setprecision(4):"
         << setprecision(4) << number << endl;
    
    cout << "Using fixed and setprecision(2): "
         << fixed << setprecision(2) << number << endl;

    cout << "using setw for spacing: " << endl;
    cout << setw(10) << "A"
         << setw(10) << "B"
         << setw(10) << "C" << endl;

    cout << setw(10) << 100
         << setw(10) << 200
         << setw(10) << 1300 << endl;

    //reset precision behaviour
    cout.unsetf(ios::fixed);

    //Operator Precedence
    int a = 5, b = 3, c = 2;

    cout << "OPERATOR PRECEDENCE" << endl;
    int result1 = a + b * c;// Multiplication happens first

    int result2 = (a + b) * c; //Parenthesis first

    int result3 = a + b * c - 4 / 2; //According to precedence : Multiplicaton then division then addition subtraction

    cout << "a + b * c = " << result1 << endl;
    cout << "(a + b) * c = " << result2 << endl;
    cout << "a + b * c - 4 / 2 = " << result3 << endl;

    //Logical + precedence 
    bool check = a > b && b < c || a == 5; // Precedence: >, < -> && -> ||

    cout << "Logical Expression result : " << check << endl;

    cout << "Program completed successfully." << endl;

    return 0;
}