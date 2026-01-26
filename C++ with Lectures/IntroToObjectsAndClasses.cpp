#include <iostream>

using namespace std;

class Employee{
        public:
        string name;
        int salary;
    };

int main(){
    Employee tak;
    tak.name = "takshil";
    tak.salary = 100;
    cout << "the name of first emplyeee is " << tak.name << " and his salaty is " <<tak.salary << endl;



    return 0;
}