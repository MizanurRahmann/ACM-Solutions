#include <bits/stdc++.h>
using namespace std;

int n,j,k,milse;
string s;

int main()
{

    cin >> n;
    cin >> s;

    for(int i=1; i<n; i++)
    {
        k = 0;
        for(j=i; j<2*i; j++)
        {
            if(s[k]!=s[j])
                break;
            k++;
        }
        //cout << "J: "<<j << " K: "<<2*i<<endl;
        if(j==2*i)
            milse = i;
        //cout << endl<< milse << endl;
    }
    if(milse==0)
        cout << n-milse << endl;
    else
        cout << n-milse+1 << endl;

    return 0;
}

