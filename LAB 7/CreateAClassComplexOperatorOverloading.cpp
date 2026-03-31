#include <bits/stdc++.h>
using namespace std;
class Complex{
    int real,img;
    
    public:
    Complex(int Real=0, int Img=0){
        real=Real;
        img=Img;
    }
    Complex operator+(Complex &obj){
        Complex sum;
        sum.real = real + obj.real;
        sum.img = img + obj.img;
        return sum;
    }
    Complex operator-(Complex &obj){
        Complex sum;
        sum.real = real - obj.real;
        sum.img = img - obj.img;
        return sum;
    }
    Complex operator*(Complex &obj){
        Complex sum;
        sum.real = (real * obj.real) - (img * obj.img);
        sum.img = (real * obj.img) + (img * obj.real);
        return sum;
    }
    void display(){
        cout << real << " + " << img << "i" << endl;
    }
};

int main() {
    Complex obj1(5,7);
    Complex obj2(10,20);
    Complex obj3, obj4, obj5;
    obj3 = obj1 + obj2;
    obj4 = obj1 - obj2;
    obj5 = obj1 * obj2;
    obj3.display();
    obj4.display();
    obj5.display();
    return 0;
}
