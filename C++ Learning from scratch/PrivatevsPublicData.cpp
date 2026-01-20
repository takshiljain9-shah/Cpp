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
    
}