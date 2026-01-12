#include <bits/stdc++.h>
using namespace std;

class Car{
    public:
    string brand;
    string model;
    int year;
    
    void displayinfo(){
        cout << brand << endl << model << endl << year;
    }
};

int main()
{
    Car Bike;
    Bike.brand = "Pulsar";
    Bike.model = "NS Refresh Addition";
    Bike.year = 2023;
    Bike.displayinfo();
    
	return 0;
}
