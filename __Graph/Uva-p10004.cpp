#include<bits/stdc++.h>
using namespace std;
vector<int> graph[205];
int visitor[205],N,E;
bool BFS();
int main()
{
    while(1)
    {
        scanf("%d",&N);
        if(N==0) break;
        scanf("%d",&E);

        for(int i=1;i<=E;i++)
        {
            int x,y;
            scanf("%d %d",&x,&y);
            graph[x].push_back(y);
            graph[y].push_back(x);
        }

        if(BFS()==true)
            printf("BICOLORABLE.\n");
        else
            printf("NOT BICOLORABLE.\n");

        memset(visitor,0,sizeof(visitor));
        memset(graph,0,sizeof(graph));
    }
    return 0;
}


bool BFS()
{
    queue<int> q;
    q.push(0);
    visitor[0]=1;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int i=0;i<graph[u].size();i++)
        {
            int v = graph[u][i];
            if(visitor[v]==0)
            {
                if(visitor[u]==1)
                    visitor[v]=2;
                else
                    visitor[v]=1;
                q.push(v);
            }
            else if(visitor[u]==visitor[v])
                return false;
        }
    }
    return true;
}
