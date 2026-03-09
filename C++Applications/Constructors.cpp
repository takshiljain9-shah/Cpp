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
        for (int i = 0; i <= 3; i++){
            marks[i] = 0;
        }
        cout << "[System]: New student record created with default values." << endl;
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

    cout << "The total mark for 3 subjects are: " << marks1.TotalMarks() << endl;
    
    marks(marks1);

    return 0;
}