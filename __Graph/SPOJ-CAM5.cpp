#include<bits/stdc++.h>
using namespace std;
vector<int> graph[100005];
int visitor[100005],N,E,ans;
void BFS();
int main()
{
    int t;
    scanf("%d",&t);
    for(int g=1;g<=t;g++)
    {
        scanf("%d %d",&N,&E);
        for(int i=0;i<E;i++)
        {
            int x,y;
            scanf("%d %d",&x,&y);
            graph[x].push_back(y);
            graph[y].push_back(x);
        }
        ans = 0;
        if(E==0)
            ans = N;
        else
            BFS();
        printf("%d\n",ans);

        memset(graph,0,sizeof(graph));
        memset(visitor,0,sizeof(visitor));
    }
    return 0;
}

void BFS()
{
    int k=0;
    queue<int> q;
    q.push(0);
    visitor[0] = 1;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int i=0;i<graph[u].size();i++)
        {
            int v = graph[u][i];
            if(visitor[v]==0)
            {
                visitor[v]=1;
                q.push(v);
            }
        }
        if(q.empty())
        {
            ans++;
            for(int i=k;i<N;i++){
                if(visitor[i]==0){
                    q.push(i); k=i; visitor[i]=1; break;}}
        }
    }
}
