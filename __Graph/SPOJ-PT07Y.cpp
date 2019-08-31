#include<bits/stdc++.h>
#define MAX 100000
using namespace std;

int visitor[MAX],N,E;
vector<int> graph[MAX];
void BFS();
int main()
{
    scanf("%d %d",&N,&E);
    for(int i=1;i<=E;i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        graph[x].push_back(y);
    }

    BFS();
//    for(int i=1;i<=N;i++)
//        printf("%d ",visitor[i]);
//    printf("\n");

    int ddd=1;
    for(int i=1;i<=N;i++){
        if(visitor[i]>1 || visitor[i]==0)
            ddd=0;
    }
    if(ddd==0) printf("NO\n");
    else printf("YES\n");

    return 0;
}
void BFS()
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
            int w = graph[u][i];
            visitor[w]++;
            if(visitor[w]<=1)
                q.push(w);
        }
    }
}
