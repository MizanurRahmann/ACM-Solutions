#include<bits/stdc++.h>
using namespace std;
#define i64 long long
i64 M;

i64 F(i64 N, i64 P)
{
    if(P==0) return 1;
	if(P%2==0) 
	{
		i64 ret=F(N,P/2);
		return ((ret%M)*(ret%M))%M;
	}
	else return ((N%M)*(F(N,P-1)%M))%M;
}

int main()
{
    i64 N;

    while(scanf("%lld", &M) != EOF)
    {
        int pre=0,i=0;
        while(1)
        {
            pre = ((pre%M) + (F(10, i))%M) % M;
            i++;
            if(pre==0)
                break;
        }
        printf("%d\n",i);
    }
    return 0;
}