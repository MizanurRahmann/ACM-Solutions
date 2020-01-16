#include<bits/stdc++.h>
using namespace std;

int m,n,Count=0,visit[101][101];
char greed[101][101];
void DFS(int x,int y);

int main()
{
    while(1==1)
    {
    scanf("%d %d",&m,&n);
    if(m==0) break;
    for(int i=0;i<m;i++)
            scanf("%s",&greed[i]);

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(greed[i][j]=='@' && visit[i][j]==0){
                Count++;
                DFS(i,j);}
        }
    }
        printf("%d\n",Count);
        Count=0;
        memset(visit,0,sizeof(visit));
    }
    return 0;
}

void DFS(int x,int y)
{
    if(visit[x][y]==1) return;
    if(x<0 || y<0 || x>m-1 || y>n-1) return;
    if(greed[x][y]=='*') return;

    visit[x][y] = 1;

    DFS(x,y+1);
    DFS(x,y-1);
    DFS(x+1,y);
    DFS(x-1,y);
    DFS(x+1,y-1);
    DFS(x+1,y+1);
    DFS(x-1,y-1);
    DFS(x-1,y+1);
}
