#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);

    int L = n*4+1;
    int M = 2*n+1, m=2*n+1;
    int pkH=0;
    int kiJ = 0, kiH = 0;
    int ghur = 1;

    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=L+1;j++)
        {
            if(j==L+1) printf("\n");
            else if(j!=M) printf(".");
            else{
            for(int k=1;k<=ghur;k++)
            {
                printf("%d ",pkH);
                if(k<ghur/2+1) pkH++;
                else pkH--;

            }}

        }
        if(M>1 && kiJ==0){M-=2;} else{M+=2; kiJ=1;}
        if(ghur<2*n+1 && kiH==0) ghur+=2; else{ghur-=2; kiH=1;}
        pkH = 0;
    }
    return 0;
}
