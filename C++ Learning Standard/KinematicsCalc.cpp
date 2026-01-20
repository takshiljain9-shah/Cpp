#include <iostream>

using namespace std;

int main(){
    double u, a, t, v;

    cout << "--- Kinematics Solver ---" << endl;

    cout << "Enter Initial Velocity (u) in m/s: ";
    cin >> u;

    cout << "Enter Acceleration (a) in m/s^2: ";
    cin >> t;

    v = u + (a * t);

    cout << "-------------------" << endl;
    cout << "Final Velocity (v) is: " << v << "m/s" << endl;

    return 0;
}