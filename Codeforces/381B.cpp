#include<bits/stdc++.h>
using namespace std;

#define ll      long long
#define ini(a)  scanf("%d",&a)
#define inl(a)  scanf("%lld",&a)
#define ind(a)  scanf("%lf",&a)
#define ins(a)  scanf("%s",a)
#define pi(a)   printf("%d",a)
#define pl(a)   printf("%lld",a)
#define pd(a)   printf("%lf",a)
#define pn      printf("\n")
#define ps      printf(" ")
#define pb(a)   push_back(a)
#define sv(v)   sort(v.begine(),v.end())
#define svi(v)  sort(v.begin(),v.end(),greater<ll>())
#define clr(a)  memset(a,0,sizeof(a))


ll mm[1000000];
vector <ll> ans;
int main()
{
    ll n;
    inl(n);
    ll arr[n+1];
    for(ll i=0; i<n; i++)
        inl(arr[i]);
    sort(arr,arr+n);

    for(ll i=0; i<n; i++)
    {
        if(mm[arr[i]]<1)
        {
            ans.pb(arr[i]);
            mm[arr[i]]++;
            arr[i] = -1;
        }
    }


    ll pos;
    for(ll i=n-1; i>=0; i--)
        if(arr[i]!=arr[i-1]) { pos=i-1; break; }


    for(ll i=pos; i>=0; i--)
    {
        if(arr[i]!=-1 && mm[arr[i]]<2)
        {
            ans.pb(arr[i]);
            mm[arr[i]]++;
        }
    }

    pi(ans.size()); pn;
    for(ll i=0; i<ans.size(); i++) {pl(ans[i]); ps;}
    pn;
    return 0;
}
