#include<stdio.h>
#include<math.h>
int main()
{
    int n1,n2,y1,y2,i,step=0;
    char c1,c2,x1,x2;
    scanf("%c",&c1);
    scanf("%d %c",&n1,&c2);
    scanf("%d",&n2);

    x1=c1;
    x2=c2;
    y1=n1;
    y2=n2;

/*find number of steps*/
 while(1==1){
         if(x1==x2&&y1==y2)
            break;
        if(x1!=x2){
            if(x1<x2)
                x1+=1;
                else
                x1-=1;
        }

        if(y1!=y2){
            if(y1<y2)
                    y1+=1;
            else
                y1-=1;
                }
        step+=1;
    }
    printf("%d\n",step);

/*Now Find Steps*/

    for(i=1;i<=step;i++){
        if(c1<c2){
            if(c1+i<=c2)
                printf("R");}
        else{
            if(c1-i>=c2)
                printf("L");}
        if(n1<n2){
            if(n1+i<=n2)
                printf("U");}
        else{
            if(n1-i>=n2)
                printf("D");}
            printf("\n");
        }
return 0;
}
