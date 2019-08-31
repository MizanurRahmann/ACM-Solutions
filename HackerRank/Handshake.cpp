#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        int n,A=1,B=1;
        cin >> n;
        if(n-1!=0)
            A= n-1;
        if(n-2!=0)
            B = n-1;
        cout << n*A*B << endl;
    }
    return 0;
}
