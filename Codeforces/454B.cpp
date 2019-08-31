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
#define sv(v)   sort(v.begine(),v.end())
#define svi(v)  sort(v.begin(),v.end(),greater<ll>())
#define clr(a)  memset(a,0,sizeof(a))



int main()
{
    ll n;
	inl(n);
	ll a[n],Count=0,s=0;
	for(ll x=0; x<n; x++){
		inl(a[x]);
		if(a[x]<a[x-1]&&x)
        {
            Count++;
            s=x;
        }
	}
	if(!Count)
        printf("0");
	else if(Count==1 && a[0]>=a[n-1]) pl(n-s);
	else printf("-1");
	pn;
    return 0;
}

