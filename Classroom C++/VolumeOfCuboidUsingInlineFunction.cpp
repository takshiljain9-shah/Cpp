#include <iostream>

using namespace std;

inline double volumeofCuboid(double length,double breadth, double height){
    return length * breadth * height;
}

int main(){
    double l, b, h;

    cout << "Enter length, breadth and height: " << endl;
    cin >> l >> b >> h;

    int result = volumeofCuboid(l, b, h);

    cout << "The volume of cuboid is " << result << " metre^3" << endl;
    return 0;
}