#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[m],arr2[m];
    for(int i=0;i<m;i++)
        scanf("%d %d",&arr[i],&arr2[i]);

    for(int i=0;i<m-1;i++)
    {
        for(int j=0;j<m-i-1;j++)
        {
            if(arr2[j]<arr2[j+1])
            {
                int t1,t2;
                t1=arr[j];
                t2=arr2[j];
                arr[j]=arr[j+1];
                arr2[j]=arr2[j+1];
                arr[j+1]=t1;
                arr2[j+1]=t2;
            }
        }
    }

    long long Count=0;

    for(int i=0;i<m;i++)
    {
        if(n==0) break;
        else if(arr[i]<=n){Count+= arr[i]*arr2[i]; n-=arr[i];}
        else {Count+= n*arr2[i]; n=0;}
    }
    printf("%I64d\n",Count);

    return 0;

}
