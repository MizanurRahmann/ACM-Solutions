#include<bits/stdc++.h>
using namespace std;

#define ll      long long
#define ini(a)  scanf("%d",&a)
#define inl(a)  scanf("%lld",&a)
#define ind(a)  scanf("%lf",&a)
#define ins(a)  scanf("%s",a)
#define pi(a)   printf("%d",a)
#define pl(a)   printf("%lld",a)
#define pd(a)   printf("%.10f",a)
#define pn      printf("\n")
#define ps      printf(" ")
#define pb(a)   push_back(a)
#define sv(v)   sort(v.begine(),v.end())
#define svi(v)  sort(v.begin(),v.end(),greater<ll>())
#define clr(a)  memset(a,0,sizeof(a))




int main()
{
    double n,m,x,y,div=0.0;
    ind(n); ind(m);
    int length;
    ini(length);

    for(int i=0; i<length; i++)
    {
        div+=m;
        if(div>=4*n)
            div = fmod(div, 4*n);

        if(div<=n) {x=div; y=0.0;}
        else if(div<=2*n) {x=n; y=div-n;}
        else if(div<=3*n) {x=3*n-div; y=n;}
        else if(div<=4*n) {x=0.0; y=4*n-div;}

        pd(x); ps; pd(y); pn;
    }

    return 0;
}
