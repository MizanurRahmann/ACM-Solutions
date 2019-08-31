#include<bits/stdc++.h>
using namespace std;

int main()
{
    int v1,v2,v3,vm;
    scanf("%d %d %d %d",&v1,&v2,&v3,&vm);

    if(vm<=v3)
        printf("%d\n%d\n%d\n",v1,v2,v3);
    else
        printf("-1");

    return 0;
}
