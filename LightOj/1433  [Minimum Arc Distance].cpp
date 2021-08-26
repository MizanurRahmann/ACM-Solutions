#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        double Ox,Oy,Ax,Ay,Bx,By;
        scanf("%lf %lf %lf %lf %lf %lf",&Ox,&Oy,&Ax,&Ay,&Bx,&By);

        double r,theta,S,d;

        r = sqrt((Ay-Oy)*(Ay-Oy) + (Ax-Ox)*(Ax-Ox));
        d = sqrt((Ax-Bx)*(Ax-Bx) + (Ay-By)*(Ay-By));

        theta = acos((2*r*r-d*d)/(2.0*r*r));

        S = r*theta;

        printf("Case %d: %lf\n",i,S);
    }
    return 0;
}
