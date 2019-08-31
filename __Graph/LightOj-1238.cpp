#include<bits/stdc++.h>
using namespace std;

int t,m,n,visit[25][25],dist[25][25];
int xx[4] = {-1,1,0,0};
int yy[4] = {0,0,-1,1};
char str[25][25];

void BFS(int i, int j)
{
    for(int p=0; p<m; p++)
    {
        for(int q=0; q<n; q++)
        {
            visit[p][q] = 0;
            dist[p][q] = INT_MAX;
        }
    }

    visit[i][j] = 1;
    dist[i][j] = 0;

    queue< pair<int,int> > q;
    q.push(make_pair(i,j));

    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int k=0; k<4; k++)
        {
            i = x + xx[k];
            j = y + yy[k];
            if(i > -1 && i < m && j >-1 && j<n && str[i][j] !='#' && str[i][j]!= 'm' && visit[i][j] == 0)
            {
                dist[i][j] = min(dist[x][y]+1,dist[i][j]);
                visit[i][j] = 1;
                q.push(make_pair(i,j));
            }
        }
    }
}


int main()
{
    scanf("%d",&t);
    for(int tt=1; tt<=t; tt++)
    {
        scanf("%d %d",&m,&n);
        for(int i=0; i<m; i++)
            scanf("%s",&str[i]);
        int X,Y,ax,ay,bx,by,cx,cy,a,b,c;

        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(str[i][j] == 'h')
                {
                    X = i;
                    Y = j;
                }
                else if(str[i][j]=='a')
                {
                    ax=i;
                    ay=j;
                }
                else if(str[i][j]=='b')
                {
                    bx=i;
                    by=j;
                }
                else if(str[i][j]=='c')
                {
                    cx=i;
                    cy=j;
                }
            }
        }

        BFS(X,Y);
        a = dist[ax][ay];
        b = dist[bx][by];
        c = dist[cx][cy];

        printf("Case %d: %d\n",tt,max(c,max(a,b)));
    }
    return 0;
}
