#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,five=0,zero=0;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(int i=0;i<n;i++)
    {
        if(arr[i]==5) five++;
        else zero++;
    }

    if(zero==0)
        printf("-1\n");
    else if(five<9)
        printf("0\n");
    else
    {
        five/=9;
        five = five*9;

        for(int i=0;i<five;i++)
            printf("5");
        for(int i=0;i<zero;i++)
            printf("0");
        printf("\n");
    }
    return 0;
}
