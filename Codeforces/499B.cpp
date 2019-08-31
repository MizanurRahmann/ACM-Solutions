#include<bits/stdc++.h>
using namespace std;

#define ll                     long long
#define in(n)                  scanf("%lld",&n)
#define loop(a,b)              for(int i=a; i<b; i++)
#define pb(a)                  push_back(a)
#define sorta(a,n)             sort(a,a+n)
#define sortv(a)               sort(a.begin(),a.end())
#define mpis(a,b)              make_pair(a,b)
#define mpii(a,b)              make_pair(a,b)

int main()
{
    ll n,m;
    cin>>n>>m;

    map<string,string> mp1;
    string s1,s2;
    loop(0,m)
    {
        cin>>s1>>s2;
        mp1[s1] = s2;
    }
    loop(0,n)
    {
         cin>>s1;
         map<string,string>::iterator it;
         it = mp1.find(s1);
        if(it->first.size() <= it->second.size())
            cout<<it->first;
        else
            cout<<it->second;
        if(i!=n-1)
            cout<<" ";
    }
    cout<<endl;

    return 0;
}
