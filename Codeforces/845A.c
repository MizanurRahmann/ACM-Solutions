#include<stdio.h>
int main()
{
    int n,i,j,temp;
    scanf("%d",&n);
    int a[2*n];
    for(i=0;i<2*n;i++)
        scanf("%d",&a[i]);
    //Sorting
    for(i=0;i<2*n;i++){
        for(j=i+1;j<2*n;j++){
            if(a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    if(a[n]==a[n-1])
        printf("NO\n");
    else
        printf("YES\n");

    return 0;
}
