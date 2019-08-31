#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int tv[n];
    for(int i=0;i<n;i++)
        scanf("%d",&tv[i]);

    sort(tv,tv+n);
    long long sum=0;

    for(int i=0;i<m;i++)
        if(tv[i]<0)
            sum+=abs(tv[i]);
    printf("%I64d",sum);

    return 0;

}

