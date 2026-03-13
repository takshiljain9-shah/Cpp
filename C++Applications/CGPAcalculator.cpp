#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Person{
    protected:
    string name;
    string rollNumber;

    public:
    void data(){
        int roll, number;
        string code;

        cout << "Enter your name: " << endl;
        getline(cin , name);

        cout << "Enter your admission year:  " << endl;
        cin >> roll;

        cout << "Enter code of your department (ex-bcon): " << endl;
        cin >> code;

        cout << "Enter your roll number: " << endl;
        cin >> number;

        rollNumber = to_string(roll) + code + to_string(number);
    }

    virtual void display(){
        cout << "==== STUDENT INFORMATION ====" << endl;

        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class Student : public Person{
    private:
    int n;
    int subjects[100];
    int marks[100];
    int credits[100];
    vector<string> subjectname;

    public:
    void getData(){
        data();
        display();

        cout << "Enter number of subjects: ";
        for (int i = 0; i < 100; i++){
            cin >> subjects[i];
        }
        subjectname.resize(n); 

        cout << "Enter subject names: " << endl;
        for (int i = 0; i < n; i++) {
            cin >> subjectname[i];
        }

        cout << "Enter number of marks for each subject: " << endl;
        for (int i = 0; i < n; i++){
            cin >> marks[i];
        }

        cout << "Enter credits for each subject: " << endl;
        for (int i = 0; i < n; i++){
            cin >> credits[i];
        }
    }

    void displaydata(){
        cout << "Number of subjects: ";
        for (int i = 0; i < 100; i++){
            cout << subjects[i] << " ";
        }

        cout << "Subject names: ";
        for (int i = 0; i < n; i++){
            cout << subjectname[i];
        }

        cout << "Marks for each subject: ";
        for (int i = 0; i < n; i++){
            cout << subjects[i] << " " << subjectname[i] << " " << marks[i] << endl;
        }

        cout << "Credits for each subject: ";
        for (int i = 0; i < n; i++){
            cout << subjects[i] << " " << subjectname[i] << " " << credits[i] << endl;
        }
    }

    inline int TotalCredits(){
        int sum = 0;
        for (int i = 0; i < n; i++){
            sum += credits[i];
        }
        return sum;
    }

    friend void calculateSGPA(Student s);
};

void calculateSGPA(Student s){
    float SGPA;

    int totalCredits = s.TotalCredits();

    for (int i = 0; i < s.n; i++){
        int gradepoint;

        if(s.marks[i] >= 90)
        gradepoint = 10;
        else if(s.marks[i] >= 80)
        gradepoint = 9;
        else if(s.marks[i] >= 70)
        gradepoint = 8;
        else if(s.marks[i] >= 60)
        gradepoint = 7;
        else if(s.marks[i] >= 50)
        gradepoint = 6;
        else
        gradepoint = 0;

        totalCredits += gradepoint * s.credits[i];
    }

    SGPA = totalCredits / s.TotalCredits();

    if(SGPA >= 9)
    cout << "Performance: Outstanding." << endl;
    else if(SGPA <= 8.9 && SGPA >= 8)    
    cout << "Performance: Excellent." << endl;    
    else if(SGPA <= 7.9 && SGPA >= 7)
    cout << "Performance: Very Good." << endl;
    else if(SGPA <= 6.9 && SGPA >= 6)
    cout << "Performance: Good" << endl;
    else
    cout << "Performance: Needs Imporvement." << endl;

    cout << "The length of the name is: " << s.name.length() << endl;
};

int main(){
    Student s1;

    s1.getData();

    Person* p = &s1;

    p->display();

    s1.displaydata();

    return 0;
}