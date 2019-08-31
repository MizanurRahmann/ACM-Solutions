#include<bits/stdc++.h>
#define PI acos(-1)
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n;
        double R,angle,r;
        scanf("%lf %d",&R,&n);
        angle = sin(PI/n);
        r = (angle*R)/(1+angle);
        printf("Case %d: %.10lf\n",i,r);
    }
    return 0;
}

/*
SOLUTION IDEA :
In the first figure, the circle contains 6 small circles . So the angle is (PI/6) . When the circle contains n small circles then the angle will be (PI/n) .
Now from trigonometry , we can write,

sin(PI/n) = r/(R-r)……………(1)
Now just by solving the equation (1) we get,
r = sin(PI/n)*(R-r)
r =( R*sin(PI/n)) – (r*sin(PI/n)
1 =(( R*sin(PI/n))/r) – sin(PI/n) [ dividing both sides by r ]
1 + sin(PI/n) = ( R*sin(PI/n))/r
r = ( R*sin(PI/n)) / (1 + sin(PI/n)) ……..(2)

*/
