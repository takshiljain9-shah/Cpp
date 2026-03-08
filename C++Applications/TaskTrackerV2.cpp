#include <iostream>

using namespace std;

int main(){
    int tasksCompleted;

    cout << "Enter Number of tasks Completed today: ";
    cin >> tasksCompleted;

    if(tasksCompleted <= 8){
        cout << "Recovery needed. Stand UP and push Again." << endl;
    }
    else if (tasksCompleted >= 9 && tasksCompleted <= 17 ){
        cout << "Result: You are being average again. Need to aim higher." << endl;
    }
    else if (tasksCompleted <= 18 && tasksCompleted <= 24){
        cout << "Result: Success. Your 24 tasks of 24 hours are accomplished."<< endl;
    }else{
        cout << "Result: GOD MODE. You are redefining your limits." << endl;
    }
    return 0;
}