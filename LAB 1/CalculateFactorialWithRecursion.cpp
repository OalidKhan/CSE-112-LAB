#include <bits/stdc++.h>
using namespace std;

int Factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n * Factorial(n-1);
    }
}

int main() {
    int N,fact=1;
    cin >> N;
    fact = Factorial(N);
    cout << fact;
    
	return 0;
}
