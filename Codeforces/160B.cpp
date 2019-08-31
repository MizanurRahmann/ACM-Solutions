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
#define clr(a)                  memset(a,0,sizeof a)

ll n,Fsum,Lsum;
int main()
{
    cin >> n;
    char str[2*n+1];
    cin >> str;

    loop(0,n)
        Fsum += str[i]-'0';
    loop(n,2*n)
        Lsum += str[i]-'0';

    if(abs(Lsum-Fsum)<=1)
        cout << "NO\n";
    else
        cout << "YES\n";
    return 0;
}
