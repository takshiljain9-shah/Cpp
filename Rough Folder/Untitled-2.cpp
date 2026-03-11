#include <iostream>
#include <string>

using namespace std;

// 1. Base Class: Person
class Person {
protected:
    string name;
public:
    virtual void getData() { // Virtual for Runtime Polymorphism
        cout << "Enter name: ";
        cin >> name;
    }
    virtual void display() {
        cout << "Name: " << name << endl;
    }
    virtual ~Person() {} // Good practice with dynamic memory
};

// 2. Derived Class: Student (Inheritance)
class Student : public Person {
private:
    int* marks; // Dynamic memory (Requirement: new/delete)
    int count;

public:
    Student(int n = 3) {
        count = n;
        marks = new int[count]; // Dynamic Allocation
    }

    // Overriding Base Class functions
    void getData() override {
        Person::getData(); // Call parent's name input
        cout << "Enter marks for " << count << " subjects: ";
        for (int i = 0; i < count; i++) {
            cin >> marks[i];
        }
    }

    void display() override {
        Person::display();
        cout << "Marks: ";
        for (int i = 0; i < count; i++) cout << marks[i] << " ";
        cout << endl;
    }

    // Inline function for Average (Requirement)
    inline float calculateAverage() {
        int sum = 0;
        for (int i = 0; i < count; i++) sum += marks[i];
        return (float)sum / count;
    }

    // Friend function declaration
    friend void analyzeStudent(Student &s);

    // Destructor (Requirement: delete)
    ~Student() {
        delete[] marks;
    }
};

// 3. Friend Function (Requirement)
void analyzeStudent(Student &s) {
    // Accessing private 'marks' directly through friendship
    cout << "--- Analyzer (Friend Function) ---" << endl;
    cout << "Analyzing data for: " << s.name << endl;
    cout << "Average Mark: " << s.calculateAverage() << endl;
}

int main() {
    // 4. Runtime Polymorphism & Dynamic Memory (Requirement)
    Person* ptr = new Student(3); 

    ptr->getData();  // Calls Student::getData()
    ptr->display();  // Calls Student::display()

    // Since ptr is a Person*, we cast it to Student to use Student-specific friends/inlines
    Student* sPtr = dynamic_cast<Student*>(ptr);
    if (sPtr) {
        analyzeStudent(*sPtr);
    }

    delete ptr; // Freeing memory
    return 0;
}