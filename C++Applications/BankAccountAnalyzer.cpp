#include <iostream>
#include <string>

using namespace std;

class BankAccount{
    private:
    string Name;
    int deposits[3];

    public:
    void getData(){
        cout << "Enter your name: " << endl;
        cin >> Name;

        cout << "Enter total deposits of three months: ";
        for (int i = 0; i < 3; i++){
            cin >> deposits[i];
        }
    }

    void displayData(){
        cout << "Name: " << Name << endl;
        cout << "Total deposits of three months: ";
        for(int i = 0; i < 3; i++){
            cout << deposits[i];
        }
        cout << endl;
    }

    inline int totaldeposit(){
        return deposits[1] + deposits[0] + deposits[2];
    }

    friend void deposits(BankAccount){}
};

void deposits(BankAccount){
    
}