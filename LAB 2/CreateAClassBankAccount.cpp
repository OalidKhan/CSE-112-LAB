#include <bits/stdc++.h>
using namespace std;

class BankAccount{
    private:
    long long accountNumber;
    long long balance = 0;

    public:
    string accountHolderName;
    string bankName;

    void setInfo(string nam, long long accNo, long long bale, string bankNam){
        accountNumber = accNo;
        balance = bale;
        accountHolderName = nam;
        bankName = bankNam;
    }

    void deposit(int n){
        if(n<=0){
            cout << "ERROR 404";
        }
        else{
            balance += n;
            cout << "Amount deposit succeffully.\n";
        }
    }
    void withdraw(int n){
        if(n>balance){
            cout << "ERROR 404";
        }
        else{
            balance -= n;
            cout << "Amount withdraw succeffully.\n";
        }
    }
    long long getBalance(){
        int bal = balance;
        return bal;
    }
    void displayAccountDetails(){
        cout << "Name: " << accountHolderName << "\nBank Name: " << bankName << "\nAccount Number: " << accountNumber << "\nBalance: " << getBalance();
    }
};

int main() {
	string NAME,BANK_NAME;
	long long ACCNo, BALANCE;
	cin >> NAME >> BANK_NAME >> ACCNo >> BALANCE;

	BankAccount mine;
	mine.setInfo(NAME, ACCNo, BALANCE, BANK_NAME);

	int DEPOSITE,WITHDRAW;

	cin >> DEPOSITE;
	mine.deposit(DEPOSITE);
	cout << mine.getBalance() << endl;

	cin >> WITHDRAW;
	mine.withdraw(WITHDRAW);
	cout << mine.getBalance() << endl;

	mine.displayAccountDetails();

	return 0;


}
