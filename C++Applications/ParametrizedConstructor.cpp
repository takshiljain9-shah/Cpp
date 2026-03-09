#include <iostream>
#include <string>

using namespace std;

class StudentMarks{
    private:
    string Fullname;
    int marks[3];

    public:
    StudentMarks(){
        Fullname = "Notassigned";
        for (int i = 0; i < 3; i++){
            marks[i] = 0;
        }
        cout << "[System]: New student record created with default values." << endl;
    }

    StudentMarks(string Name, int m1, int m2, int m3){
        Fullname = Name;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
        cout << "[System]: Record created for " << Fullname << endl;
    }

    void getData(){
        cout << "Enter your name: " << endl;
        cin >> Fullname;

        cout << "Enter marks for 3 subjects: ";
        for (int i = 0; i <= 2; i++){
            cin >> marks[i];
        }
    }

    void displayData(){
        cout << "====STUDENT MARKS ANALYZER====" << endl;

        cout << "Student name: " << Fullname << endl;

        cout << "Marks for 3 subjects are: ";
        for(int i = 0; i <= 2; i++){
            cout << marks[i] << " ";
        }
        cout << endl;
    }

    inline int TotalMarks(){
        return marks[0] + marks[1] + marks[2];
    }

    friend void marks(StudentMarks obj);
};

void marks(StudentMarks obj){
    float avg;


    avg = obj.TotalMarks() / 3.0;


    cout << "The average of marks is " << avg << endl;

    cout << "The length of the fullname is: " << obj.Fullname.length() << endl;
}

int main(){
    StudentMarks marks1;

    marks1.getData();
    marks1.displayData();
    marks(marks1);
    cout << "The total mark for 3 subjects are: " << marks1.TotalMarks() << endl;
    

    StudentMarks marks2("Takshil Jain", 85, 92, 78);
    marks2.displayData();
    marks(marks2);
    
    return 0;
}