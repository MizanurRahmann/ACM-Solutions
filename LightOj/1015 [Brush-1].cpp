#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int student;
        scanf("%d",&student);
        int dust[student];
        for(int j=0;j<student;j++)
            scanf("%d",&dust[j]);
        int sum=0;
        for(int j=0;j<student;j++)
        {
            if(dust[j]>=0)
                sum+=dust[j];
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
