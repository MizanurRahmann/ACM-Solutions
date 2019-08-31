#include<bits/stdc++.h>
using namespace std;

long long t,N,R,u,v,MAX;
long long visit[110],t1[110],t2[110];
vector<long long> tree[110];
void bfs(long long node, long long time[]);

int main()
{
    scanf("%lld",&t);
    for(long long x=1; x<=t; x++)
    {
        scanf("%lld %lld",&N,&R);
        for(long long i=0; i<R; i++)
        {
            long long a,b;
            scanf("%lld %lld",&a,&b);
            tree[a].push_back(b);
            tree[b].push_back(a);
        }
        scanf("%lld %lld",&u,&v);

        bfs(u,t1);
        memset(visit,0,sizeof(visit));
        bfs(v,t2);
        memset(visit,0,sizeof(visit));

        for(long long j=0; j<N; j++)
            MAX = max(MAX,t1[j]+t2[j]);
        printf("Case %lld: %lld\n",x,MAX);

        memset(t1,0,sizeof(t1));
        memset(t2,0,sizeof(t2));
        MAX = 0;
        for(long long j=0; j<N; j++)
            tree[j].clear();
    }
    return 0;
}

void bfs(long long node, long long time[])
{
    queue<long long> q;
    q.push(node);
    visit[node] = 1;

    while(!q.empty())
    {
        long long m = q.front();
        q.pop();
        for(long long i=0; i<tree[m].size(); i++)
        {
            long long w = tree[m][i];
            if(visit[w]==0)
            {
                visit[w] = 1;
                time[w] = time[m]+1;
                q.push(w);
            }
        }
    }
}
