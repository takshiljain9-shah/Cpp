#include <iostream>
using namespace std;

class stack{
    private:
    int arr[5];
    int top;

    public:
    stack(){
        top = -1;
    }
    void push(int x){
        if(top == 4)
        cout << "Stack Overflow" << endl;

        else{
            top++;
            arr[top] = x;
        }
    }

    void pop(){
        if(top == -1)
        cout << "Stack underflow" << endl;

        else
        top--;
    }
    
    void display(){
        for (int i = top; i >= 0; i--){
            cout << arr[i] << " ";
            cout << endl;
        }
    }
};

int main(){
    stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.pop();

    s.display();
}