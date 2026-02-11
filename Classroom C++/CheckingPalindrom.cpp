#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cout << "Enter an string: ";
    cin >> str;

    string rev = "";

    for ( int i = str.length() - 1; i >= 0 ; i--){
        rev += str[i];
    }
    if(str == rev)
        cout << "String is palindrom.";
    else 
        cout << "NOt Palindrom.";
    
        return 0;
}