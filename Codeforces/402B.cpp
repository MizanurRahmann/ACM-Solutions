#include<bits/stdc++.h>
using namespace std;

#define ll      long long
#define ini(a)  scanf("%d",&a)
#define inl(a)  scanf("%I64d",&a)
#define ind(a)  scanf("%lf",&a)
#define ins(a)  scanf("%s",a)
#define pi(a)   printf("%d",a)
#define pl(a)   printf("%I64d",a)
#define pd(a)   printf("%lf",a)
#define pn      printf("\n")
#define ps      printf(" ")
#define pb(a)   push_back(a)
#define sv(v)   sort(v.begine(),v.end())
#define svi(v)  sort(v.begin(),v.end(),greater<ll>())
#define clr(a)  memset(a,0,sizeof(a))


int main()
{
    ll n,k;
    inl(n); inl(k);
    ll arr[n+10];


    for(ll i=1; i<=n; i++)
        inl(arr[i]);


    ll l,Count,joto,ans=-1;
    for(ll i=1; i<=1000; i++)
    {
        l=i; Count=0;
        for(ll j=1; j<=n; j++)
        {
            if(arr[j]==l)
                Count++;
            l+=k;
        }
        if(Count>ans) { ans = Count; joto = i;}
    }
    pl(n-ans); pn;

    for(ll i=1; i<=n; i++)
    {
        if(arr[i]<joto)
            printf("+ %I64d %I64d\n",i,joto-arr[i]);
        else if(arr[i]>joto)
            printf("- %I64d %I64d\n",i,arr[i]-joto);
        joto+=k;
    }
    return 0;
}

