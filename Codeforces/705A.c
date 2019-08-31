#include<stdio.h>
int main()
{
    int i=1,n;
    scanf("%d",&n);
    if(n<=100){
    while(i<=n){
            if(i%2!=0){
            printf("I hate ");
              i++;
        if(i<=n)
            printf("that ");
            i--;}
        if(i%2==0){
            printf("I love ");
        i++;
        if(i<=n)
            printf("that ");
           i--; }
            i++;
        }

            printf("it \n");
            }
return 0;
}

