#include <iostream>

using namespace std;

int main(){
    int balance = 5000;
    int choice;

    do{
        cout << "1. Check balance " << endl;
        cout << "2. Deposit Money " << endl;
        cout << "3. Withdraw money  " << endl;
        cout << "Exit " << endl;
        cout << "enter choice: " << endl;
        cin >> choice;

        switch(choice){
            case 1:
            cout << "Bank balance " << balance << endl;
            break;

            case 2:
            int deposit;
            cout << "Enter amount to deposit: " << endl;
            cin >> deposit;
            balance += deposit;
            cout << "New balance " << balance << endl;
            break;

            case 3:
            int withdraw;
            cout << "Enter amount to withdraw: " << endl;
            cin >> withdraw;
            
            if(withdraw > balance){
                cout << "Insufficient balance!" << endl;
            }else{
                cout << "Remaining balance: " << endl;
            }
            case 4:
            cout << "Exiting program..." << endl;
            break;

            default:
            cout << "Invalid choice, try again." << endl;
        }
    }while(choice != 4);
    return 0;
}