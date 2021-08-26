#include<bits/stdc++.h>
using namespace std;

double arr[1000010];

int main()
{
    // log(n!)
    // = log(1*2*3*....*n)
    // = log(1)+log(2)+log(3)+.....+log(n)
    for(int i=1; i<=1000010; i++)
        arr[i] = arr[i - 1] + log(i);

    int testcase;
    scanf("%d", &testcase);

    for(int t=1; t<=testcase; t++)
    {
        int n, b;
        scanf("%d %d", &n, &b);

        int numberOfDigit = (arr[n] / log(b)) + 1;
        printf("Case %d: %d\n", t, numberOfDigit);
    }
    return 0;
}
