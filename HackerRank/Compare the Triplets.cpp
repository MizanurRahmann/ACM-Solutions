#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,x,y,z,P=0,B=0;
    scanf("%d %d %d %d %d %d",&a,&b,&c,&x,&y,&z);

    if(a>x) P++;
    else if(a<x) B++;

    if(b>y) P++;
    else if(b<y) B++;

    if(c>z) P++;
    else if(c<z) B++;

    printf("%d %d\n",P,B);

    return 0;
}
