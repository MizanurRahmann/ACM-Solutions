#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,indicator=0,a=0,b=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int x,y;
        cin >> x >> y;

        if(i!=0 && a-x!=0 && b-y!=0)
            indicator = 1;
        a = x; b=y;
    }
    if(indicator==1)
        cout << "NO\n";
    else
        cout << "YES\n";
    return 0;
}
