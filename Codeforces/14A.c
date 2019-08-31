#include<stdio.h>
int main()
{
    int i,j,m,n,p=-1,q=-1,r=-1,s=-1,x,y=0;
    scanf("%d %d",&m,&n);
    char a[m+1][n+1];
    for(i=0;i<m;i++)
        scanf("%s",&a[i]);

        x=n;

    for(i=0;i<m;i++){
        for(j=0;j<x;j++){
            if(p>=0){
                if(a[i][j]=='*'){
                    q=j;
                    x=j;
                }
            }
            if(p<0){
                if(a[i][j]=='*'){
                p=i;
                q=j;
                x=j;
                }
            }
        }
    }

    for(i=m-1;i>=0;i--){
        for(j=n-1;j>=y;j--){
            if(r>=0){
                if(a[i][j]=='*'){
                    s=j;
                    y=j;
                }
            }
            if(r<0){
                if(a[i][j]=='*'){
                r=i;
                s=j;
                y=j;
                }
            }
        }
    }
    //printf("%d %d %d %d\n",p,q,r,s);
    if(p>=0&&q>=0&&r>=0&&s>=0){
            for(i=p;i<=r;i++){
        for(j=q;j<=s;j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
        }
    }

    return 0;
}
