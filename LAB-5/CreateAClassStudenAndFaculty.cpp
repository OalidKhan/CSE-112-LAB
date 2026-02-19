#include<bits/stdc++.h>
using namespace std;

class Student;

class Faculty{
    public:
    void Display(Student obj);
};

class Student{
    int studentID;
    
    protected:
    string name;
    
    public:
    Student(string nam, int id){
        name = nam;
        studentID = id;
    }
    
    friend void Faculty :: Display(Student obj);
};

void Faculty :: Display(Student obj){
    cout << "Name: " << obj.name << "\nID: " << obj.studentID << endl;
}

int main(){
    Student oalid("Oalid Khan", 3248);
    Faculty jim;
    jim.Display(oalid);
    return 0;
}
