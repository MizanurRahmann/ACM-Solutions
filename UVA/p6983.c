#include<stdio.h>
int main()
{
    int testcase,number;
    int i,j,x=1;
    scanf("%d",&testcase);
    for(i=0;i<testcase;i++){
        scanf("%d",&number);

        int size[number],k,y;
        for(j=0;j<number;j++)
                scanf("%d",&size[j]);

        //Sort the input using insertion sort.

            for(j=0;j<number;j++){
                y=size[j];
                k=j-1;
                while(k>=0&&size[k]>y){
                    size[k+1]=size[k];
                    k--;
                }
                size[k+1]=y;
            }

        //Condition checking and print

    for(j=0;j<number;j++){
        if(size[j]==size[j-1]){x=0; break;}}
    if(x==0){
        printf("NO\n");
        x=1;}
    else
        printf("YES\n");
    }

    return 0;
}
