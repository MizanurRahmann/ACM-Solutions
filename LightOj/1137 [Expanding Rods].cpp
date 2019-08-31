#include<bits/stdc++.h>
using namespace std;

double n,C,L,S;

double func(double b)
{
    double x,y;
    double c=L*0.5;

    x = b/2 + (c*c/(2*b));
    y = 2*asin(c/x);
    return x*y;

}

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%lf %lf %lf",&L,&n,&C);
        S=(1.0+(n*C))*L;

        double Start=0.0,End=L,Mid;
        for(int j=1;j<=100;j++)
        {
            Mid=(Start+End)/2;
            if(func(Mid)>S)
                End=Mid;
            else
                Start=Mid;
        }
        printf("Case %d: %lf\n",i,Mid);
    }
    return 0;
}
