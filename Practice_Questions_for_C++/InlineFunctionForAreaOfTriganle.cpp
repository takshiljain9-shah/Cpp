#include <iostream>

using namespace std;

inline double areaOfTriangle(double breadth, double height){
    return 0.5 * breadth * height;
}

int main(){
    double b, h;

    cout << "Enter breadth and height: " << endl;
    cin >> b >> h;

    double result = areaOfTriangle(b, h);

    cout << "The area of triangle is " << result << endl;
    return 0;
}