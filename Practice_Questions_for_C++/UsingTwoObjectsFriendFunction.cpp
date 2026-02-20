#include <iostream>

using namespace std;

class number{
    private:
    int val;

    public:
    void setValue(int v){
        val = v;
    }
    friend int max(number n1, number n2);
};

int max(number n1, number n2){
    if(n1.val > n2.val){
        return n1.val;
    }else{
        return n2.val;
    }
}
int main(){
    number obj1, obj2;

    obj1.setValue(45);
    obj2.setValue(82);

    int greater = max(obj1, obj2);
    
    cout << "The greater value is: " << greater << endl;

    return 0;
}