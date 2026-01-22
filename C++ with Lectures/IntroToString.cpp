#include <iostream>
#include <string>

using namespace std;

int main(){
    string name = "Takshil";

    cout << "the name is " << name << endl;
    cout << "the length of the name is " << name.length() << endl;
    cout << "the name is " << name.substr(0,3) << endl;
    cout << "the name is " << name.substr(2,3);

    return 0;
}