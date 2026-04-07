#include <bits/stdc++.h>
using namespace std;

class Point3D{
    int x,y,z;
    
    public:
    Point3D(){
        x = 0;
        y = 0;
        z = 0;
    }
    
    friend Point3D operator+(Point3D obj, int i);
    friend Point3D operator+(int i, Point3D obj);
    friend Point3D operator-(Point3D obj1, Point3D obj2);
    
    void display(){
        cout << "X = " << x << ", Y = " << y << ", Z = " << z << endl;
    }
};

Point3D operator+(Point3D obj, int i){
    Point3D temp;
    temp.x = obj.x + i;
    temp.y = obj.y + i;
    temp.z = obj.z + i;
    return temp;
}

Point3D operator+(int i, Point3D obj){
    Point3D temp;
    temp.x = i + obj.x;
    temp.y = i + obj.y;
    temp.z = i + obj.z;
    return temp;
}

Point3D operator-(Point3D obj1, Point3D obj2){
    Point3D temp;
    temp.x = obj1.x - obj2.x;
    temp.y = obj1.y - obj2.y;
    temp.z = obj1.z - obj2.z;
    return temp;
}

int main() {
	Point3D ob1, ob2, ob3;
	ob1 = ob1 + 5;
	ob1.display();
	
	ob2 = 3 + ob2;
	ob2.display();
	
	ob3 = ob1 - ob2;
	ob3.display();
	
return 0;
}
