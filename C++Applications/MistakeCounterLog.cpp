#include <iostream>

using namespace std;

int main(){
    int mistakes[5] = {5007 , 5008, 5009, 5010, 5011};
    int total = 0;

    cout << "--- Mistake Log Analysis ---" << endl;

    for (int i = 0; i < 5; i++){
        cout << "Day " << i + 1 << "Count: " << mistakes[i] << endl;
        total += mistakes[i];
    }

    double average = (double)total / 5;
    cout << "-----------------" << endl;

    cout << "Current average mistake level: " << average << endl;
    cout << "Status: Data Logged. Forgiveness through execution. " << endl;

    return 0;
}