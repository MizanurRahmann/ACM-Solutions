#include <bits/stdc++.h>
using namespace std;

int main(){
    int testCase, onePos=0, zeroPos=0, loopPos=0;
    scanf("%d", &testCase);

    for(int t=1; t<=testCase; t++)
    {
        long long int n, N, nextN;
        scanf("%lld", &n);

        // Shift first 1 that have 0 on its left
        N = n;
        while(n != 0)
        {
            loopPos++;
            if(n % 2 == 1)
            {
                onePos = loopPos;
                n = n >> 1;
                if(n % 2 == 0){ zeroPos = onePos + 1; break; }
                else { loopPos++; onePos++; };
            }
            else
            {
                zeroPos = loopPos;
                if(zeroPos > onePos && onePos != 0) break;
            }
            n = n >> 1;
        }
        nextN = N + (long long int)(pow(2, onePos)) - (long long int)(pow(2, onePos-1));

        // Shift all 1 to last
        int power=1;
        n = N; loopPos = 0;
        while(onePos != 1)
        {
            if(n % 2 == 1)
            {
                nextN = nextN - (long long int)(pow(2, loopPos)) + power;
                power *= 2;
            }
            n = n >> 1;
            loopPos++;
            onePos--;
        }

        // Print next N
        printf("Case %d: %lld\n", t, nextN);
        zeroPos = 0; onePos = 0; loopPos = 0; power = 1;
    }
}
