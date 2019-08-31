#include<bits/stdc++.h>
using namespace std;

#define ll                     long long
#define in(n)                  scanf("%lld",&n)
#define inn(a,b)               scanf("%lld %lld",&a,&b)
#define loop(a,b)	           for(long long i=a; i<b; i++)
#define loop2(a,b)             for(long long j=a; j<b; j++)
#define pb(a)                  push_back(a)
#define sorta(a,n)             sort(a,a+n)
#define sortv(a)               sort(a.begin(),a.end())
#define clr(a)                 memset(a,0,sizeof a)

int n,sum;
int main()
{
    cin >> n;
    loop(0,n)
    {
        int a;
        cin >> a;
        sum+=a;
    }
    if(sum%n==0)
        cout << n;
    else
        cout << n-1;
    return 0;
}
