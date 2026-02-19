#include <iostream>

using namespace std;

class subtract
{
    private:
    int num1, num2;

    public:
    void getdata(){
        cout << "Enter two number you want to subtract: " << endl;
        cin >> num1 >> num2;
    }
    friend int sub(subtract);
};

int sub(subtract obj){
    return obj.num1 - obj.num2;
}

int main(){
    subtract obj;
    obj.getdata();

    int result = sub(obj);
    cout << "The difference is " << result << endl;
    return 0;
}