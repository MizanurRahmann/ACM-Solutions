#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin>>n;
    int arr[n],x=0,y=n-1,left=0,right=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>arr[j];
        left+=arr[x]; right+=arr[y];
        x++; y--;
    }
    printf("%d\n",abs(left-right));
    return 0;
}
