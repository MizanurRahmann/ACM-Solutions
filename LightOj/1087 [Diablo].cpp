#include<bits/stdc++.h>
using namespace std;

#define ll      long long
#define sci(a)  scanf("%d",&a)
#define scl(a)  scanf("%lld",&a)
#define scd(a)  scanf("%lf",&a)
#define scd(a)  scanf("%lf",&a)
#define scc(a)  scanf("%c",&a)
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

ll n,q;
ll seg[4*150005];
ll arr[150005];


void build(ll node,ll b,ll e)
{
    if(b==e)
    {
       if(b<=n)
           seg[node]=1;
       else
           seg[node]=0;
       return ;
    }
    ll mid=(b+e)/2;

    build(node*2,b,mid);
    build(node*2+1,mid+1,e);

    seg[node]=seg[node*2]+seg[node*2+1];
}

void update(ll node,ll b,ll e,ll pos,ll val)
{
    if(b>pos || e<pos)
        return;

    if(b>=pos && e<=pos)
    {
        seg[node]+=val;
        return;
    }
    ll mid=(b+e)/2;

    update(node*2,b,mid,pos,val);
    update(node*2+1,mid+1,e,pos,val);

    seg[node]=seg[node*2]+seg[node*2+1];
}

ll call (ll node,ll b,ll e,ll sum)
{
    if(b==e)
        return b;
    ll mid=(b+e)/2;

    if(seg[node*2]>=sum)
        return call(node*2,b,mid,sum);
    else
        return call(node*2+1,mid+1,e,sum-seg[node*2]);
}




int main()
{
    ll t;
    scl(t);
    for(ll x=1; x<=t; x++)
    {
        scl(n); scl(q);

        for(ll i=1; i<=n; i++)
            scl(arr[i]);

        build(1,1,150000);

        printf("Case %lld:\n",x);
        for(ll i=0; i<q; i++)
        {
            char ch;
            ll value;
            scanf(" %c %lld",&ch,&value);

            if(ch == 'c')
            {
                if(value>seg[1])
                    printf("none\n");
                else
                {
                    ll ind = call(1,1,150000,value);
                    pl(arr[ind]); pn;
                    update(1,1,150000,ind,-1);
                }
            }
            else
            {
                n++;
                update(1,1,150000,n,1);
                arr[n]=value;
            }
        }
    }
    return 0;
}
