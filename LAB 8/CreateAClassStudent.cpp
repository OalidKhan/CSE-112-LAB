#include <bits/stdc++.h>
using namespace std;

class Student{
    int English, Bangla, Math;
    
    public:
    Student(int e, int b, int m){
        English = e;
        Bangla = b;
        Math = m;
    }
    bool operator<(Student obj){
        int avg1 = (English + Bangla + Math) / 3;
        int avg2 = (obj.English + obj.Bangla + obj.Math) / 3;
        if(avg1<avg2){
            return true;
        }
        else 
        return false;
    }
    bool operator!=(Student obj){
        int avg1 = (English + Bangla + Math) / 3;
        int avg2 = (obj.English + obj.Bangla + obj.Math) / 3;
        if(avg1!=avg2){
            return true;
        }
        else 
        return false;
    }
};



int main() {
    Student ob1(80, 85, 95), ob2(90,99,100), obj3(100,90,99);
    
    if(ob1 < ob2)
    cout << "Student 1 get less marks\n";
    else
    cout << "Student 2 get less marks\n";
    
    if(ob1 != ob2)
    cout << "Avarage is same\n";
    else
    cout << "Avarage is not same\n";
	
return 0;
}
