#include<bits/stdc++.h>
using namespace std;

#define ll                     long long
#define in(n)                  scanf("%lld",&n)
#define inn(a,b)               scanf("%lld %lld",&a,&b)
#define loop(a,b)	           for(int i=a; i<b; i++)
#define pb(a)                  push_back(a)
#define sorta(a,n)             sort(a,a+n)
#define sortv(a)               sort(a.begin(),a.end())
#define mpis(a,b)              make_pair(a,b)
#define mpii(a,b)              make_pair(a,b)

ll t,n,total,tt;
char str[11];
int main()
{
    in(t);
    for(int i=1;i<=t;i++)
    {
        total = 0;
        in(tt);
        printf("Case %d:\n",i);
        for(int j=1;j<=tt;j++)
        {
            scanf("%s",str);
            if(strcmp(str,"report")==0)
                printf("%lld\n",total);
            else
            {
                scanf("%d",&n);
                total+=n;
            }
        }
    }
    return 0;
}
