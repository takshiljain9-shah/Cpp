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
        cout << "\n====Fitness Tracker====" << endl;

        cout << "User Name: " << Name << endl;

        cout << "Steps done from three different workouts: ";
        for(int i = 0; i < 3; i++){
            cout << steps[i] << " ";
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

    avg = obj.TotalSteps() / 3.0;

    cout << "Average steps are: " << avg << endl;

    if(avg > 5000){
        cout << "Exercise Level: Very Active." << endl;
    }else if(avg > 3000 && avg < 5000){
        cout << "Exercise Level: Moderate." << endl;
    }else if(avg < 3000){
        cout << "Exercise Level: Low." << endl;
    }else{
        cout << "Inappropriate value." << endl;
    }

    cout << "Length of the name is : " << obj.Name.length() << endl;
}

int main(){
    FitnessTracker steps1;

    steps1.getData();
    steps1.displayData();

    cout << "Total steps done with 3 workouts: " << steps1.TotalSteps() << endl;

    steps(steps1);

    return 0;
}