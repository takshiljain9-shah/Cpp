#include <iostream>

using namespace std;

int main () {
    int r, c;
    int x[10][10], y[10][10], sum[10][10];
    
    cout << "Enter values for rows and columns (max 10): ";
    cin >> r >> c;

    // 1. Input for First Matrix
    cout << "Enter values for first matrix: " << endl;
    for(int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> x[i][j];
        }
    }

    // 2. Input for Second Matrix
    cout << "Enter values for second matrix: " << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> y[i][j];
        }
    }

    // 3. Calculate Sum and Display Result
    cout << "The sum of the two matrices is: " << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum[i][j] = x[i][j] + y[i][j]; // Calculate
            cout << sum[i][j] << " ";      // Print element
        }
        cout << endl; // New line after each row
    }

    return 0;
}