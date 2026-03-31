#include <bits/stdc++.h>
using namespace std;

class TaxCalculator{
    public:
    void calculateTax(double income){
        double tax = (income * 15) / 100;
        cout << "Tax = " << tax << endl;
    }
    void calculateTax(double income, double taxRate){
        double tax = (income * taxRate) / 100;
        cout << "Tax = " << tax << endl;
    }
};

int main() {
	TaxCalculator Oalid;
	TaxCalculator Jim;
	Oalid.calculateTax(5000);
	Jim.calculateTax(5000, 20);
	
	return 0;

}
