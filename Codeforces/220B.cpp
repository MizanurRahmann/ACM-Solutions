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


struct query
{
    ll l,r,id;
};
query q[200000+10];
ll l=1,k,r=0,ans=0,a[300000+10],ANS[200000+10];

ll cnt[100005];


bool cmp(query &x, query &y)
{
    ll block_a,block_b;
    block_a = x.l/k;
    block_b = y.l/k;

    if(block_a==block_b)
        return x.r<y.r;
    return block_a<block_b;
}

void ADD(ll x)
{
    if(a[x]>100000) return;
    if(cnt[a[x]]==a[x]-1) ans++;
    else if(cnt[a[x]]==a[x]) ans--;
    cnt[a[x]]++;
}
void REMOVE(ll x)
{
    if(a[x]>100000) return ;
    if(cnt[a[x]]==a[x]+1) ans++;
    else if(cnt[a[x]]==a[x]) ans--;
    cnt[a[x]]--;

}


int main()
{
    ll n,Q;
    scl(n); scl(Q);
    for(ll i=1; i<=n; i++)
        scl(a[i]);

    k = 600;

    for(ll i=1; i<=Q; i++)
    {
        scl(q[i].l); scl(q[i].r);
        q[i].id = i;
    }
    sort(q+1,q+1+Q,cmp);

    for(ll i=1; i<=Q; i++)
    {
        while(l>q[i].l) ADD(--l);
        while(r<q[i].r) ADD(++r);
        while(l<q[i].l) REMOVE(l++);
        while(r>q[i].r) REMOVE(r--);

        ANS[q[i].id] = ans;
    }
    for(ll i=1; i<=Q; i++)
    {
        pl(ANS[i]);
        pn;
    }
    return 0;
}

