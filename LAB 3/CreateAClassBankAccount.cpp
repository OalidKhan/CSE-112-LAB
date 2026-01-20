#include <bits/stdc++.h>
using namespace std;

class BankAccount{
    private:
    long long account_number;
    long long balance;
    
    public:
    BankAccount(){
        account_number = 0;
        balance = 0;
    }
    BankAccount(long long accNum, long long bal){
        account_number = accNum;
        balance = bal;
    }
    void displayValue(){
        cout << "Account Number: " << account_number << endl;
        cout << "Balance: " << balance << endl << endl;
    }
    ~BankAccount(){
        cout << "Information is deleted !!!\n" << endl;
    }
};

int main() {
    BankAccount MyAccount;
    MyAccount.displayValue();
    
    BankAccount MyAccount2(4103248, 60000);
    MyAccount2.displayValue();
    
    return 0;
}
