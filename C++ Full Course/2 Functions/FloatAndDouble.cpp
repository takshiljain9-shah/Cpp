#include <iostream>

using namespace std;

int main(){
    float d = 34.4f; // use f in the last to make it float
    long double e = 34.4l; // use l in the last to make it long double

    cout << "The size of 34.4 is " << sizeof(34.4) << endl; //not telling it what it belongs to
    cout << "The size of 34.4f is " << sizeof(34.4f) << endl; //f
    cout << "The size of 34.4F is " << sizeof(34.4F) << endl; //F
    cout << "The size of 34.4l is " << sizeof(34.4l) << endl; //l
    cout << "The size of 34.4L is " << sizeof(34.4L) << endl; //L

    cout << "The value of d is " << d << endl << "The value of e is " << e << endl;
    return 0;
}