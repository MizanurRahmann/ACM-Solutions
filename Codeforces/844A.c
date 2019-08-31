#include<stdio.h>
#include<string.h>
int main()
{
    char string[1001],temp;
    int L,i,j,diff=0,same;
    scanf("%s %d",string,&L);

    for(i=0;i<strlen(string);i++){
        for(j=i+1;j<strlen(string);j++){
            if(string[i]<string[j]){
                temp=string[i];
                string[i]=string[j];
                string[j]=temp;
                }}}

    if(strlen(string)<L)
        printf("impossible\n");
    else{
        for(i=0;i<strlen(string);i++){
            if(string[i]!=string[i+1])
                diff++;
        }
    same=strlen(string)-diff;
    if(L<=diff)
        printf("0\n");
    else
        printf("%d\n",L-diff);
    }

    //printf("diff= %d  same= %d  L= %d\n",diff,same,L);

    return 0;
}
