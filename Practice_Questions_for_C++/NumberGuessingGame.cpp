#include <iostream>

using namespace std;

int main(){
    int secret = 7;
    int guess = 0;
    int count = 0;

    while(guess != secret){
        cout << "Enter a guess: " << endl;
        cin >> guess;

        if(guess > secret){
            cout << "Too high!" << endl;
        }else if(guess < secret) {
            cout << "Too low!" << endl;
        }else{
            cout << "Correct!!" << endl;
        }
        count++;
    }
    cout << "Number of attempts: " << count << endl;
    return 0;
}