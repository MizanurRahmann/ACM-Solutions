#include<stdio.h>
int main()
{
    char a[3][3];
    int i,j,x=2,y=2,id;
    for(i=0;i<3;i++)
        scanf("%s",a[i]);

    i=0; j=0; x=2; y=2; id=1;

    while(i<3){
            y=2; j=0;
        while(j<3){
            if(a[i][j]==a[x][y])
                id=1;
            else{
                    id=0;
            break;}
            j+=1;
            y-=1;
        }
        if(id==0)
            break;
        else{ i+=1;
        x-=1;}
    }

    if(id==1)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
