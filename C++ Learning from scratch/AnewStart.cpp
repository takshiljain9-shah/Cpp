#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
    string name;
    int age;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Hello, " << name << "! Next year, you will be " << (age + 1) << " years young." << endl;

    return 0;
}