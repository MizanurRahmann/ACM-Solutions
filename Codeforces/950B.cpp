#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j=-1,Count=0,temp1=0,temp2=0;
    cin>>n>>m;
    int arr1[n],arr2[m];

    for(int i=0;i<n;i++)
        cin>>arr1[i];
    for(int i=0;i<m;i++)
        cin>>arr2[i];

    for(i=0;i<n;i++)
    {
        temp1 += arr1[i];
        if(temp1>temp2)
        {
            for(j=j+1;j<m;j++)
            {
                temp2+=arr2[j];
                if(temp2>=temp1) break;
            }
        }
        if(temp1==temp2)
        {
            temp1=0;
            temp2=0;
            Count++;
        }
    }
    cout<<Count<<endl;
    return 0;
}
