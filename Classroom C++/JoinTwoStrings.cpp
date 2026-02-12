#include <iostream>
#include <string>

using namespace std;

int main(){
    string str1, str2;
    
    cout << "Enter first name:";
    cin >> str1;

    cout << "Enter second name:";
    cin >> str2;

    string result = str1 + str2;

    cout << "Full Name " << result;

    return 0;
}