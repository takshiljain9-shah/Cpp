#include <iostream>
#include <string>

class student{
    private:
    std::string name;
    float gpa;

    public:
    void setDetails(std::string n, float g){
        name = n;
        gpa = g;
    }
    void display(){
        std::cout << "Student: " << name << "| GPA: " << gpa << std::endl;

    }
};

int main(){
    student s1;

    s1.setDetails("Takshil", 9.2);
    s1.display();

    return 0;
}