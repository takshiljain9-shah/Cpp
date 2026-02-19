#include <iostream>
#include <string>

using namespace std;

class property{
    private:
    int num1;

    public:
    void getdata(){
    cout << "Enter a number: " << endl;
    cin >> num1;
    }
    friend string evenodd(property obj);
};

string evenodd(property obj){
    return (obj.num1 % 2 == 0) ? "Even" : "Odd" ;
}

int main(){
    property obj;
    obj.getdata();

    string result = evenodd(obj);
    if (result == "Even")
    cout << "The number is even " << endl;
    else
    cout << "The number is odd" << endl;

    return 0;
}