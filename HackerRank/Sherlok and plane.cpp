#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0 ;i<t; i++)
    {
        int A,B,C,x1,x2,x3,x4,y1,y2,y3,y4,z1,z2,z3,z4;
        int a1,a2,a3,b1,b2,b3,c1,c2,c3;

        scanf("%d %d %d",&x1,&y1,&z1);
        scanf("%d %d %d",&x2,&y2,&z2);
        scanf("%d %d %d",&x3,&y3,&z3);
        scanf("%d %d %d",&x4,&y4,&z4);

        a1 = x4-x1;     a2 = x2-x1;     a3 = x3-x1;
        b1 = y4-y1;     b2 = y2-y1;     b3 = y3-y1;
        c1 = z4-z1;     c2 = z2-z1;     c3 = z3-z1;

        A = a1*(c2*b3-c3*b2);
        B = b1*(c2*a3-a2*c3);
        C = c1*(b2*a3-a2*b3);

        if(A-B+C==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
