#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    for(int x=1; x<=t; x++)
    {
        double v1,v2,v3,a1,a2,d,time,s;
        scanf("%lf %lf %lf %lf %lf",&v1,&v2,&v3,&a1,&a2);

        d = (v1*v1)/(2*a1*1.0) + (v2*v2)/(2*a2*1.0);
        time = max(v1/(a1*1.0),v2/(a2*1.0));
        s = v3*time;

        printf("Case %d: %lf %lf\n",x,d,s);
    }
    return 0;
}
