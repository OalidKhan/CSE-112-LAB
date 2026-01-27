#include<bits/stdc++.h>
using namespace std;

class Myclass{
    int a;
    
    public:
    Myclass(int x);
    int get();
};

Myclass :: Myclass(int x){
    a = x;
}

int Myclass :: get(){
    return a;
}

int main(){
    Myclass obj(5);
    Myclass *ptr;
    ptr = &obj;
    
    cout << "With object: " << obj.get() << endl;
    cout << "With pointer: " << ptr->get() << endl;
    
    return 0;
}
