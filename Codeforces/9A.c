#include<stdio.h>
int main()
{
    int a,b,A,B=6;
    scanf("%d %d",&a,&b);

    if(a==b){
                A=6-b+1;}

    else if(a>b) A=6-a+1;
    else if(a<b) A=6-b+1;


            if(A%2==0){
            if(A!=B)
                printf("%d/%d\n",A/2,B/2);
            else
                printf("1/1\n");}
    else{
        if(B%A==0)
            printf("1/%d\n",B/A);
        else
            printf("%d/%d",A,B);
    }

    return 0;
}

