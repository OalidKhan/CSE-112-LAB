#include <bits/stdc++.h>
using namespace std;

struct Student{
    string name;
    int roll;
    int mark[3];
    
    int avarageMark(){
        int sum;
        for(int i=0 ; i<3 ; i++){
            sum += mark[i];
        }
        return sum / 3;
    }
    
    void display(){
        cout << "Name: " << name << "\nRoll: " << roll << endl;
    }
};

int main() {
	Student Oalid;
	Oalid.name = "Oalid Khan";
	Oalid.roll = 248;
	Oalid.mark;
	for(int i=0 ; i<3 ; i++){
	    cin >> Oalid.mark[i];
	}
	Oalid.display();
	cout << "Avarage Mark: " << Oalid.avarageMark() << endl;
	

}
