#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    int possibleSolution[6];
    possibleSolution[0] = (a+b)*c;
    possibleSolution[1] = a*(b+c);
    possibleSolution[2] = a*b*c;
    possibleSolution[3] = a+b*c;
    possibleSolution[4] = a*b+c;
    possibleSolution[5] = a+b+c;

    int i,j,x,poz,n=6;
    for(i=0;i<n;i++){
        x = possibleSolution[i];
        poz = i;
        for(j=i+1;j<n;j++){
            if(possibleSolution[j]>x){
                x = possibleSolution[j];
                poz = j;
            }
        }
            possibleSolution[poz] = possibleSolution[i];
            possibleSolution[i] = x;
    }
    printf("%d ",possibleSolution[0]);
    return 0;
}
