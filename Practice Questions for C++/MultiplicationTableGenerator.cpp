#include <iostream>

using namespace std;

int main(){
    int num;
    char choice;

    do{
        cout << "Enter a number : " << endl;
        cin >> num;

        if (num > 0){
            for (int i = 1; i <= 10; i++){
                cout << num << " * " << i << " = " << num * i << endl;
            }
        }else {
            cout << "The number should be positive " << endl;
        }
        cout << "Do you want another table (y/n): " << endl;
        cin >> choice;
    }
    while(choice == 'y' || choice == 'Y');
    
    return 0;
}