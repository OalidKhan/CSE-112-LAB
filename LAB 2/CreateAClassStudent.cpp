#include <bits/stdc++.h>
using namespace std;

class Student{
    private:
    string name;
    int roll;
    int Mark1;
    int Mark2;
    int Mark3;
    
    public:
    void SetValues(string nam, int rol, int m1, int m2, int m3){
        name = nam;
        roll = rol;
        Mark1 = m1;
        Mark2 = m2;
        Mark3 = m3;
    }
    void DisplayDetails(){
        cout << "Name: " << name << "\nRoll: " << roll << "\nMark 1: " << Mark1 << "\nMark 2: " << Mark2 << "\nMark 3: " << Mark3 << endl;
    }
    double TotalMarks(){
        return Mark1 + Mark2 + Mark3;
    }
    double AvarageMark(){
        return (TotalMarks() / 3);
    }
};

int main() {
    string Sname;
    int Sroll,Sm1,Sm2,Sm3;
    cin >> Sname >> Sroll >> Sm1 >> Sm2 >> Sm3;
	Student Oalid;
	Oalid.SetValues(Sname , Sroll, Sm1, Sm2, Sm3);
	Oalid.DisplayDetails();
	cout << "Total Marks = " << Oalid.TotalMarks() << endl << "Avarage Mark = " << Oalid.AvarageMark();

}
