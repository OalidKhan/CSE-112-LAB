#include <bits/stdc++.h>
using namespace std;

class Sample{
    private:
    string s;
    
    public:
    Sample(string n){
        s = n;
    }
    string get_s(){
        return s;
    }
};

string add_string(Sample obj1, Sample obj2){
    string name = obj1.get_s() + obj2.get_s();
    return name;
}

int main() {
	Sample A("Oalid "), B("Khan");
	cout << "Square of the sum is " << add_string(A, B) << endl;
}
