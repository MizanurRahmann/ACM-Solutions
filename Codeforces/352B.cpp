#include<bits/stdc++.h>
using namespace std;

int dist[100005],index[100005],visit[100005],arr[100005];
int main()
{
    int n,p,Count=0;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);

        if(index[arr[i]]!=0)
            p=i-index[arr[i]];
        else
            p = 0;

        index[arr[i]]=i;

        if(p!=dist[arr[i]] && dist[arr[i]]!=0)
        {
            if(visit[arr[i]]!=0 && dist[arr[i]]!=-1)
                Count--;
            dist[arr[i]] = -1;
        }
        else
        {
            if(visit[arr[i]]==0){Count++; visit[arr[i]]=1;}
            dist[arr[i]] = p;
        }
        //printf("%d %d %d\n",Count,dist[arr[i]],index[arr[i]]);
    }



    printf("%d\n",Count);

    sort(arr,arr+(n+1));

    for(int i=1;i<=n;i++)
    {
        if(dist[arr[i]]!=-1 && visit[arr[i]]!=0)
        {
            printf("%d %d\n",arr[i],dist[arr[i]]);
            visit[arr[i]]=0;
        }
    }



    return 0;

}
