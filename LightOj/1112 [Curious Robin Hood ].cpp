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


ll t,n,q;
ll arr[1000100];
ll seg[4*1000100];

void build(ll node,ll b, ll e)
{
    if(b==e) {seg[node] = arr[b]; return;}
    ll mid = (b+e)/2;

    build(node*2,b,mid);
    build(node*2+1,mid+1,e);

    seg[node] = seg[node*2]+seg[node*2+1];
}

void update(ll node,ll b,ll e,ll pos, ll val)
{

    if(b>pos || e<pos)
        return;
    if(b>=pos && e<=pos)
    {
        seg[node]+=val;
        return;
    }
    ll mid = (b+e)/2;
    update(node*2,b,mid,pos,val);
    update(node*2+1,mid+1,e,pos,val);

    seg[node] = seg[node*2]+seg[node*2+1];
}

ll sum(ll node,ll b,ll e,ll i,ll j)
{
    if(b>j || e<i)
        return 0;
    if(b>=i && e<=j)
        return seg[node];

    ll mid=(b+e)/2;
    return sum(node*2,b,mid,i,j)+sum(node*2+1,mid+1,e,i,j);
}


int main()
{
    scl(t);
    for(ll x=1; x<=t; x++)
    {
        scl(n); scl(q);
        for(ll i=1; i<=n; i++)
            scl(arr[i]);

        build(1,1,n);

        printf("Case %lld:\n",x);
        for(ll i=0; i<q; i++)
        {
            ll m;
            scl(m);
            if(m==1)
            {
                ll a;
                scl(a);
                pl(arr[a+1]);
                update(1,1,n,a+1,-arr[a+1]);
                arr[a+1] = 0;
                pn;
            }
            else if(m==2)
            {
                ll pos,val;
                scl(pos); scl(val);
                arr[pos+1] += val;
                update(1,1,n,pos+1,val);
            }
            else
            {
                ll  a,b;
                scl(a); scl(b);
                pl(sum(1,1,n,a+1,b+1));
                pn;
            }
        }
    }

    return 0;
}

