#include<bits/stdc++.h>
using namespace std;

#define ll          long long
#define ini(a)		scanf("%d",&a)
#define inl(a)		scanf("%lld",&a)
#define ind(a)		scanf("%lf",&a)
#define pi(a)		printf("%d",a)
#define pl(a)		printf("%lld",a)
#define pd(a)		printf("%lf",a)
#define pn          printf("\n")
#define ps          printf(" ")
#define pb(a)		push_back(a)
#define sv(v)		sort(v.begin(),v.end())
#define bsorted(a)  sort(a.begin(),a.end(),greater<ll>())
#define clr(a)		memset(a,0,sizeof(a))

#define setc(c,a)  for(ll mizan=1; mizan<=14; mizan++) c[mizan]=a[mizan]


int main()
{
	ll a[16],c[16],cont,ind;
	ll Count,MAX=-1;
	for(ll i=1; i<=14; i++)
        inl(a[i]);

    for(ll i=1; i<=14; i++)
    {
        if(a[i]>0)
        {
            setc(c,a);
            if(a[i]>=14)
            {
                c[i] = 0;
                for(ll j=1; j<=14; j++)
                    c[j]+=a[i]/14;

                if(a[i]%14!=0)
                {
                    ind = i+1;
                    if(ind>14) ind = 1;
                    cont = a[i]%14;
                    for(;;)
                    {
                        c[ind]++;
                        ind++;
                        cont--;
                        if(ind>14) ind = 1;
                        if(cont<=0) break;
                    }
                }
            }


            else
            {
                ind = i+1;
                if(ind>14) ind = 1;
                cont = a[i];
                c[i] = 0;
                for(;;)
                {
                    c[ind]++;
                    ind++;
                    cont--;
                    if(ind>14) ind = 1;
                    if(cont<=0) break;
                }
            }
            Count = 0;
            for(ll j=1; j<=14; j++)
                if(c[j]%2==0)
                    Count+=c[j];
            MAX = max(MAX,Count);
            //for(ll i=1; i<=14; i++) {pi(c[i]); ps;} pn;
        }
    }

    pl(MAX);
    pn;
    return 0;
}
