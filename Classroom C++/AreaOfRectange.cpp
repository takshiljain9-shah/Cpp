#include <iostream> 

using namespace std;

int main(){
    float length, breadth , area;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter breadth: ";
    cin >> breadth;

    area = length * breadth;

    cout << "Area of rectangle is "<< area;

    return 0;
}