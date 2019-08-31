#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long long a,b,count=0;
    scanf("%I64d %I64d",&a,&b);
    for(int i=2;i<=a;i++){
        if(b%i==0){
            if(a*i>=b)
                count++;
            }
    }
    if(a<b)
        printf("%I64d\n",count);
    else
        printf("%I64d\n",count+1);
    return 0;
}
