#include <bits/stdc++.h>
using namespace std;

class Point2D{
    int x,y;
    
    public:
    Point2D(int X, int Y){
        x = X;
        y = Y;
    }
    friend void calculateDistance(Point2D obj1, Point2D obj2);
};

void calculateDistance(Point2D obj1, Point2D obj2){
    double distance = sqrt(pow(obj1.x-obj2.x , 2) + pow(obj1.y-obj2.y , 2));
    cout << "Distance = " << distance << endl;
}

int main() {
	Point2D pnt1(5 , 7);
	Point2D pnt2(8 , 9);
	
	calculateDistance(pnt1 , pnt2);
	
	return 0;
}
