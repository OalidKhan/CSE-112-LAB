#include <bits/stdc++.h>
using namespace std;
template < typename T >
T Min(T a, T b){
    return (a<b) ? a : b;
}
int main() {
    cout << "Minimum element: " << Min(3,5) << endl;
    cout << "Minimum element: " << Min(3.5,5.69) << endl;
    cout << "Minimum element: " << Min('d','e') << endl;
    
    return 0;
    
}
