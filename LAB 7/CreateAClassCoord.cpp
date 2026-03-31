#include <bits/stdc++.h>
using namespace std;
class coord{
    int x,y;
    
    public:
    coord(){
        x=0;
        y=0;
    }
    coord(int X,int Y){
        x=X;
        y=Y;
    }
    coord operator+(coord &obj){
        coord sum;
        sum.x = x + obj.x;
        sum.y = y + obj.y;
        return sum;
    }
    void display(){
        cout << "X = " << x << "\nY = " << y << endl;
    }
};

int main() {
    coord obj1(5,7);
    coord obj2(10,20);
    coord obj3;
    obj3 = obj1 + obj2;
    obj3.display();
    return 0;
}
