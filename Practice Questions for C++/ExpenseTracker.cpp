#include <iostream>

using namespace std;

int main(){   
    int expense;
    int total = 0;
    
    for(int i = 1; i <= 7; i++){
        cout << "Enter expense for day" << i << ": " << endl;
        cin >> expense;
        total += expense;
    }
    double avg = total / 7.0;

    cout << "Total expense: " << total << endl;
    cout << "Average expense: " << avg << endl;

    while(total > 5000){
        int saving;
        cout << "Total exceeded 5000" << endl;
        cout << "Enter saving adjustment " << endl;
        cin >> saving;
        total -= saving;
    }
    cout << "Expenses under control now." << endl;
    
    return 0;
}