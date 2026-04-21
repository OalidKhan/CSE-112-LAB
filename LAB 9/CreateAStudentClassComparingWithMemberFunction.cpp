#include <bits/stdc++.h>
using namespace std;

class Student{
    string name;
    int id,age;
    
    public:
    Student(string n, int i, int a){
        name = n;
        id = i;
        age = a;
    }
    bool operator<(Student obj){
        if(age < obj.age)
        return true;
        else
        return false;
    }
    bool operator!=(Student obj){
        if(age != obj.age)
        return true;
        else
        return false;
    }
};

int main() {
    Student s1("Oalid",248,22);
    Student s2("Jim",245,22);
    Student s3("Apu",247,23);
    Student s4("Rafi",269,21);
    
    if(s1<s3)
    cout << "Student 1 is elder" << endl;
    else
    cout << "Student 2 is elder" << endl;
    
    if(s1<s4)
    cout << "Student 1 is elder" << endl;
    else
    cout << "Student 2 is elder" << endl;
    
    if(s4!=s3)
    cout << "They are not same age" << endl;
    else
    cout << "They are same age" << endl;
    
    if(s1!=s2)
    cout << "They are not same age" << endl;
    else
    cout << "They are same age" << endl;
    
    return 0;
}
