#include<stdio.h>
int main()
{
   int m,n,i,j,x=0;
   scanf("%d %d",&m,&n);
   char a[m][n];

   for(i=0;i<m;i++)
        scanf("%s",&a[i]);

   for(i=0;i<m;i++){
    for(j=0;j<n-1;j++){
        if(a[i][j]!=a[i][j+1]){
            x=1;
            break;
        }
      }
        if(x==1)
            break;
   }

    for(i=0;i<m;i++){
        if(a[i][0]==a[i+1][0]){
            x=1;
            break;
        }
   }

   if(x==1)
    printf("NO\n");
   else
    printf("YES\n");

   return 0;
}
