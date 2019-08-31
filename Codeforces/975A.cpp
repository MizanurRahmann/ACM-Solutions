#include<bits/stdc++.h>
using namespace std;

#define ini(a)		scanf("%d",&a)
#define inl(a)		scanf("%lld",&a)
#define ind(a)		scanf("%lf",&a)
#define pi(a)		printf("%d",a)
#define pl(a)		printf("%lld",a)
#define pd(a)		printf("%lf",a)
#define pn          printf("\n")

#define pb(a)		push_back(a)
#define sv(v)		sort(v.begin(),v.end())
#define clr(a)		memset(a,0,sizeof(a))



int main()
{
    int arr[27],n;
    map<string,int> mp;
    string s,S;
    ini(n);

    for(int i=0; i<n; i++)
    {
        cin >> s;
        int l = s.size();
        for(int j=0; j<l; j++)
            arr[s[j]-'a']=1;
        for(int j=0; j<27; j++)
            if(arr[j]==1)
                S.push_back(j+'a');
        mp[S]=1;
        S.clear();
        clr(arr);
    }
    pi(mp.size());
    pn;
    return 0;
}
