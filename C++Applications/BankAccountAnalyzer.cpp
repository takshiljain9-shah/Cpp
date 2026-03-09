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
            cout << deposits[i] << " ";
        }
        cout << endl;
    }

    inline int totaldeposit(){
        return deposits[1] + deposits[0] + deposits[2];
    }

    friend void deposits(BankAccount obj);
};

void deposits(BankAccount obj){
    float avg;

    avg = obj.totaldeposit() / 3.0;

    cout << "The average total deposits is :" << avg << endl;

    if(avg > 5000)
    cout << "Deposit Level: High saver." << endl;

    else if(avg > 3000 && avg < 5000)
    cout << "Deposit Level: Moderate saver. " << endl;

    else if(avg < 3000)
    cout << "Deposit Level: Low saver." << endl;

    else
    cout << "Inappropriate value. " << endl;

    cout << "The length of the user name is: " << obj.Name.length() << endl;  
}

int main(){
    BankAccount deposits1;

    deposits1.getData();
    deposits1.displayData();

    cout << "Total deposits done in 3 months: " << deposits1.totaldeposit() << endl;

    deposits(deposits1);

    return 0;
}