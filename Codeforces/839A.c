#include<stdio.h>
int main()
{
    int n,candy,a,i,day=0,g=0;
    scanf("%d %d",&n,&candy);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        a=a+g;

        if(a>=8){
            if(candy>=8){
                candy-=8;
                g=a-8;
                day+=1;
            }
            else{
                candy=0;
                day+=1;
                break;}

                if(candy==0)
                    break;
                }
            if(a<8){
                if(candy>a){
                    candy-=a;
                    g=0;
                    day+=1;
                }
                else{
                    candy=0;
                    day+=1;
                    break;}
                    if(candy==0)
                        break;
            }
    }
    if(candy==0)
        printf("%d\n",day);
    if(candy>0)
        printf("-1\n");

    return 0;
}
