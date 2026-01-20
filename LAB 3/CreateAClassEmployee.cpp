#include <bits/stdc++.h>
using namespace std;

class Employee{
    private:
    string name;
    float basicSalary;
    float bonus;
    
    public:
    Employee(){
        name = "Unknown";
        basicSalary = 0.00;
        bonus = 0.00;
    }
    Employee(string nam, float bscS, float bns){
        name = nam;
        basicSalary = bscS;
        bonus = bns;
    }
    void setSalary(float bscS, float bns){
        basicSalary = bscS;
        bonus = bns;
        cout << "The salary has been updated !!!\n";
    }
    float calculateTotalSalary(){
        return basicSalary + bonus;
    }
    void display(){
        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << calculateTotalSalary() << endl << endl;
    }
};

int main() {
    Employee MySalary;
    MySalary.display();
    
    Employee Oalid("Oalid" , 50000 , 2000);
    Oalid.display();
    
    Oalid.setSalary(40000, 5000);
    Oalid.display();
    
    return 0;
}
