#include <bits/stdc++.h>
using namespace std;

class Product{
    private:
    string productName;
    string productID;
    double price;
    
    public:
    Product(){
        productName = "Unnamed";
        productID = "0";
        price = 0.0;
    }
    Product(string proNm , string proID , double pri){
        productName = proNm;
        productID = proID;
        price = pri;
    }
    void displayDetails(){
        cout << "Product Name: " << productName << endl;
        cout << "Product ID: " << productID << endl;
        cout << "Product Price: " << price << endl << endl;
    }
    ~Product(){
        cout << "The information is deleted !!!" << endl << endl;
    }
};

int main() {
    Product none;
    none.displayDetails();
    
    Product chips("Potato Crackers" , "248" , 10);
    chips.displayDetails();
    
    return 0;
}
