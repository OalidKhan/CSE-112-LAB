#include <bits/stdc++.h>
using namespace std;

class Varsity;

class Department{
    public:
    void Print(Varsity obj);
};

class Varsity{
    private:
    string name;
    
    protected:
    string location;
    
    public:
    Varsity(string nam, string loc){
        name = nam;
        location = loc;
    }
    friend void Department :: Print(Varsity obj);
};

void Department :: Print(Varsity obj){
    cout << "Name: " << obj.name << "\nLocation " << obj.location << endl;
}

int main() {
	Varsity Object1("BUBT" , "Rupnagar Abashik, Mirpur-2, Dhaka.");
	Department Object2;
	Object2.Print(Object1);
	
	return 0;

}
