#include<bits/stdc++.h>
#define pi 2*acos(0.0)
using namespace std;

int t;
double r,ans;
int main()
{
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%lf",&r);
        ans = (4*r*r)-(pi*r*r);
        printf("Case %d: %.2lf\n",i,ans);
    }

    return 0;
}

