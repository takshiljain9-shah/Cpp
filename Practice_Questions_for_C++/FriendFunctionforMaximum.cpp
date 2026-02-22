#include <iostream>

using namespace std;

class large
{
    private:
    int num1, num2;

    public:
    void getdata(){
    cout << "Enter two numbers to find largest: " << endl;
    cin >> num1 >> num2;
    }
    friend int max(large);
};

int max(large obj){
    return (obj.num1 > obj.num2) ? obj.num1 : obj.num2;
}

int main(){
    large obj;
    obj.getdata();

    int result = max(obj);
    cout << "The large number is " << result << endl;
    return 0;
}