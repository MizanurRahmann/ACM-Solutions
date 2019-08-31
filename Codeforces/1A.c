#include<stdio.h>
int main()
{
    long n,m,a;
    long long count1,count2,count;
    scanf("%ld %ld %ld",&n,&m,&a);

    count1=n/a;
    if(a*count1<n)
        count1+=1;
    count2=(m-a)/a;
    if(a*count2<m-a)
        count2+=1;
        count=count1+(count1*count2);

    printf("%I64d\n",count);

    return 0;
}
