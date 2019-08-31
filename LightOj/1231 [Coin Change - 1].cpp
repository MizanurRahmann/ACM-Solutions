#include<bits/stdc++.h>
using namespace std;
long long dpTable[101][10001];
int main()
{
    int testcase;
    scanf("%d",&testcase);
    for(int i=1;i<=testcase;i++){

        int n,make;
        scanf("%d %d",&n,&make);
        int coin[n],amount[n],taka=0;
        for(int j=0;j<n;j++)
            scanf("%d",&coin[j]);
        for(int j=0;j<n;j++)
            scanf("%d",&amount[j]);

        for(int j=1;j<=n;j++){
            taka+=amount[j-1]*coin[j-1];
            for(int k=0;k<=make;k++){
                if(k==0)
                    dpTable[j][k] = 1;
                else if(k>=coin[j-1]){
                    if(taka>=k)
                        dpTable[j][k]=(dpTable[j-1][k]+dpTable[j][k-coin[j-1]])%100000007;
                    else
                        dpTable[j][k] = dpTable[j-1][k];
                }
                else
                    dpTable[j][k]=dpTable[j-1][k]%100000007;
            }
        }
        for(int j=0;j<=n;j++){
            for(int k=0;k<=make;k++)
                printf("%lld  ",dpTable[j][k]);
            printf("\n");
        }
        printf("Case %d: %lld\n",i,dpTable[n][make]%100000007);
    }
    return 0;
}
