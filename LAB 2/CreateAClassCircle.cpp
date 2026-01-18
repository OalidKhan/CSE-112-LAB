#include <bits/stdc++.h>
using namespace std;

class Circle{
    private:
    float radius;
    
    public:
    void setValue(float rad){
        radius = rad;
    }
    float calculateArea(){
        return 3.1416 * radius * radius;
    }
    float calculateCircumference(){
        return 2 * 3.1416 * radius;
    }
    void displayAreaAndCircumference(){
        cout << "Area: " << calculateArea() << "\nCircumference: " << calculateCircumference();
    }
};

int main() {
    float Radius;
    cin >> Radius;
    
    Circle circle;
    circle.setValue(Radius);
    circle.displayAreaAndCircumference();
    
    return 0;
}
