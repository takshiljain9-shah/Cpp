#include <iostream>
#include <string>
using namespace std;

class Person{
    protected:
    string name;
    int age;

    public:
    void getPerson(){
        cout << "Enter your name: " << endl;
        getline(cin, name);

        cout << "Enter age: " << endl;
        cin >> age;
    }
};

class Student : public Person{
    private:
    int marks;

    public:
    void getStudent(){
        cout << "Enter marks: " << endl;
        cin >> marks;
    }
    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main(){
    Student s;
    s.getPerson();
    s.getStudent();
    s.display();
}