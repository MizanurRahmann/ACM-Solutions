#include<stdio.h>
int main()
{
    int n,i,j,sum=0,x,p=0,y;
    scanf("%d",&n);
    x=n;

    for(i=2;i<n;i++){
            j=1;
        while(n>0){
            if(n>=j&&n<j*i){
                sum+=1;
                n-=j;
                j=1;
            }
            else
                j*=i;
        }
        printf("%d\n",sum);
        n=x;
    }
    //printf("%d/%d\n",sum,n-2);

    if(sum%(n-2)==0&&n-2!=1)
    printf("%d/1\n",sum/n-2);
    else{
        y=n-2;
        for(i=2;i<100;i++){
            if(sum%i==0&&y%i==0){
                while(sum%i==0&&y%i==0){
                    sum=sum/i;
                    y=y/i;
                    i=2;
                }
            }
        }
        printf("%d/%d\n",sum,y);
    }

    return 0;
}
