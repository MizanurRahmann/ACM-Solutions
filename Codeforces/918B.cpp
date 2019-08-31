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
#define sv(v)   sort(v.begine(),v.end())
#define svi(v)  sort(v.begin(),v.end(),greater<ll>())
#define clr(a)  memset(a,0,sizeof(a))


map <string, string> mp;
int main()
{
    int n,m;
    string s1,s2,s3,s4,s;
    ini(n); ini(m);
    for(int i=0; i<n; i++)
    {
        cin >> s1 >> s2;
        mp[s2] = s1;
    }
    for(int i=0; i<m; i++)
    {
       cin >> s3 >> s4;
       s = s4;
       s.erase(s.begin()+s.size()-1);
       cout << s3 << " " << s4 << " #"<<mp[s]<<endl;
    }
}
