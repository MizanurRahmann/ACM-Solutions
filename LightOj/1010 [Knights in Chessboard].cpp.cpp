#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    for(int i=1;i<=T;i++){
        int m,n,ans,jhamelA;
        scanf("%d %d",&m,&n);

        if(m==1 || n==1) ans = m*n;
        else if(m==2 || n==2)
        {
            if(m==2) jhamelA = n;
            else jhamelA = m;

            if(jhamelA%2!=0)
                ans = (jhamelA/2+1)*2;
            else
                ans = (jhamelA/2+1)/2*4;

        }
        else if((m*n)%2 == 0) ans = (m*n)/2;
        else ans = (m*n)/2+1;


        printf("Case %d: %d\n",i,ans);
    }
    return 0;
}
