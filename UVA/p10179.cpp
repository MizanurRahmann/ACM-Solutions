#include<bits/stdc++.h>
using namespace std;
#define i64 long long

i64 phi(i64 n)
{
    i64 result = n;
    for(i64 i=2; i*i<=n; i++)
    {
        if(n % i == 0)
        {
            while(n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if(n > 1)
        result -= result / n;
    return result;
}
int main()
{
    i64 n;
    while(1)
    {
        scanf("%lld", &n);
        if(n == 0) break;
        printf("%lld\n",phi(n));
    }
    return 0;
}