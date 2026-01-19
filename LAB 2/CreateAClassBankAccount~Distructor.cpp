#include <bits/stdc++.h>
using namespace std;

class BankAccount{
    public:
    long long Account_number, Balance;
    BankAccount(){
        Account_number=0;
        Balance=0;
    }
    void setValue(long long AccNum, long long Bal){
        Account_number = AccNum;
        Balance = Bal;
    }
    void getInformation(){
        cout << "Account Number: " << Account_number << endl << "Balance: " << Balance << endl;
    }
    ~BankAccount(){
        cout << "Thank you for banking with us. :)" << endl;
    }
};

int main() {
    BankAccount MyAccount;
    MyAccount.setValue(4103248, 60000);
    MyAccount.getInformation();
    
    return 0;

}
