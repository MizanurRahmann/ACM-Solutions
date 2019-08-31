#include <bits/stdc++.h>
using namespace std;

int t,n,l,r,c,leftCost,rightCost;
int leftTree[101],rightTree[101];
int main()
{
        scanf("%d", &t);
        for(int i=1; i<=t; i++)
        {
            scanf("%d",&n);
            for(int j=0; j<n; j++)
            {
                scanf("%d %d %d",&l, &r, &c);
                if(leftTree[l]==0 && rightTree[r]==0)
                {
                    leftTree[l] = 1;
                    rightTree[r] = 1;
                    leftCost += c;
                }
                else
                {
                    leftTree[r] = 1;
                    rightTree[l] = 1;
                    rightCost += c;
                }
            }
            printf("Case %d: %d\n",i, min(leftCost, rightCost));
            memset(leftTree, 0, sizeof(leftTree));
            memset(rightTree, 0, sizeof(rightTree));
            leftCost = 0;
            rightCost = 0;
        }
    return 0;
}
