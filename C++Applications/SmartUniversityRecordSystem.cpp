#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Person{
    protected:
    string name;
    int age;

    public:
    void getPersonData(){
    cout << "Enter your name: " << endl;
    cin.ignore();
    getline(cin, name);

    cout << "Enter your age: " << endl;
    cin >> age;
    }

    virtual void display(){
        cout << "Person Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person{
    private:
    int subject;
    int* marks;

    public:
    void getData(){
    getPersonData();
    cout << "Enter number of subjects: " << endl;
    cin >> subject;

    marks = new int[subject];

    for (int i = 0; i < subject; i++){
        cout << "Enter marks for each subject: " << i + 1 << ": ";
        cin >> marks[i];
        }
    }
    
    inline int TotalMarks(){
        int sum = 0;
        for (int i = 0; i < subject; i++){
            sum += marks[i];
        }
        return sum;
    }

    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Number of subjects: " << subject << endl;
        cout << "Total Marks: " << TotalMarks() << endl;
    }
    
    ~Student(){
        delete[] marks;
    }

    friend void averagemarks(Student obj);
};

void averagemarks(Student obj){
    float avg;
    avg = obj.TotalMarks() / (float)obj.subject;

    cout << "The average of total marks is " << avg << endl;

    if(avg >= 85)
    cout << "Student Performance: Excellent." << endl;
    else if(avg >= 70 && avg <= 84)
    cout << "Student Performance: Good." << endl;
    else if(avg >= 50 && avg <= 69)
    cout << "Student Performance: Average." << endl;
    else if(avg < 50)
    cout << "Student Performance: Poor." << endl;

    cout << "The length of the username is " << obj.name.length() << endl;
}

int main(){
    Student s1;

    s1.getData();
    s1.display();

    cout << "Total marks of the student in all subjects: " << s1.TotalMarks() << endl;
    
    averagemarks(s1);

    Person* p;

    p = &s1;
    p->display();

    vector<int> sample;

    sample.push_back(10);
    sample.push_back(20);
    sample.push_back(30);

    cout << "Vector elements: ";
    for(int i = 0; i < sample.size(); i++){
        cout << sample[i] << " ";
    }
    return 0;
}