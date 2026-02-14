#include <iostream>

using namespace std;

int main(){
    //used for multiple names for one variable and the most easy example is add can be written as sum too.

    float x = 500;
    float & y = x;
    
    cout << x << endl;
    cout << y << endl;
    
    return 0;
}