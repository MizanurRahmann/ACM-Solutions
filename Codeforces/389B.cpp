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


int main()
{
    ll n,sum=0;
    scl(n);
    char table[n+2][n+2];

    for(ll i=0; i<n; i++)
        scs(table[i]);

    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<n; j++)
        {
            if(table[i][j]=='#'&&table[i+1][j]=='#'&&table[i-1][j]=='#'&&table[i][j+1]=='#'&& table[i][j-1]=='#')
            {
                table[i][j] = 'M';
                table[i+1][j] = 'M';
                table[i-1][j] = 'M';
                table[i][j+1] = 'M';
                table[i][j-1] = 'M';
                sum+=5;
            }
            else if(table[i][j]=='.')
                sum++;
        }
    }
    if(sum != n*n)
        printf("NO\n");
    else
        printf("YES\n");

    return 0;
}

