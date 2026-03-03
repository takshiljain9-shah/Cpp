#include <iostream>
#include <string>
using namespace std;

class student{
    private:
    string name;
    int marks[3];

    public:
    void getData(){
        cout << "Enter the name of the student: " << endl;
        cin >> name;

        cout << "Enter marks for 3 subjects: " << endl;
        for (int i = 0; i < 3; i++){
            cin >> marks[i];
        }
    }
    void displayData(){
        cout << "\nStudent Name: " << name << endl;
        cout << "Marks: ";
        for (int i = 0; i < 3; i++){
            cout << marks[i] << " ";
        } 
        cout << endl;
    }
    inline int totalMarks(){
        return marks[0] + 
    }
}