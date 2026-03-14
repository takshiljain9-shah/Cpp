#include <iostream>
#include <string>
#include <vector>
#include <limits>

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
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
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
    int marks[100];
    int credits[100];
    vector<string> subjectname;

    public:
    void getData(){
        data();

        cout << "Enter number of subjects: " << endl;
        cin >> n;
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
        cout << "==== SUBJECT DETAILS ====" << endl;

        for (int i = 0; i < n; i++){
            cout << "Subject: " << subjectname[i]
                 << " | Marks: " << marks[i]
                 << " | Credits: " << credits[i]
                 << endl;
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

    int totalWeightedPoints = 0;

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

        totalWeightedPoints += gradepoint * s.credits[i];
    }

    SGPA = totalWeightedPoints / s.TotalCredits();

    cout << "SGPA of " << s.name << " is " << SGPA << endl;

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

    calculateSGPA(s1);

    return 0;
}