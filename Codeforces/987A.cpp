#include<bits/stdc++.h>
using namespace std;

#define ll      long long
#define sci(a)  scanf("%d",&a)
#define scl(a)  scanf("%lld",&a)
#define scd(a)  scanf("%lf",&a)
#define scs(a)  scanf("%s",a)
#define scc(a)  scanf(" %c",a)
#define pi(a)   printf("%d",a)
#define pl(a)   printf("%lld",a)
#define pd(a)   printf("%lf",a)
#define pn      printf("\n")
#define ps      printf(" ")
#define pb(a)   push_back(a)
#define sv(v)   sort(v.begine(),v.end())
#define svi(v)  sort(v.begin(),v.end(),greater<ll>())
#define clr(a)  memset(a,0,sizeof(a))



map <string,string> mp;
map <string,string> ::iterator it;
void map_set();


int main()
{

    ll n;
    scl(n);
    map_set();

    for(ll i=0; i<n; i++)
    {
        string str;
        cin >> str;
        mp[str] = "LoL";
    }
    pl(6-n); pn;
    for(it=mp.begin(); it!=mp.end(); it++)
        if(it->second!="LoL")
            cout << it->second << endl;

    return 0;
}


void map_set()
{
    mp["purple"] = "Power";
    mp["green"] = "Time";
    mp["blue"] = "Space";
    mp["orange"] = "Soul";
    mp["red"] = "Reality";
    mp["yellow"] = "Mind";

}

