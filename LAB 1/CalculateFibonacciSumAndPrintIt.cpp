#include <bits/stdc++.h>
using namespace std;

int Fibonacci(int N){
	 if(N==0) 
	    return 0;
	 else if(N==1) 
	    return 1;
	 else 
	    return (Fibonacci(N-1) + Fibonacci(N-2));
}

int main() {
	int N,sum=0;
	cin >> N;
	for(int i=0; i<N; i++){
	    cout << Fibonacci(i) << " ";
	    sum += Fibonacci(i);
	}
	cout << endl << sum;
    
    return 0;
}
