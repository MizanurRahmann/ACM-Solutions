#include<bits/stdc++.h>
using namespace std;

#define ll      long long
#define ini(a)  scanf("%d",&a)
#define inl(a)  scanf("%lld",&a)
#define ind(a)  scanf("%lf",&a)
#define ins(a)  scanf("%s",a)
#define pi(a)   printf("%d",a)
#define pl(a)   printf("%lld",a)
#define pd(a)   printf("%lf",a)
#define pn      printf("\n")
#define ps      printf(" ")
#define pstr(a) printf("%s",a)
#define pb(a)   push_back(a)
#define sv(v)   sort(v.begine(),v.end())
#define svi(v)  sort(v.begin(),v.end(),greater<ll>())
#define clr(a)  memset(a,0,sizeof(a))


vector<string> v1,v2;
string str;
int main()
{
    ll t;
    inl(t);
    for(ll x=1; x<=t; x++)
    {
        ll i=0,e=0;
        printf("Case %lld:\n",x);

        while(true)
        {
            cin >> str;
            if(str=="VISIT")
            {
                cin >> str;
                v1.pb(str);
                cout << str << endl;
                v2.clear();
            }
            else if(str=="BACK")
            {
                if(v1.size()!=0)
                {
                    v2.pb(v1[v1.size()-1]);
                    v1.erase(v1.begin()+v1.size()-1);
                    if(v1.size()==0)
                        cout << "http://www.lightoj.com/\n";
                    else
                        cout << v1[v1.size()-1] << endl;
                }
                else
                    cout << "Ignored\n";
            }
            else if(str=="FORWARD")
            {
                if(v2.size()!=0)
                {
                    cout << v2[v2.size()-1] << endl;
                    v1.pb(v2[v2.size()-1]);
                    v2.erase(v2.begin()+v2.size()-1);
                }
                else
                    cout << "Ignored\n";
            }
            else if(str=="QUIT")
                break;
        }
        v1.clear();
        v2.clear();
    }
    return 0;
}

