#include <iostream>
using namespace std;

class box{
    private:
    int length;

    public:
    void setLength(int l){
        length = l;
    }
    friend void displayLength(box b);
};

inline int square(int s){
    return s * s;
}

void displayLength(box b){
    cout << "Length of box: " << b.length << endl;
}

int main(){
    box b;
    b.setLength(10);

    displayLength(b);

    int area = square(10);
    cout << "Square of length (Area): " << area << endl;

    return 0;
}