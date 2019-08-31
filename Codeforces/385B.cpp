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



int main()
{
    string str;
    cin >> str;
    int pos,ans=0,len = str.length();

    for(int i=0; i<str.length(); i++)
    {
        pos = str.find("bear",i);
        //cout << pos << endl;
        if(pos>=0)
            ans += (str.length()-pos-3);
    }
    pi(ans);
    pn;

    return 0;
}
