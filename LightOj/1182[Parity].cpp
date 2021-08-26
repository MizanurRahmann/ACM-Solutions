#include<bits/stdc++.h>
using namespace std;

int countNumOfOnes(long long num)

{
    int count=0;
    while(num!=0)
    {
        count++;
        num=num&(num-1);
    }
    return count;
}
int main()
{
    int t;
    scanf("%d",&t);

    for(int i=1;i<=t;i++)
    {
        long long N;
        scanf("%lld",&N);
        int Ch = countNumOfOnes(N);

        if(Ch%2==0)
            printf("Case %d: even\n",i);
        else
           printf("Case %d: odd\n",i);
    }
    return 0;
}

