#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

const string UserName = "Takshil Jain";
int globalSessionCount = 0;

inline void printline(){
    cout << "-------------------------------------------" << endl;
}

struct SocialLink{
    string platform;
    string url;
};

class Portfolio{
    private:
    string currentFocus;
    double logicScore;
    vector<string> stack;

    public:
    Portfolio(string focus, double score) : currentFocus(focus), logicScore(score){}

    void updateFocus(const string& newFocus){
        currentFocus = newFocus;
        cout << "[System]: Focus updated to " << currentFocus << endl;
    }
    void addTech(string tech){
        stack.push_back(tech);
    }
    friend void brandAudit(Portfolio& p);

    void showStack(){
        cout << "Current Tech Stack: ";
        for (const string& s: stack){
            if(s == "Legacy") 
            continue;
            cout << "[" << s << "]";
        }
        cout << endl;
    }
};

void brandAudit(Portfolio& p){
    cout << "\n>>> Running Brand Audit for: " << UserName << endl;
    cout << ">>> Current Logic Stability: " << p.logicScore << "/10.0" << endl;
}

int main(){
    printline();
    cout << " " << UserName << " | DIGITAL RESUME v2.0" << endl;
    printline();

    string visitorFirst, visitorLast;
    cout << "Enter visitor name : ";
    cin >> visitorFirst >> visitorLast;
    string fullVisitor = visitorFirst + " " + visitorLast;
    cout << "\nAccess Granted. Welcome, " << fullVisitor << ". " << endl;

    Portfolio* myProfile = new Portfolio("C++ Mastery & DSA ", 8.5);
    myProfile->addTech("C++");
    myProfile->addTech("Linux");
    myProfile->addTech("Academics");

    SocialLink links[5] = {
        {"GitHUB", "//the links"},
        {"LinkedIN", "//the links"},
        {"LeetCode", "//the links"},
        {"Instagram", "//the links"},
        {"X", "//the links"},
    };

    int solved = 1;
    int target = 300;
    float progress = (float)solved / target * 100.0f;

    bool sessionActive = true;
    while(sessionActive){
        cout << "\n[1] View Identity\n[2] Social Links\n[3] Progress Tracker\n[4] Exit/select:";
        int choice;
        cin >> choice;

        switch(choice){
            case 1:
            cout << "\nIdentity: " << UserName << " | B.Tech CSE" << endl;
            myProfile->showStack();
            break;

            case 2:
            cout << "\n--- Live Social Profiles ---" << endl;
            for (int i = 0; i < 2; i++){
                cout << links[i].platform << ": " << links[i].url << endl;
            }
            break;

            case 3:
            cout << fixed << setprecision(2);
            cout << "\nLeetcode Progress: " << progress << "%" << endl;
            cout << "Momentum Factor: " << sqrt(solved * 10) << endl;
            break;

            case 4:
            cout << "Termination session..." << endl;
            sessionActive = false;
            break;
            
            default:
            cout << "Invalid Input." << endl;
            break;
        }
        if(!sessionActive)
        break;
    }

    brandAudit(*myProfile);

    delete myProfile;
    return 0;
}