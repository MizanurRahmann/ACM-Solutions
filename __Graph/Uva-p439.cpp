#include <bits/stdc++.h>
using namespace std;

char start[3], finish[3];
int visit[10][10];
int cost[10][10];
int x[] = {1,-1,1,-1,2,2,-2,-2};
int y[] = {2,2,-2,-2,1,-1,1,-1};
void BFS(int a, int b);


int main()
{
    while(scanf("%s %s",start,finish) != EOF)
    {
        memset(visit, 0, sizeof(visit));
        memset(cost, 0, sizeof(cost));
        BFS(start[0]-'a'+1, start[1]-'0');
    }
    return 0;
}


void BFS(int a, int b)
{

    queue <pair<int,int> > q;
    q.push(make_pair(a,b));
    visit[a][b] = 1;

    while(!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();

        if(p.first==finish[0]-'a'+1 && p.second==finish[1]-'0')
        {
            printf("To get from %s to %s takes %d knight moves\n",start,finish,cost[finish[0]-'a'+1][finish[1]-'0']);
            return;
        }

        for(int i=0; i<8; i++)
        {
            int row = p.first+x[i];
            int col = p.second+y[i];
            if(row<=8 && row>=1 && col<=8 && col>=1 && visit[row][col]==0)
            {
                visit[row][col] = 1;
                cost[row][col] = cost[p.first][p.second] + 1;
                q.push(make_pair(row,col));
            }
        }
    }
}
