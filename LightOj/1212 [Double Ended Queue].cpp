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
#define pf(a)   push_front(a)
#define ppf     pop_front()
#define ppb     pop_back()
#define sv(v)   sort(v.begine(),v.end())
#define svi(v)  sort(v.begin(),v.end(),greater<ll>())
#define clr(a)  memset(a,0,sizeof(a))


ll t,m,n,x;
string str;
deque <ll> dq;

int main()
{
    inl(t);
    for(ll i=1; i<=t; i++)
    {
        inl(n); inl(m);
        printf("Case %lld:\n",i);
        for(ll j=0; j<m; j++)
        {
            cin >> str;
            if(str=="pushLeft")
            {
                inl(x);
                if(dq.size()!=n) {dq.pf(x); printf("Pushed in left: %lld\n",x);}
                else printf("The queue is full\n");
            }
            else if(str=="pushRight")
            {
                inl(x);
                if(dq.size()!=n) {dq.pb(x); printf("Pushed in right: %lld\n",x);}
                else printf("The queue is full\n");
            }
            else if(str=="popLeft")
            {
                if(dq.size()!=0) {x = dq.front(); printf("Popped from left: %lld\n",x); dq.ppf;}
                else printf("The queue is empty\n");
            }
            else if(str=="popRight")
            {
                 if(dq.size()!=0) {x = dq.back(); printf("Popped from right: %lld\n",x); dq.ppb;}
                 else printf("The queue is empty\n");
            }

        }
        dq.clear();
    }
    return 0;
}
