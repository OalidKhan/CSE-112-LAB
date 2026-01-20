#include <bits/stdc++.h>
using namespace std;

class Point{
    private:
    int x,y;
    
    public:
    Point(int a, int b){
        x = a;
        y = b;
    }
    Point(const Point &Copy){
        x = Copy.x;
        y = Copy.y;
    }
    int getX(){
        return x;
    }
    int getY(){
        return y;
    }
};

int main() {
    Point point1(6, 9);
    Point point2 = point1;
    cout << "The value of x: " << point1.getX() << "\nThe value of y: " << point1.getY() << endl << endl;
    cout << "The value of x: " << point2.getX() << "\nThe value of y: " << point2.getY() << endl << endl;
    
    return 0;
}
