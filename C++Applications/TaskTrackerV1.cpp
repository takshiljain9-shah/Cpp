#include <iostream>

using namespace std;

int main(){
    string taskName;
    int duration;

    cout << "--- Task Tracker V1.0" << endl;

    cout << "What task did you finish? ";
    cin >> taskName;

    cout << "How much time did it take? ";
    cin >> duration;

    cout << "Success: You Finished " << taskName << " in " << duration << " minutes!" << endl;

    return 0;
}