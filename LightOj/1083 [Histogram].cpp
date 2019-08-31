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
#define prss(a) for(ll i=0; i<30; i++) {pl(a[i]); ps;} pn; pn
#define inf 1e17


struct data
{
    ll mini,ind;
};

data seg[1000100];
ll arr[1000100];
ll MAX,n,t;

void build(ll node,ll b,ll e)
{
    if(b==e)
    {
        seg[node].mini = arr[b];
        seg[node].ind = b;
        return;
    }
    ll mid = (b+e)/2;

    build(node*2,b,mid);
    build(node*2+1,mid+1,e);

    if(seg[node*2].mini<=seg[node*2+1].mini)
        seg[node]=seg[node*2];
    else
        seg[node]=seg[node*2+1];
}

data query(ll node,ll b,ll e,ll i,ll j)
{
    if(b>j || e<i)
    {
        data ans;
        ans.mini=inf;
        ans.ind=inf;
        return ans;
    }
    if(b>=i && e<=j)
        return seg[node];

    ll mid=(b+e)/2;

    data p1=query(node*2,b,mid,i,j);
    data p2=query(node*2+1,mid+1,e,i,j);

    if(p1.mini<=p2.mini)
        return p1;
    else
        return p2;
}

void solve(ll l,ll r)
{
    if(l>r)
        return ;
    data ans_now=query(1,1,n,l,r);

    MAX=max(MAX,ans_now.mini*(r-l+1));

    solve(l,ans_now.ind-1);
    solve(ans_now.ind+1,r);
}

int main()
{
    scl(t);
    for(ll x=1; x<=t; x++)
    {

        scl(n);
        for(ll i=1; i<=n; i++)
            scl(arr[i]);
        MAX=-1;

        build(1,1,n);
        solve(1,n);

        printf("Case %lld: %lld\n",x,MAX);
    }
    return 0;
}

