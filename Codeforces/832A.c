#include<stdio.h>
int main()
{
    long long a,b;
    scanf("%I64d %I64d",&a,&b);

   if((a/b)%2==0)
        printf("NO\n");
    else
        printf("YES\n");

    return 0;
}

