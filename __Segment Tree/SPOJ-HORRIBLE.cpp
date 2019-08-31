#include<bits/stdc++.h>
using namespace std;
#define ll long long


struct node{
    ll sum, prop;
} tree[100001*3];

void init(ll node, ll b, ll e)
{
    if (b==e)
    {
        tree[node].sum = 0;
        tree[node].prop = 0;
        return;
    }
    ll left = node<<1;
    ll right = left+1;
    ll mid = (b+e)>>1;
    init(left, b, mid);
    init(right, mid+1, e);
    tree[node].sum = tree[left].sum + tree[right].sum;
    tree[node].prop = tree[left].prop + tree[right].prop;
}

void update(ll node, ll b, ll e, ll i, ll j, ll value)
{
    if(i>e || j<b)
        return;
    if(b>=i && e<=j)
    {
        tree[node].sum += (e-b+1)*value;
        tree[node].prop += value;
        return;
    }
    ll left = node<<1;
    ll right = left+1;
    ll mid = (b+e)>>1;
    update(left, b, mid, i, j, value);
    update(right, mid+1, e, i, j, value);

    tree[node].sum = tree[left].sum + tree[right].sum + (e-b+1)*tree[node].prop;
}

ll query(ll node, ll b, ll e, ll i, ll j, ll carry)
{
    if(i>e || j<b)
        return 0;
    if(b>=i && e<=j)
        return tree[node].sum + carry*(e-b+1);
    ll left = node<<1;
    ll right = left+1;
    ll mid = (b+e)>>1;

    ll p1 = query(left, b, mid, i, j, carry+tree[node].prop);
    ll p2 = query(right, mid+1, e, i, j, carry+tree[node].prop);
    return p1+p2;
}

int main()
{
    ll T;
    scanf("%lld",&T);
    for(ll t=1; t<=T; t++)
    {
        ll n,q;
        scanf("%lld %lld",&n,&q);

        for(ll i=0; i<q; i++)
        {
            ll a;
            scanf("%lld",&a);
            if(a==0)
            {
                ll b,c,d;
                scanf("%lld %lld %lld",&b, &c, &d);
                update(1,1,n,++b,++c,d);
            }
            else
            {
                ll b,c;
                scanf("%lld %lld",&b, &c);
                printf("%lld\n",query(1,1,n,++b,++c,0));
            }
        }
        init(1,1,n);
    }
}
