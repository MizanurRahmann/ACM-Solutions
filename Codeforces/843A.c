#include<stdio.h>
#include<string.h>
int main()
{
    int n,k,i,j,count;
    scanf("%d %d",&n,&k);
    char baloon[n];
    scanf("%s",baloon);

    for(i=0;i<strlen(baloon);i++){
            count=0;
        for(j=0;j<strlen(baloon);j++){
            if(baloon[i]==baloon[j])
                count++;
            if(count>k)
                break;
        }
        if(count>k)
            break;
    }

    if(count>k)
        printf("NO\n");
    else
        printf("YES\n");
    return 0;
}
