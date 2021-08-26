#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    for(int x=1; x<=t; x++)
    {
        long long r1,r2,c1,c2,diff_r,diff_c,R,C;
        scanf("%lld %lld %lld %lld",&r1,&c1,&r2,&c2);

        diff_r = abs(r1-r2);
        diff_c = abs(c1-c2);

        if(diff_r%2==0) R=1;
        else R = 0;
        if(diff_c%2==0) C=1;
        else C = 0;

        if(R!=C)
            printf("Case %d: impossible\n",x);
        else
        {
            if(diff_c==diff_r)
                printf("Case %d: 1\n",x);
            else
                printf("Case %d: 2\n",x);
        }
    }
    return 0;
}
