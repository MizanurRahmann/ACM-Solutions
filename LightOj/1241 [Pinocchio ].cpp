#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,Count,x,n;
    cin>>t;
    for(int a=1;a<=t;a++)
    {
        scanf("%d",&n);
        int arr[n];
        Count = 0;
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);

        for(int i=1;i<n;i++)
            if(arr[i]>arr[i-1])
                Count++;
        printf("Case %d: %d\n",a,Count);
    }

    return 0;
}
