#include <bits/stdc++.h>


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

query q[50000+10];
ll l,r,k,ans,a[100000+10],cnt[100005],ANS[50000+10];

bool cmp(query x, query y)
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
    cnt[a[x]]++;
    if(cnt[a[x]]==1)
        ans++;
}
void REMOVE(ll x)
{
    cnt[a[x]]--;
    if(cnt[a[x]]==0)
        --ans;
}




int main()
{
//    freopen("fast_querys.txt","w",stdout);

    ll n,Q,t;
    scl(t);
    for(ll z=1; z<=t; z++)
    {
        scl(n); scl(Q);

        for(ll i=1; i<=n; i++)
            scl(a[i]);


        k = 550;
        ans=0;
        r=-1;
        l=0;
        memset(cnt,0,sizeof cnt);

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
        printf("Case %lld:\n",z);
        for(ll i=1; i<=Q; i++)
        {
            pl(ANS[i]);
            pn;
        }
    }
    return 0;
}
