#include<bits/stdc++.h>
using namespace std;

#define ll      long long
#define sci(a)  scanf("%d",&a)
#define scl(a)  scanf("%lld",&a)
#define scd(a)  scanf("%lf",&a)
#define scs(a)  scanf("%s",a)
#define scc(a)  scanf(" %c",a)
#define pi(a)   printf("%d",a)
#define pl(a)   printf("%lld",a)
#define pd(a)   printf("%lf",a)
#define pn      printf("\n")
#define ps      printf(" ")
#define pb(a)   push_back(a)
#define sv(v)   sort(v.begine(),v.end())
#define svi(v)  sort(v.begin(),v.end(),greater<ll>())
#define clr(a)  memset(a,0,sizeof(a))
#define mod     1000000007



ll power(ll x,ll y)
{
    int res = 1;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x)%mod;

        y = y>>1;
        x = (x*x)%mod;
    }
    return res%mod;
}

ll fac[100005];
ll ifac[100005];


void pre()
{
    fac[0]=fac[1]=ifac[0]=ifac[1]=1;

    for(ll i=2; i<=100000; i++)
    {
        fac[i]=(fac[i-1]*i)%mod;
        ifac[i]=(ifac[i-1]*power(i,mod-2))%mod;
    }

}

ll nCr(ll n,ll r)
{
    ll ans=(((fac[n]*ifac[r])%mod)*ifac[n-r])%mod;
    return ans;
}




ll n,k,even,odd,esum,osum;
int main()
{
    pre();
    scl(n);
    for(ll i=0; i<n; i++)
    {
        scl(k);
        if(k%2==0)
            even++;
        else
            odd++;
    }

    esum = (ll)((pow(2,even)-1))%mod;


    for(ll i=2; i<=odd; i+=2)
        osum += ((nCr(odd,i)*(esum+1))%mod);

    pl((esum+osum)%mod);
    pn;
}

