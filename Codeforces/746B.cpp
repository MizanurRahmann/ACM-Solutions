#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,Count=0;
    scanf("%d",&n);
    char str[n+1];
    scanf("%s",str);

    for(int i=n-2;i>=0;i-=2)
    {
        printf("%c",str[i]);
        str[i]=' ';
    }
    for(int i=0;i<n;i++)
    {
        if(str[i]!=' ')
            printf("%c",str[i]);
    }
    printf("\n");


    return 0;

}
