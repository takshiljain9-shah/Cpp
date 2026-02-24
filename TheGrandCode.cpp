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
}