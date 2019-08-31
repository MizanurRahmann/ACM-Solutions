#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,MAX=0,Count,mCount;
    cin >> n;
    int arr[n+2];
    for(int i=0; i<n; i++)
        cin >> arr[i];

    for(int i=0;i<n;i++)
    {
        Count = 0;
        mCount = 0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]-arr[j]==-1)
                mCount++;
            if(arr[i]-arr[j]<=1 && arr[i]-arr[j]>=0)
                Count++;
        }
        Count = max(mCount,Count);
        MAX = max(MAX,Count);
    }

    cout << MAX << endl;
    return 0;
}
