#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x1,y1,x2,y2,cow,ans[10001];
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        scanf("%d",&cow);

        for(int j=0;j<cow;j++)
        {
            int lx,ly;
            scanf("%d %d",&lx,&ly);
            if(lx-x1>=0 && ly-y1>=0 && x2-lx>=0 && y2-ly>=0)
                ans[j]=1;
            else
                ans[j]=0;
        }
        printf("Case %d:\n",i);
        for(int j=0;j<cow;j++)
        {
            if(ans[j]==1)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}
