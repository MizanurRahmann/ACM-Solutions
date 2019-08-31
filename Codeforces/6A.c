#include<stdio.h>
int main()
{
    int a[4],i,j,k,p,c=0;
    for(i=0;i<4;i++)
        scanf("%d",&a[i]);

        /*cheaking it is triangle or not*/

        p=a[3]-a[2];
        if(a[2]-a[1]==p&&a[1]-a[0]==p)
            c=1;
        else{
            for(i=0;i<3;i++){
        for(j=i+1;j<4;j++){
            for(k=0;k<4;k++){
                if(k!=i&&k!=j){
                        if(a[i]+a[j]>a[k]){
                            if(a[j]+a[k]>a[i]){
                                    if(a[i]+a[k]>a[j]){
                                            c=1;
                                            break;}}}}}
                if(c>0) break;
            }if(c>0) break;
        }
    }

    /*cheaking it is segment or not*/

    if(c==0){
            for(i=0;i<3;i++){
        for(j=i+1;j<4;j++){
            for(k=0;k<4;k++){
                if(k!=i&&k!=j){
                    if(a[i]+a[j]==a[k]){
                                    c=2;
                                    break;}}}
                if(c>0) break;
            } if(c>0) break;
        }
    }
    if(c==1)
        printf("TRIANGLE\n");
    else if(c==2)
        printf("SEGMENT\n");
    else
        printf("IMPOSSIBLE\n");

    return 0;
}

