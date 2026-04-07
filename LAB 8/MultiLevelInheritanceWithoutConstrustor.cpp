#include <bits/stdc++.h>
using namespace std;

class Person{
    string name;
    int roll;
    
    public:
    void setPersonInfo(string n, int r){
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
    void setStudentInfo(int s){
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
    void setGraduateInfo(string t){
        thesis = t;
    }
    void displayGraduateInfo(){
        displayStudentInfo();
        cout << "Thesis Name: " << thesis << endl;
    }
};

int main() {
    Graduate ob;
    ob.setPersonInfo("Oalid Khan" , 1);
    ob.setStudentInfo(248);
    ob.setGraduateInfo("GOAL");
    ob.displayGraduateInfo();
}
