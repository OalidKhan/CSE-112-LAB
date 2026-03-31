#include <bits/stdc++.h>
using namespace std;

int compute(int a, int b){
    if(a>b){
        return a;
    }
    else if(a<b){
        return b;
    }
}

int compute(int a, int b, int c){
    if(a<b){
        if(a<c){
            return a;
        }
    }
    else if(b<a){
        if(b<c){
            return b;
        }
    }
    else if(c<a){
        if(c<b){
            return c;
        }
    }
}

int compute(int arr[], int size){
    int sum = 0;
    for(int i=0 ; i<size ; i++){
        sum += arr[i];
    }
    return sum/size;
}

int main() {
    
    int a, b, c;
    cin >> a >> b >> c;
    
    int S;
    cin >> S;
    int ARR[S];
    for(int i=0 ; i<S ; i++){
        cin >> ARR[i];
    }

    cout << "Maximum of Two integers: " << compute(a, b) << endl;
    cout << "Minimum of Three integers: " << compute(a, b, c) << endl;
    cout << "Average of all elements in Array: " << compute(ARR, S) << endl;

	return 0;
}
