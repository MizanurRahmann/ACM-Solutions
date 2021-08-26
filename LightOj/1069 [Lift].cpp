#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int x,y,ans;
        scanf("%d %d",&x,&y);
        if(x!=0)
            ans = (abs(x-y)*4)+(x*4)+19;
        else
            ans = 0;
        printf("Case %d: %d\n",i,ans);
    }
    return 0;
}
