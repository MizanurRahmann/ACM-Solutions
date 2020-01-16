#include<bits/stdc++.h>
using namespace std;

double x,y,h;
double func(double mid)
{
    double h1 = sqrt((x*x)-(mid*mid));
    double h2 = sqrt((y*y)-(mid*mid));
    return ((h1*h2)/(h1+h2));
}

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%lf %lf %lf",&x,&y,&h);
        double Start=0.0,End=min(x,y),Mid;

        for(int j=1;j<=100;j++)
        {
            Mid = (Start+End)/2.0;
            if(func(Mid)<h) End = Mid;
            else Start = Mid;
        }
        printf("Case %d: %.10llf\n",i,Mid);
    }

    return 0;
}
