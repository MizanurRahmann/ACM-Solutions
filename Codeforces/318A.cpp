#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long N,M;
    scanf("%I64d %I64d",&N,&M);

    N= (N/2)+(N%2);

    if(N>=M)
        printf("%I64d\n",(2*M)-1);
    else
        printf("%I64d\n",2*(M-N));

    return 0;
}
