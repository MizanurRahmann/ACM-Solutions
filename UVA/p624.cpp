///Shauar problem >_<
#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int dpList[21][100001];
int main()
{
    int N,n,ANS;
    while(scanf("%d%d",&N,&n)!=EOF){
    int cd[n];
    for(int i=0;i<n;i++)
        cin>>cd[i];

    if(n<=0 || N<=0)
        ANS = 0;

    else{
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<N+1;j++){
            if(j<cd[i]){
                if(i!=0)
                dpList[i][j]=dpList[i-1][j];
                else
                dpList[i][j] = 0;
            }
            else{
                if(i!=0){
                dpList[i][j] = max(cd[i]+dpList[i-1][j-cd[i]],dpList[i-1][j]);
                }
                else
                dpList[i][j] = cd[i];
            }
        }
    }
    ANS = dpList[n-1][N];

    int x=n-1,y=N,sum=0;
    while(x>=0){
        if(x!=0){
            if(dpList[x][y]!=dpList[x-1][y]){
            cout<<cd[x]<<" ";
            y=y-cd[x];
            sum+=cd[x];
            x--;
            }
        else
            x--;
        }
        else{
            if(sum+cd[x]==ANS)
            cout<<cd[x]<<" ";
           x--;}
        }
     cout<<"sum:"<<ANS<<endl;
    }}

    return 0;
}
