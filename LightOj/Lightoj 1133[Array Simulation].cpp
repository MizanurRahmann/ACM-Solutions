#include<bits/stdc++.h>
using namespace std;

int n,m,arr[105];
void sum(int x);
void multi(int x);
void divi(int x);
void Reverse();
void Swap(int x,int y);

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d %d",&n,&m);

        for(int j=0;j<n;j++)
            scanf("%d",&arr[j]);


        for(int j=0;j<m;j++)
        {
            char c;
            scanf("%c",&c);
            printf("char");

            if(c!='P' && c!='R'){
                int parameter;
                scanf("%d",&parameter);
                if(c=='S') sum(parameter);
                if(c=='M') multi(parameter);
                if(c=='D') divi(parameter);
            }
            else if(c =='P'){
                int para1,para2;
                scanf("%d %d",&para1,&para2);
                Swap(para1,para2);
            }
            else
                Reverse();

        }
        printf("Case %d:\n",i);
        for(int j=0;j<n;j++){
            if(j==n-1)
                printf("%d",arr[j]);
            else
                printf("%d ",arr[j]);
        }
        printf("\n");
    }
    return 0;
}

void sum(int x)
{
    for(int i=0;i<n;i++)
        arr[i]+=x;
}
void multi(int x)
{
    for(int i=0;i<n;i++)
        arr[i]*=x;
}
void divi(int x)
{
    for(int i=0;i<n;i++)
        arr[i]/=x;
}
void Reverse()
{
    int temp,mid;
    mid = n/2;
    for(int i=0;i<mid;i++){
        temp = arr[i] ;
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
}

void Swap(int x,int y)
{
    int temp;
    temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}
