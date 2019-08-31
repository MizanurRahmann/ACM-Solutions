#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll x,sum=0;
    scanf("%lld",&x);
    ll arr[x];
    for(int i=0;i<x;i++)
    {
        scanf("%lld",&arr[i]);
        sum+=arr[i];
    }
    printf("%lld\n",sum);
    return 0;
}

