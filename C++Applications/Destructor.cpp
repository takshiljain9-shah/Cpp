#include <iostream>
#include <string>
using namespace std;

class StudentMarks {
private:
    string Fullname;
    int* marks; // Pointer for Dynamic Memory

public:
    // Default Constructor
    StudentMarks() {
        Fullname = "Unknown";
        marks = new int[3]; 
        for (int i = 0; i < 3; i++) marks[i] = 0;
    }

    // Parameterized Constructor
    StudentMarks(string n, int m1, int m2, int m3) {
        Fullname = n;
        marks = new int[3];
        marks[0] = m1; 
        marks[1] = m2; 
        marks[2] = m3;
    }

    // Destructor (Crucial for Dynamic Memory)
    ~StudentMarks() {
        delete[] marks; 
    }

    void getData() {
        getline(cin , Fullname);
        for (int i = 0; i < 3; i++) cin >> marks[i];
    }

    void displayData() {
        cout << Fullname << endl;
        for (int i = 0; i < 3; i++) cout << marks[i] << " ";
        cout << endl;
    }

    // Inline Function
    inline float getAvg() {
        return (marks[0] + marks[1] + marks[2]) / 3.0;
    }

    friend void analysis(StudentMarks &obj);
};

// Friend Function using Reference (&)
void analysis(StudentMarks &obj) {
    cout << obj.getAvg() << endl;
    cout << obj.Fullname.length() << endl;
}

int main() {
    // Using Default Constructor
    StudentMarks s1;
    s1.getData();
    s1.displayData();
    analysis(s1);

    // Using Parameterized Constructor
    StudentMarks s2("Takshil", 90, 80, 70);
    s2.displayData();
    analysis(s2);

    return 0;
}