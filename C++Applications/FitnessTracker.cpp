#include <iostream>
#include <string>

using namespace std;

class FitnessTracker{
    private:
    string Name;
    int steps[3];

    public:
    void getData(){
        cout << "Enter your name: " << endl;
        cin >> Name;

        cout << "Enter steps of three different workouts: ";
        for (int i = 0; i < 3; i++){
            cin >> steps[i];
        }
    }

    void displayData(){
        cout << "====Fitness Tracker====" << endl;

        cout << "User Name: " << Name << endl;

        cout << "Steps done from three different workouts: ";
        for(int i = 0; i < 3; i++){
            cout << steps[i];
        }
        cout << endl;
    }

    inline int TotalSteps(){
        return steps[0] + steps[1] + steps[2];
    }

    friend void steps(FitnessTracker obj);
};

void steps(FitnessTracker obj){
    float avg;

    avg =  / 3.0;

    if(avg > 5000){
        cout << "Exercise Level: Very Active." << endl;
    }else if(avg > 3000 || avg < 5000){
        cout << "Exercise Level: Moderate." << endl;
    }else if(avg < 3000){
        cout << "Exercise Level: Low." << endl;
    }else{
        cout << "Inappropriate value." << endl;
    }
}

int main(){
    
}