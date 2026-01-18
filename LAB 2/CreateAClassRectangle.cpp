#include <bits/stdc++.h>
using namespace std;

class Ractangle{
    private:
    int length;
    int width;
    
    public:
    void setValue(int len, int wid){
        length = len;
        width = wid;
    }
    int calculateArea(){
        return length * width;
    }
    void displayArea(){
        cout << "Area: " << calculateArea() << endl;
    }
    int calculatePerimeter(){
        return 2 * length * width;
    }
    void displayPerimeter(){
        cout << "Perimeter: " << calculatePerimeter() << endl;
    }
};

int main() {
    int Length,Width;
    cout << "Enter Length and Width : \n";
    cin >> Length >> Width;
    
    Ractangle ractangle;
    ractangle.setValue(Length, Width);
    ractangle.displayArea();
    ractangle.displayPerimeter();
    
    return 0;
}
