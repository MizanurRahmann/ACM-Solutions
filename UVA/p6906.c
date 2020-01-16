#include<stdio.h>
int main()
{
    int testcase,N,K,i;
    scanf("%d",&testcase);

    for(i=1;i<=testcase;i++){
        scanf("%d %d",&N,&K);
        int SetMember[N],j,k,temp,count=0;
        for(j=0;j<N;j++)
            scanf("%d",&SetMember[j]);

        //Sort using Bubble Sort
        for(j=0;j<N;j++){
            for(k=j;k<N;k++){
                if(SetMember[j]>SetMember[k]){
                    temp=SetMember[j];
                    SetMember[j]=SetMember[k];
                    SetMember[k]=temp;}
            }
        }
        //Condition
        for(j=0;j<N;j++){
            if(SetMember[j+1]-SetMember[j]>K)
                count++;
        }
        printf("Case #%d: %d\n",i,count);

    }
}
