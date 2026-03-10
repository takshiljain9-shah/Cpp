#include <iostream>
using namespace std;

class shape{
    public:
    virtual void draw(){
        cout << "Drawing a shape. " << endl;
    }
};

class circle : public shape{
    public: 
    void draw(){
        cout << "Drawing a circle. " << endl;
    }
};

class rectangle : public shape{
    public:
    void draw(){
        cout << "Drawing a rectangle. " << endl;
    }
};

int main(){
    shape *s;

    circle c;
    rectangle r;

    s = &c;
    s->draw();

    s = &r;
    s->draw();
}