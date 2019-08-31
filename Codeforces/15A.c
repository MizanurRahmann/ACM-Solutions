#include<stdio.h>
#include<math.h>
int main()
{
    int n,t,j,count=0,i,p,q,r,s,temp_a,temp_b;
    double diff;
    scanf("%d %d",&n,&t);
    int a[n],b[n];

    for(i=0;i<n;i++)
        scanf("%d %d",&a[i],&b[i]);

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp_a=a[i];
                temp_b=b[i];
                a[i]=a[j];
                b[i]=b[j];
                a[j]=temp_a;
                b[j]=temp_b;
            }
        }}
    for(i=0;i<n-1;i++){
            diff=a[i+1]-a[i]-(b[i]/2.0)-(b[i+1]/2.0);
            if(diff>t)
                count+=2;
            else if(diff==t)
                count++;}
    printf("%d\n",count+2);

    return 0;
}
