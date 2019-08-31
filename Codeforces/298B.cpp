#include<bits/stdc++.h>
using namespace std;

char wind[100010];
int main()
{
    long long t,x1,y1,x2,y2,Count=0;
    scanf("%I64d %I64d %I64d %I64d %I64d",&t,&x1,&y1,&x2,&y2);
    scanf("%s",wind);

    for(int i=0;i<t;i++)
    {
        if(x1>x2 && wind[i]=='W'){x1--;}
        else if(x1<x2 && wind[i]=='E'){x1++;}
        else if(y1>y2 && wind[i]=='S'){y1--;}
        else if(y1<y2 && wind[i]=='N'){y1++;}
        Count++;
        if(x1==x2 && y1==y2)
            break;
    }

    if(x1==x2 && y1==y2)
        printf("%I64d\n",Count);
    else
        printf("-1\n");

    return 0;
}
