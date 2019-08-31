#include<bits/stdc++.h>
using namespace std;
bool BFS(vector<int> graph[]);
int visitor[2005],N,E;
int main()
{
    int t;
    scanf("%d",&t);
    for(int x=1;x<=t;x++)
    {
        scanf("%d %d",&N,&E);
        vector<int> graph[N+1];
        memset(visitor,0,sizeof(visitor));


        for(int i=1;i<=E;i++)
        {
            int p,q;
            scanf("%d %d",&p,&q);
            graph[p].push_back(q);
            graph[q].push_back(p);
        }


        printf("Scenario #%d:\n",x);
        if(BFS(graph)==true)
            printf("No suspicious bugs found!\n");
        else
            printf("Suspicious bugs found!\n");

    }
    return 0;
}

bool BFS(vector<int> graph[])
{
    int k=1;
    queue<int> q;
    q.push(1);
    visitor[1]=1;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int i=0;i<graph[u].size();i++)
        {
            int v = graph[u][i];
            if(visitor[v]==0)
            {
                if(visitor[u]==1) visitor[v] = 2;
                else visitor[v] = 1;
                q.push(v);
            }
            else if(visitor[u]==visitor[v])
                return false;
        }
        if(q.empty())
        {
            for(int i=k;i<=N;i++){
                if(visitor[i]==0){
                    q.push(i); k=i+1; visitor[i]=1; break;}}
        }
    }
    return true;
}
