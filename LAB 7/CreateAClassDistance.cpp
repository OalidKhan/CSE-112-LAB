#include <bits/stdc++.h>
using namespace std;

class Distance{
    int meters;
    
    public:
    Distance(int m=0){
        meters = m;
    }
    Distance operator++(){
        ++meters;
        return *this;
    }
    Distance operator--(){
        --meters;
        return *this;
    }
    void display(){
        cout << "Meter: " << meters << endl;
    }
};

int main() {
    Distance obj(5);
    obj.display();
    ++obj;
    obj.display();
    --obj;
    obj.display();
    
    return 0;
}
