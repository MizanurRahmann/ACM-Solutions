#include<stdio.h>
int main()
{
    int n,d,count=0,i,p,COUNT;
    scanf("%d %d",&n,&d);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=1;i<n;i++){
            p=a[i-1]-a[i];
            if(p==0){
                count+=1; a[i]=a[i]+d;}

        if(p>0){
                if(p%d==0){
            count+=p/d; COUNT=p/d;}
            else {count+=(p/d)+1; COUNT=(p/d)+1;}
        a[i]=a[i]+d*COUNT; if(a[i]==a[i-1]){ a[i]+=d; count+=1;}}
    }
    printf("%d\n",count);
}
