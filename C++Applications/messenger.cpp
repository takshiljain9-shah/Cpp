#include <iostream>
#include <string>

class Messenger {
    public: 

    void greetUser(std::string name){
        std::cout << "--- System Initialized ---" << std::endl;
        std::cout << "Welcome to the Digital Frontier, " << name << "." << std::endl;
        std::cout << "Status: Ready to Build." << std::endl;
    }
};

int main(){
    Messenger myBot; 
    myBot.greetUser("Takshil"); 
    return 0;
}
       
