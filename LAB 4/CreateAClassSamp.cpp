#include <bits/stdc++.h>
using namespace std;

class samp{
    private:
    int i;
    
    public:
    samp(int n){
        i = n;
    }
    int get_i(){
        return i;
    }
};

int sqr_it(samp obj1, samp obj2){
    int sum = obj1.get_i() + obj2.get_i();
    return sum * sum;
}

int main() {
    int a,b;
    cin >> a >> b;
	samp A(a), B(b);
	cout << "Square of the sum is " << sqr_it(A, B) << endl;
}
