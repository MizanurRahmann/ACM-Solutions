#include<bits/stdc++.h>
using namespace std;
#define i64 long long

i64 phi(i64 n)
{
    i64 result = n;
    if(n == 1)
        return 0;
        
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
    while(scanf("%lld", &n) && n)
        printf("%lld\n",phi(n));
    return 0;
}