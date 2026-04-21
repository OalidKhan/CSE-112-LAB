#include <bits/stdc++.h>
using namespace std;
template < typename T >
T findMin(T arr[], int s){
    sort(arr, arr+s);
    return arr[0];
}
int main() {
    int ARR[5] = {5,4,3,2,1};
    cout << "Minimum element: " << findMin(ARR,5) << endl;
    
    float Arr[5] = {5.5,3.3,1.1,2.2,0.11};
    cout << "Minimum element: " << findMin(Arr,5) << endl;
    
    
    return 0;
    
}
