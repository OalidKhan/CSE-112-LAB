#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,sum=0;
    cin >> N;
    for(int i=1 ; i<=N ; i++)
    {
        sum += i;
    }
    
    cout << "SUM = " << sum;
    
	return 0;
}
