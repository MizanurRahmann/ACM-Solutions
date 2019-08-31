#include <iostream>
#include<stdio.h>
#include<map>
using namespace std;

int main()
{
    long long n;
    while(scanf("%lld",&n)==1)
    {
        long long i;
        map<int,int> mp;
        long long MAX=0;
        for(i=0;i<n;i++)
        {
            long long level;
            scanf("%lld",&level);
            mp[level]++;
            if(mp[level]>MAX)
            {
                MAX=mp[level];
            }
        }
        printf("%lld\n",MAX);
    }
    return 0;
}
