#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,cH=1,cL=1,diff;
    scanf("%I64d",&n);
    long long arr[n];

    for(long long i=0;i<n;i++)
        scanf("%I64d",&arr[i]);

    sort(arr,arr+n);
    diff = arr[n-1]-arr[0];

    if(diff!=0)
    {
        for(long long i=1;i<n;i++)
        if(arr[0]==arr[i])
            cL++;
    for(long long i=n-2;i>=0;i--)
        if(arr[n-1]==arr[i])
            cH++;
    printf("%I64d %I64d\n",diff,cH*cL);
    }
    else
    {
        long long ans = n*(n-1)/2;
        printf("%I64d %I64d\n",diff,ans);
    }

    return 0;
}


//    cin>>n;
//	for(int i=0;i<n;i++)
//	cin>>a[i];
//	sort(a,a+n);
//	k=count(a,a+n,a[0]);
//	l=count(a,a+n,a[n-1]);
//	if(a[0]==a[n-1])k=n*(n-1)/2;else
//	k=k*l;
//	cout<<a[n-1]-a[0]<<" "<<k;
