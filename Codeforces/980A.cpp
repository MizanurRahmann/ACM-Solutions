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
#define sv(v)   sort(v.begine(),v.end())
#define svi(v)  sort(v.begin(),v.end(),greater<ll>())
#define clr(a)  memset(a,0,sizeof(a))



char str[1000];
int main()
{
    ins(str);
    ll u=0,o=0,length = strlen(str);
    for(ll i=0; i<length; i++)
    {
        if(str[i]=='-')
            u++;
        else
            o++;
    }
    if(o==0)
        printf("Yes\n");
    else if(u%o==0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}

