#include<bits/stdc++.h>
using namespace std;
int m,n,visit[21][21],COUNT;
char greed[21][21];
void DFS(int x,int y);

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d %d",&m,&n);
        for(int j=0;j<n;j++)
            scanf("%s",&greed[j]);

        int currentX,currentY;
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++)
            if(greed[j][k]=='@'){currentX=j,currentY=k; break;}
        }
        COUNT = 0;
        DFS(currentX,currentY);
        printf("Case %d: %d\n",i,COUNT);

        memset(greed,0,sizeof(greed));
        memset(visit,0,sizeof(visit));
    }
    return 0;
}

void DFS(int x,int y)
{
    if(visit[x][y]==1) return;
    if(x<0 || y<0 || x>n-1 || y>m-1) return;
    if(greed[x][y]=='#') return;

    visit[x][y] = 1;
    COUNT++;

    DFS(x+1,y);
    DFS(x-1,y);
    DFS(x,y+1);
    DFS(x,y-1);
}
