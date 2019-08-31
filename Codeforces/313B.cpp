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



char str[1000100];
ll q,ans,x,y,length,store[1000100];
int main()
{
    ins(str);
    length = strlen(str);

    store[0] = 0;
    for(int i=1; i<length; i++)
    {
        if(str[i]==str[i-1])
            store[i] = store[i-1]+1;
        else
            store[i] = store[i-1];
    }
    inl(q);
    for(int i=1; i<=q; i++)
    {
        inl(x); inl(y);

        ans = store[y-1]-store[x-1];
        pl(ans);
        pn;
    }
    return 0;
}

