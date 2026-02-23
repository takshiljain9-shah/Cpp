#include <iostream>

using namespace std;

class StudentRecord{
    private:
    int studentID;
    char name[30];
    float GPA;

    public:
    void inputDetails(){
        cout << "Enter student ID: " << endl;
        cin >> studentID;
        cout << "Enter student ID: " << endl;
        cin >> name;
        cout << "Enter student ID: " << endl;
        cin >> GPA;
    }
    void displayDetails(){
        cout << "=== Student Record === " << endl;
        cout << "ID: " << endl;
        cout << "Name: " << endl;
        cout << "GPA: " << endl;
    }
};

int main(){
    StudentRecord s1;

    s1.inputDetails();
    s1.displayDetails();

    return 0;
}