#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long house,operation,ans;
    scanf("%I64d %I64d",&house,&operation);
    int OP[operation];

    for(int i=0;i<operation;i++)
        scanf("%d",&OP[i]);

    ans = OP[0]-1;
    for(int i=1;i<operation;i++)
    {
        if(OP[i]>=OP[i-1])
            ans+=OP[i]-OP[i-1];
        else
            ans+=house-OP[i-1]+OP[i];
    }
    printf("%I64d\n",ans);

    return 0;
}
