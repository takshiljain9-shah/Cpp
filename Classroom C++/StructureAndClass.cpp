#include <iostream>

using namespace std;

struct PersonStruct{
    char name[10]; //public by default
};

class PersonClass{
    char name[10]; //private by default
    
    public:
    void setName(const char* n){

    }
};

int main(){
    PersonStruct s;
    cin >> s.name;

    PersonClass c;
    // cin >> c.name; will cause error because name is private
    return 0;
}