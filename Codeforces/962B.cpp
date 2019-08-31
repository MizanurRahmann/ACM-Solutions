#include<bits/stdc++.h>
using namespace std;

#define ll			long long
#define ini(a)		scanf("%d",&a)
#define inl(a)		scanf("%lld",&a)
#define ind(a)		scanf("%lf",&a)
#define ins(a)      scanf("%s",a)
#define pi(a)		printf("%d",a)
#define pl(a)		printf("%lld",a)
#define pd(a)		printf("%lf",a)
#define pn			printf("\n")
#define ps			printf(" ")
#define sv(v)		sort(v.begine(),v.end())
#define svi(v)		sort(v.begin(),v.end(),greater<ll>())
#define clr(a)		memset(a,0,sizeof(a))



int main()
{
    int n,a,b,c;
    ini(n); ini(a); ini(b);
    char s[n+2];
    ins(s);

    int i=0,M,m,x=a,y=b,ans;
    while(i<n)
    {
        M = max(x,y);
        m = min(x,y);
        c = 0;
        while(s[i]!='*' && i<n)
        {
            if(c==0) {M--; c++;}
            else if(c==1) {m--; c--;}
            i++;
        }
        x = M;
        y = m;
        i++;
    }

    if(x<0) x = 0;
    if(y<0) y = 0;
    pi(a+b-x-y);
    pn;
    return 0;
}
