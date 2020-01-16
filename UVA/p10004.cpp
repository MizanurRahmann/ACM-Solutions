#include<bits/stdc++.h>
#define MAX 1000001
using namespace std;
vector<int> graph[MAX];
int visitor[MAX];
bool BFS();

int main()
{
        int N,E;
        while(scanf("%d",&N)!=0)
        {

        for(int i=1;i<=E;i++)
        {
            int p,q;
            scanf("%d %d",&p,&q);
            graph[p].push_back(q);
            graph[q].push_back(p);
        }
        if(BFS()==true)
            printf("BICOLORABLE.\n");
        else
            printf("NOT BICOLORABLE.\n");

    return 0;
}

bool BFS()
{
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
            if(visitor[u]==visitor[v]) return false;
        }
    }
    return true;
}

