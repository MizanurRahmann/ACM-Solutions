#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p;
    scanf("%d%d",&n,&p);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int Count=0,dis,L;
    if(arr[p-1]==1)
        Count++;
    L = max(n-p,p);
   // printf("n: %d\n",Count);

    for(int i=1;i<=L;i++)
    {
        if(p-i>=1 && p+i<=n)
            dis=2;
        else
            dis=1;

        if(dis==2 && arr[p-1-i]==1 && arr[p-1+i]==1)
            Count+=2;
        else
        {
            if(p-i<1 && arr[p-1+i]==1)
                Count++;
            else if(p+i>n && arr[p-1-i]==1)
                Count++;
        }
        //printf("dis: %d %d\n",dis,Count);
    }
    printf("%d\n",Count);
}
