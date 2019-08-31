#include<bits/stdc++.h>
using namespace std;

unsigned long long t,value,Count;
char s1[1000010],s2[1000010];
unsigned long long power[1000010],Hash[1000010];
int main()
{
    power[0] = 1;
    for(unsigned long long i=1;i<1000010;i++)
        power[i] = (power[i-1] * 37 );

    scanf("%llu",&t);
    for(unsigned long long x=1; x<=t; x++)
    {
        Count = 0,value=0;
        scanf("%s %s",s1,s2);

        unsigned long long len1 = strlen(s1);
        unsigned long long len2 = strlen(s2);

        Hash[0] = (s1[0]-'a'+1);
        for(unsigned long long i=1; i<len1; i++)
            Hash[i] = ( Hash[i-1]+((s1[i]-'a'+1)*power[i]) );

        for(unsigned long long i=0; i<len2; i++)
            value += ((s2[i]-'a'+1)*power[i]);

        for(unsigned long long i=0; i<=len1-len2; i++)
        {
            if(i == 0) {
                if((value*power[i]) == (Hash[i+len2-1]))
                    Count++;
            }
            else {
                if((value*power[i]) == (Hash[i+len2-1]-Hash[i-1]))
                    Count++;
            }
        }
        printf("Case %llu: %llu\n",x,Count);
    }
    return 0;
}

