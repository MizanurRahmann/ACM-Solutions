#include<bits/stdc++.h>
using namespace std;


int main()
{
    int caseNumber = 0;
    while(1)
    {
        map<int, int> connection;
        vector<int> graph[10000];
        int visit[100];
        int n,id=1,l,r;

        scanf("%d",&n);
        if(n==0) break;

        //TAKING INPUT AND CONVERT THEM BY MAP THEN STORE IN VECTOR
        for(int i=0; i<n; i++)
        {
            scanf("%d %d",&l,&r);
            if(connection[l]==0)
            {
                connection[l] = id;
                id++;
            }
            if(connection[r]==0)
            {
                connection[r] = id;
                id++;
            }
            graph[connection[l]].push_back(connection[r]);
            graph[connection[r]].push_back(connection[l]);
        }

        while(1)
        {
            int start,frequency;
            scanf("%d %d",&start, &frequency);
            if(start==0 && frequency==0) break;

            //CLEAR VISIT ARRAY FOR NEW QUERY
            memset(visit, 0, sizeof(visit));

            //APPLY BFS TECNIQUES
            queue<int> q;
            int nodenumber=0, leavenumber=1, included=1, level=0;

            q.push(connection[start]);
            visit[connection[start]] = 1;

            while(!q.empty())
            {
                int u = q.front();
                q.pop();
                leavenumber--;
                if(level>=frequency) break;

                for(int i=0; i<graph[u].size(); i++)
                {
                    int v = graph[u][i];
                    if(visit[v] != 1)
                    {
                        q.push(v);
                        visit[v] = 1;
                        included++;
                        nodenumber++;
                    }
                }
                if(leavenumber == 0)
                {
                    leavenumber = nodenumber;
                    level++;
                    nodenumber = 0;
                }
            }
           printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",caseNumber+1, connection.size()-included, start, frequency);
           caseNumber++;
        }
    }
    return 0;
}

