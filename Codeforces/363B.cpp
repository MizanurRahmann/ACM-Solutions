#include<bits/stdc++.h>
using namespace std;

int arr[1000001];
int main()
{
    int p,k,j=0,MINI=INT_MAX,sum=0,index=0;
    scanf("%d %d",&p,&k);
    for(int i=0;i<p;i++)
        scanf("%d",&arr[i]);

    for(int i=0;i<k;i++)
        sum+=arr[i];

    if(sum<MINI)
    {
            index = j;
            MINI = sum;
    }

    for(int i=k;i<p;i++)
    {
        sum-= arr[j];
        sum+=arr[i];
        j++;
        if(sum<MINI)
        {
            index = j;
            MINI = sum;
        }
    }
    printf("%d\n",index+1);


}
