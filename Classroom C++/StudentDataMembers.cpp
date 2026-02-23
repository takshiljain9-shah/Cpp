#include <iostream>

using namespace std;

class student{
    private:
    char name[30];
    int RollNumber;
    float CGPA;

    public:
    void setdata(){
        cout << "Enter your name, Rollnumber and Marks here " << endl;
        cin >> name >> RollNumber >> CGPA;
    }
    void displayData(){
        cout << "===Student Details===" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << RollNumber << endl;
        cout << "CGPA: " << CGPA << endl;
    }
};

int main(){
    student s1;
    s1.setdata();
    s1.displayData();
    return 0;
}