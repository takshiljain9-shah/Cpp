#include <iostream> 

using namespace std;

int main (){
    float radius, volume;
    const float PI = 3.14159;

    cout << "Enter radius of sphere: ";
    cin >> radius;

    volume = (4.0/3.0) * PI * radius * radius * radius;

    cout << "volume of sphere is " << volume;

    return 0;
}