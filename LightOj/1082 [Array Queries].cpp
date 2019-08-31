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


ll arr[1000100];
ll segment[4*1000100];

void build(ll node,ll b,ll e)
{
    if(b==e) { segment[node]=arr[b]; return; }
    ll mid=(b+e)/2;

    build(node*2,b,mid);
    build(node*2+1,mid+1,e);

    segment[node]=min(segment[node*2],segment[node*2+1]);
}

ll query(ll node,ll b,ll e,ll i,ll j)
{
    if(b>j || e<i)
        return LLONG_MAX;
    if(b>=i && e<=j)
        return segment[node];

    ll mid=(b+e)/2;

    return min(query(node*2,b,mid,i,j),query(node*2+1,mid+1,e,i,j));
}

int main()
{
    ll t;
    inl(t);
    for(ll x=1; x<=t; x++)
    {
        ll n,q;
        inl(n); inl(q);
        for(ll i=1; i<=n; i++)
            inl(arr[i]);
        build(1,1,n);

        printf("Case %lld:\n",x);

        for(ll j=0; j<q; j++)
        {
            ll a,b;
            inl(a); inl(b);
            pl(query(1,1,n,a,b));
            pn;
        }
    }
    return 0;
}

