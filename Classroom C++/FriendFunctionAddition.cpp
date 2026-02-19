#include <iostream>

using namespace std;

class Addition 
{
    private:
    int num1, num2;

    public:
    void getdata(){
        cout << "Enter two numbers: " << endl;
        cin >> num1 >> num2;
    }
    friend int add(Addition);
};

int add(Addition obj){
    return obj.num1 + obj.num2;
}


int main(){
    Addition obj;
    obj.getdata();

    int result = add(obj);
    cout << "Sum = " << result << endl;
    return 0;
}


// friend function is declared inside the class and defined outside the class, it can access private and protected members of a class
