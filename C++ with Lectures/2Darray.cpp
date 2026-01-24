#include <iostream>

using namespace std;

int main(){
    int arr2d[2][3] = {
        {2,3,4},
        {6,7,8}
    };

    for(int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            cout << "the value at " << i << "," << j << " is " <<arr2d[i][j] << endl;
        }
    }

    return 0;
}