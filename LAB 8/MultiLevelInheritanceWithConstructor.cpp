#include <bits/stdc++.h>
using namespace std;

class Person{
    string name;
    int roll;
    
    public:
    Person(string n, int r){
        name = n;
        roll = r;
    }
    void displayPersonInfo(){
        cout << "Name: " << name << "\nRoll: " << roll << endl;
    }
};

class Student : public Person{
    int studentID;
    
    public:
    Student(string n, int r,int s) : Person(n,r){
        studentID = s;
    }
    void displayStudentInfo(){
        displayPersonInfo();
        cout << "Student ID: " << studentID << endl;
    }
};

class Graduate : public Student{
    string thesis;
    
    public:
    Graduate(string n, int r,int s,string t) : Student(n,r,s){
        thesis = t;
    }
    void displayGraduateInfo(){
        displayStudentInfo();
        cout << "Thesis Name: " << thesis << endl;
    }
};

int main() {
    Graduate ob("Oalid Khan" , 1 , 248 , "GOAL");
    ob.displayGraduateInfo();
}
