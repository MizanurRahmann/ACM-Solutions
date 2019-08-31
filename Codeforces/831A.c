#include<stdio.h>
int main()
{
    int n,x=1,y=1,z=1,i,j,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++){
            if(i+1==n)
            break;
        if(a[i]==a[i+1]){
            y=2;
            break;}
        if(a[i]>a[i+1]){
            z=3;
            j=i;
            break;}
    }

    if(y==2){
    for(j=i+1;j<n;j++){
            if(j+1==n)
            break;
            if(a[j]<a[j+1]){
                y=0;
                break;}
        if(a[j]>a[j+1]){
                z=3;
                break;}
    }}

    if(z==3){
    for(k=j+1;k<n;k++){
            if(k+1==n)
                break;
        if(a[k]<a[k+1]){
                z=0;
                break;}
        if(a[k]==a[k+1]){
            z=0;
            break;}
    }}
    //printf("%d %d %d\n",x,y,z);

    if(x>0&&y>0&&z>0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
