#include<bits/stdc++.h>
using namespace std;
vector<int> graph[100001];
int visitor[100001];

int VAM,LYK,N;
void BFS();
int main()
{
    int t;
    scanf("%d",&t);
    for(int g=1;g<=t;g++)
    {
        scanf("%d",&N);
        for(int i=1;i<=N;i++)
        {
            int x,y;
            scanf("%d %d",&x,&y);
            graph[x].push_back(y);
            graph[y].push_back(x);

        }
        VAM=0; LYK=0;
        BFS();
        printf("Case %d: %d\n",g,max(VAM,LYK));

        memset(visitor,0,sizeof(visitor));
        memset(graph,0,sizeof(graph));
    }
    return 0;
}

void BFS()
{
    for(int x=1;x<=20000;x++)
    {
        if(visitor[x]==0){
        queue<int> q;
        q.push(x);
        visitor[x] = 1;

        int vampire=0,lyken=0;
        while(!q.empty())
        {
            int u = q.front();
            q.pop();
            for(int i=0;i<graph[u].size();i++)
            {
                int v = graph[u][i];
                if(visitor[v]==0)
                {
                    if(visitor[u]==1){
                        visitor[v]=2; vampire++;}
                    else{
                        visitor[v]=1; lyken++;}
                    q.push(v);
                }
            }
        }
        if(vampire>0) lyken++;
        if(VAM>LYK){
            VAM += max(vampire,lyken);
            LYK += min(vampire,lyken);}
        else{
            LYK += max(vampire,lyken);
            VAM += min(vampire,lyken);}
    }}
}
