#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100001

ll arr[MAX];
struct data {
    ll sum, pref, suff, ans;
} tree[MAX*4];


data make_data(ll value)
{
    data x;
    x.sum = value;
    x.pref = value; x.suff = value; x.ans = value;
    return x;
}
data combine(data l, data r)
{
    data x;
    x.sum = l.sum + r.sum;
    x.pref = max(l.pref, l.sum + r.pref);
    x.suff = max(r.suff, r.sum + l.suff);
    x.ans = max(max(l.ans, r.ans), l.suff+r.pref);
    return x;
}
void build(ll node, ll b, ll e)
{
    if(b==e)
    {
        tree[node] = make_data(arr[b]);
        return;
    }
    ll left = node<<1;
    ll right = left + 1;
    ll mid = (b+e)>>1;

    build(left, b, mid);
    build(right, mid+1, e);

    tree[node] = combine(tree[left], tree[right]);
}

void update(int  node, int b, int e, int i, int newValue)
{
    if(i>e || i<b)
        return;
    if (b==i && e==i)
    {
        tree[node] = make_data(newValue);
        return;
    }
    ll left = node<<1;
    ll right = left + 1;
    ll mid = (b+e)>>1;

    update(left,b,mid,i,newValue);
    update(right,mid+1,e,i,newValue);

    tree[node] = combine(tree[left], tree[right]);
}

data query(ll node, ll b, ll e, ll i, ll j)
{
    if(i>e || j<b)
        return make_data(0);
    if(b>=i && e<=j)
        return tree[node];

    ll left = node<<1;
    ll right = left + 1;
    ll mid = (b+e)>>1;

    if(j<=mid)
        return query(left, b, mid, i, j);
    else if(i>mid)
        return query(right, mid+1, e, i, j);
    else
    {
        data p1 = query(left, b, mid, i, j);
        data p2 = query(right, mid+1, e, i, j);
        return combine(p1, p2);
    }
}
int main()
{
    ll n,q;
    scanf("%lld",&n);
    for(ll i=1; i<=n; i++)
        scanf("%lld", &arr[i]);
    build(1,1,n);

    scanf("%lld",&q);
    for(ll i=0; i<q; i++)
    {
        ll a,b,c;
        scanf("%lld %lld %lld", &a, &b, &c);
        if(a==1)
            printf("%lld\n", query(1,1,n,b,c).ans);
        else
            update(1,1,n,b,c);
    }
    return 0;
}

