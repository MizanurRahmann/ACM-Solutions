#include<bits/stdc++.h>
#define ull unsigned long long
#define LIMIT 5000010
using namespace std;

ull phi[LIMIT],last;
void Totient()
{
    for (ull i=1; i<=LIMIT; i++)
        phi[i] = i;
    for (ull p=2; p<=LIMIT; p++)
    {
        if (phi[p] == p)
        {
            phi[p] = p-1;
            for (ull i = 2*p; i<=LIMIT; i += p)
               phi[i] = (phi[i]/p) * (p-1);
        }
    }
    for(ull i=2; i<=LIMIT; i++)
        phi[i] = phi[i]*phi[i] + phi[i-1];
}

int main()
{
    int t;
    Totient();
    scanf("%d",&t);
    for(int m=1; m<=t; m++)
    {
        ull n,x,Sum=0;
        scanf("%llu %llu",&x,&n);
        printf("Case %d: %llu\n",m,phi[n]-phi[x-1]);
    }
    return 0;
}
