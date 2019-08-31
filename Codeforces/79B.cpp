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


struct data
{
    ll f,s;
};
data arr[1000+20];
bool cmp(data c,data v)
{
    if(c.f==v.f)
        return c.s<v.s;
    return c.f<v.f;
}

int main()
{
    ll n,m,k,t,Count=0;
    scl(n); scl(m); scl(k); scl(t);
    for(ll i=0; i<k; i++)
    {
        scl(arr[i].f);
        scl(arr[i].s);
    }
    sort(arr,arr+k,cmp);


    for(ll i=0; i<t; i++)
    {
        ll x,y,ind=1,Count=0,nowpos,pos;
        scl(x); scl(y);
        pos = (x-1)*m+y;

        for(ll j=0; j<k; j++)
        {
            if(arr[j].f==x && arr[j].s==y) { printf("Waste\n"); ind=0; break; }
            nowpos = (arr[j].f-1)*m+arr[j].s;
            if(nowpos>pos)
                break;
            Count++;
        }
        if(ind!=0)
        {
           pos -= Count;
            if(pos%3==1)
                printf("Carrots\n");
            else if(pos%3==2)
                printf("Kiwis\n");
            else if(pos%3==0)
                printf("Grapes\n");
        }
    }
    return 0;
}

