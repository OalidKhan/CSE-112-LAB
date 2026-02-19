#include<bits/stdc++.h>
using namespace std;

class Student{
    int marks;
    
    public:
    Student(int m){
        marks = m;
    }
    
    friend void findTopper(Student s1, Student s2);
};

void findTopper(Student s1, Student s2){
    if(s1.marks > s2.marks){
        cout << "Student 1 is Topper\n"; 
    }
    else if(s1.marks < s2.marks){
        cout << "Student 2 is Topper\n";
    }
    else{
        cout << "Both get the same marks\n";
    }
}

int main(){
    Student Oalid(6);
    Student Jim(7);
    findTopper(Oalid, Jim);
    
    return 0;
}
