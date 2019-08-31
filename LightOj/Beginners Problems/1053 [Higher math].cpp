#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a*a==b*b+c*c)
            printf("Case %d: yes\n",i);
        else if(b*b==a*a+c*c)
            printf("Case %d: yes\n",i);
        else if(c*c==a*a+b*b)
            printf("Case %d: yes\n",i);
        else
            printf("Case %d: no\n",i);
    }
    return 0;
}
