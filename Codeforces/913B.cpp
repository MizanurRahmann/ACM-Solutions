#include<bits/stdc++.h>
using namespace std;

 vector <int> A[100000];
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=2;i<=n;i++){

        int p;
        scanf("%d",&p);
        A[p].push_back(i);
    }
    int Count=0,x=1;
    bool dhukse = false;

    for(int i=1;i<=n;i++){
            for(int j=0;j<A[i].size();j++)
            {
                dhukse = true;
                if(A[A[i][j]].size()==0)
                    Count++;
            }
            if(Count<3 && dhukse == true)
            {
                x = 0;
                break;
            }
            Count = 0;
            dhukse = false;
    }

    if(x==1)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
