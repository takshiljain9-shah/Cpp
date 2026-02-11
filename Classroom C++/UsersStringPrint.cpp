#include <iostream>
#include <string>

using namespace std;

int main(){
    string message;

    cout << "Enter your message: ";
    getline(cin,message); //getline function is used to capture entire line of text.

    cout << message;
    return 0;
}