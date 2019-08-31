#include<bits/stdc++.h>
using namespace std;
int visitor[1005];
vector<int> graph[1005];
void BFS(int L,int inc);
int K,N,E;
int main()
{
    int T;
    scanf("%d",&T);
    for(int t=1;t<=T;t++)
    {
        scanf("%d %d %d",&K,&N,&E);
        int Location[K];

        for(int i=0;i<K;i++)
            scanf("%d",&Location[i]);

        for(int i=0;i<E;i++)
        {
            int x,y;
            scanf("%d %d",&x,&y);
            graph[x].push_back(y);
        }
        //BFS and find the ans
        int I=0;
        for(int i=0;i<K;i++)
            BFS(Location[i],++I);
        int count=0;
        for(int i=1;i<=N;i++)
            if(visitor[i]==I)
                count++;
        printf("Case %d: %d\n",t,count);

        memset(visitor,0,sizeof(visitor));
        memset(graph,0,sizeof(graph));
    }
    return 0;
}

void BFS(int L,int I)
{
    queue<int> q;
    q.push(L);
    visitor[L]++;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int i=0;i<graph[u].size();i++)
        {
            int v=graph[u][i];
            if(visitor[v]<I){
                visitor[v]++;
                q.push(v);}
        }
    }
}
