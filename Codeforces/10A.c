#include<stdio.h>
int main()
{
    int n,p1,p2,p3,t1,t2,i,a,b,x,consume=0;
    scanf("%d %d %d %d %d %d",&n,&p1,&p2,&p3,&t1,&t2);

    for(i=1;i<=n;i++){
        scanf("%d %d",&a,&b);
        if(i>1){
        if(a-x>=t1){
                consume+=t1*p1;
            if(a-x-t1>=t2)
            consume+=(t2*p2)+(a-x-t1-t2)*p3;
        else
            consume+=(a-x-t1)*p2;
        }
        else
            consume+=(a-x)*p1;}
        consume+=(b-a)*p1;
        x=b;
    }

    printf("%d\n",consume);

    return 0;
}
