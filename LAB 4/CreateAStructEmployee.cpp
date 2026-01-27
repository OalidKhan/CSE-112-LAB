#include <bits/stdc++.h>
using namespace std;

struct Employee{
    long long id, basic_salary, gross_salary, DA, HRA;
    string name;
    Employee(string nam, long long bss, long long da, long hra){
        name = nam;
        basic_salary = bss;
        DA = da;
        HRA = hra;
    }
    long long get_gross_salary(){
        gross_salary = basic_salary + DA + HRA;
        return gross_salary;
    }
    void display(){
        cout << "Basic Salary: " << basic_salary << "\nDA: " << DA <<"\nHRA: " << HRA
<< "\nGross Salary: " << get_gross_salary() << endl;    }
};

int main() {
    struct Employee oalid("Oalid Khan" , 45000 , 5000 , 2000);
    oalid.display();
    
    return 0;
}
