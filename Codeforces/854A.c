#include<stdio.h>
int main()
{
    int n,i,j,k,x=0;
    scanf("%d",&n);

    for(i=n/2;i>=1;i--){
        for(j=n-1;j>i;j--){
                //printf("%d %d\n",i,j);
            if(i+j==n){
                for(k=2;k<=j;k++){
                        if(j%k==0){
                            if(i%k==0) break;
                            else {x=1; break;}
                        }
                    }
                if(x==1) break;
            }
            if(x==1) break;
        }
        if(x==1) break;
    }
    printf("%d %d\n",i,j);
    return 0;
}
