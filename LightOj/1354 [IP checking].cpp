#include<bits/stdc++.h>
using namespace std;

int DecimalOF(int n);
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int a,A,b,B,c,C,d,D;
        scanf("%d.%d.%d.%d",&a,&b,&c,&d);
        scanf("%d.%d.%d.%d",&A,&B,&C,&D);

        if(DecimalOF(A)==a && DecimalOF(B)==b && DecimalOF(C)==c && DecimalOF(D)==d)
            printf("Case %d: Yes\n",i);
        else
            printf("Case %d: No\n",i);
    }
    return 0;
}
int DecimalOF(int n)
{
    int dNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        dNumber += remainder*pow(2,i);
        ++i;
    }
    return dNumber;
}
