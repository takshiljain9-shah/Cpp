#include <iostream>

using namespace std;

class rectangle;
int area(rectangle);

class rectangle{
    private:
    int length, breadth;

    public:
    void getdata(){
        cout << "Enter length and breadth: " << endl;
        cin >> length >> breadth;
    }
    friend int area(rectangle);
};

int area(rectangle obj){
    return obj.length * obj.breadth;
}

int main(){
    rectangle obj;
    obj.getdata();

    int result = area(obj);
    
    cout << "The area of rectangle is " << result << endl;
    return 0;
}