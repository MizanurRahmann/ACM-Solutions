#include<bits/stdc++.h>
using namespace std;
vector<int> graph[10005];
int visitor[100005],dist[100005];
int N,a,b;
void BFS(int u);

int main()
{
    scanf("%d",&N);
    for(int i=0;i<N-1;i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    BFS(1);
    memset(visitor,0,sizeof(visitor));
    memset(dist,0,sizeof(dist));
    BFS(a);
    printf("%d\n",b);

    return 0;
}

void BFS(int s)
{
    queue<int> q;
    q.push(s);
    visitor[s]=1;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int i=0;i<graph[u].size();i++)
        {
            int v = graph[u][i];
            if(visitor[v]==0)
            {
                dist[v] = dist[u]+1;
                visitor[v] = 1;
                q.push(v);
            }
        }
    }
    b = 0;
    for(int i=1;i<=N;i++){
        b = max(b,dist[i]);
        if(b==dist[i]) a = i;
    }
}
