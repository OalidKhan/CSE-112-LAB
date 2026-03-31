#include <bits/stdc++.h>
using namespace std;

class Number{
    public:
    int value;
    
    Number(int val=0){
        value = val;
    }
    Number operator+(Number &obj){
        Number add;
        add.value = value + obj.value;
        return add;
    }
    Number operator*(Number &obj){
        Number multi;
        multi.value = value * obj.value;
        return multi;
    }
    Number operator++(){
        ++value;
        return * this;
    }
    void display(){
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number obj1(10);
    Number obj2(20);
    Number obj3, obj4;
    obj3 = obj1 + obj2;
    obj3.display();
    obj4 = obj1 * obj2;
    obj4.display();
    ++obj1;
    obj1.display();
    
    return 0;
}
