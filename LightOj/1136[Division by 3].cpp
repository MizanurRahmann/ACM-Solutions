#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);

    for(int x=1;x<=t;x++)
    {
        long long a,b,Count=0;
        scanf("%lld %lld",&a,&b);

        for(long long i=a;i<=b;i++)
        {
            if( (i*(i+1))%6==0 )
                Count++;
        }
        printf("Case %d: %lld\n",x,Count);
    }

    return 0;
}
