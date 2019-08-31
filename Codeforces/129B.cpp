//From sabbirs solution

#include<bits/stdc++.h>
using namespace std;

int a1[105];
int a2[105];
bool visited[105];
vector<int>v[105];
int main()
{
    bool flag;
    int n,m,x,y,cnt=0,k=0;
    scanf("%d%d",&n,&m);
    for(int i=1; i<=m; i++)
    {
        scanf("%d%d",&x,&y);
        a1[x]++,a1[y]++,a2[x]++,a2[y]++;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    while(1)
    {
        flag=0;
        for(int i=1; i<=n; i++)
        {
            if(a1[i]==1)
            {
                visited[i]=true;
                flag=1;
                a2[i]=0;
                int l=v[i].size();
                for(int j=0; j<l; j++)
                {
                    if(!visited[v[i][j]])
                    a2[v[i][j]]--;
                }
            }
        }
        if(!flag)
        {
            printf("%d\n",cnt);
            return 0;
        }
        cnt++;
        for(int i=1;i<=n;i++)
            a1[i]=a2[i];
    }
    return 0;
}
