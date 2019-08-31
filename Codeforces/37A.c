#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int array[N];
    int i,j,x;
    for(i=0;i<N;i++)
        scanf("%d",&array[i]);
    //sorting(using insertion sort)
    for(i=0;i<N;i++){
        x=array[i];
        j=i-1;
        while(j>=0&&array[j]<x){
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=x;
    }
    //condition checking
    int count1=1,count2=1,c=1;
    for(i=0;i<N-1;i++){
        if(array[i]!=array[i+1])
            count2++;
        for(j=i+1;j<N;j++){
            if(array[i]==array[j])
            count1++;
            else
                break;
            }
        if(c<count1)
            c=count1;
        count1=1;
    }
    printf("%d %d\n",c,count2);
    return 0;
}
