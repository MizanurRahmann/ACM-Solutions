#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long N,A=LLONG_MAX,B=LLONG_MAX;
    cin >> N;
    for(long long i=0; i<N; i++)
    {
        long long a,b;
        cin >> a >> b;
        A = min(A,a);
        B = min(B,b);
    }
    cout << A*B << endl;
    return 0;
}
