#include<stdio.h>
int main()
{
    int Acoin;
    scanf("%d",&Acoin);
    //here i take the value of coin, and calculate the total amount of money
    int Vcoin[Acoin],i,TotalMoney=0;
    for(i=0;i<Acoin;i++){
        scanf("%d",&Vcoin[i]);
        TotalMoney+=Vcoin[i];
    }
    //sorting (using Insertion sort)
    int j,x;
    for(i=0;i<Acoin;i++){
        x=Vcoin[i];
        j=i-1;
        while(j>=0&&Vcoin[j]<x){
            Vcoin[j+1]=Vcoin[j];
            j--;
        }
        Vcoin[j+1]=x;
    }
    int sum=0,coin_number=0;
    for(i=0;i<Acoin;i++){
        sum+=Vcoin[i];
        coin_number++;
        if(sum>TotalMoney/2)
            break;
    }
    printf("%d\n\n",coin_number);

    return 0;
}
