#include<bits/stdc++.h>
using namespace std;

#define ll		        long long
#define ini(a)		    scanf("%d",&a)
#define inl(a)		    scanf("%I64d",&a)
#define ind(a)		    scanf("%lf",&a)
#define pi(a)		    printf("%d",a)
#define pl(a)		    printf("%I64d",a)
#define ps		        printf(" ")
#define pn		        printf("\n")
#define pd(a)		    printf("%lf",a)
#define pb(a)		    push_back(a)
#define sv(v)		    sort(v.begin(),v.end())
#define svi(v)		    sort(v.begin(),v.end(),greater<ll>())
#define clr(a)		    memset(a,0,sizeof(a))

int main()
{
    int n,m,x,y,start=1;
    ini(n); ini(m);
    int arr[n+5];

    arr[0]=0;
    for(int i=1; i<=n; i++)
    {
        ini(x); ini(y);
        arr[i] = arr[i-1]+x*y;
    }

    for(int i=1; i<=m; i++)
    {
        ini(x);
        while(x>arr[start])
            start++;
        pi(start);
        pn;
    }
    return 0;
}
