#include <iostream>//for cout and cin
#include <cmath>//for math functions
#include <string>//for string type

using namespace std;//avoid writing std:: everywhere

int main(){
    cout << "=== C++ Operators and Header files demo ===\n";

    //Variables
    int a; int b;
    cout << "Enter two integers: " << endl;
    cin >> a >> b;

    //Arithmetic Operators
    cout << "--- Arithmetic Operators ---" << endl;

    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (b != 0 ? (a / b) : 0) << " (be must not be zero)" << endl;
    cout << "a % b = " << (b != 0 ? (a % b) : 0) << endl << endl;

    //Comparison Operators
    cout << "--- Comparison Operators ---" << endl;

    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl << endl;

    //Logical Operators
    bool cond1 = (a > 0);
    bool cond2 = (b > 0);

    cout << "---Logical Operators ---" << endl;

    cout << "cond 1 && cond2: " << (cond1 && cond2) << endl;
    cout << "cond 1 || cond2: " << (cond1 || cond2) << endl;
    cout << "!cond: " << (!cond1) << endl << endl;

    //Assignment Operators
    int c = a;

    cout << "\n Assignment Operators" << endl;
    cout << "c = " << c << endl;
    c += b;
    cout << "After c += b, c = " << c << endl << endl;

    //Using <cmath> header function
    cout << "Math functions (form <cmath>)" << endl;

    cout << "sqrt(a^2 + b^2) = " << sqrt(a*a + b*b) << endl;
    cout << "Absolute value of a : " << abs(a) << endl << endl;
    
    // Using <string> header
    
    string Fullname;
    cout << "Enter your full name: " << endl;
    getline(cin, Fullname); // getline function is used to take a full line of text.
    cout << "Hello, " << Fullname << "!" << endl << endl;

    cout << "Program Demonstration Completed:)" << endl;
    
    return 0;
}