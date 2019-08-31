#include<stdio.h>
int main()
{
    int array[3];
    int i,j,x;
    for(i=0;i<3;i++)
        scanf("%d",&array[i]);

    for(i=0;i<3;i++){
        x=array[i];
        j=i-1;
        while(j>=0&&array[j]>x){
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=x;
    }

    int ans;
    ans=(array[2]-array[1])+(array[1]-array[0]);
    printf("%d\n",ans);
}
