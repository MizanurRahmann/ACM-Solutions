#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int arr1[m],arr2[m],input;
    for(int i=0;i<m;i++)
    {
        scanf("%d",&input);
        arr1[i] = input;
        arr2[i] = input;
    }

    int mini=INT_MAX,maxm=-1,CountS=0,CountL=0,iS,iL;

    while(n--)
    {
        for(int i=0;i<m;i++)
        {
            if(arr1[i]<mini){iS=i; mini=arr1[i];}
            if(arr2[i]>=maxm){iL=i; maxm=arr2[i];}
        }
        CountS+= arr1[iS];
        CountL+= arr2[iL];
        arr1[iS]--;
        arr2[iL]--;
        if(arr1[iS]==0) arr1[iS]=INT_MAX;
        mini = INT_MAX;
        maxm = -1;

    }

    printf("%d %d\n",CountL,CountS);



    return 0;
}
