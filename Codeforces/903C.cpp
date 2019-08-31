#include<bits/stdc++.h>
using namespace std;

#define ll                     long long
#define in(n)                  scanf("%I64d",&n)
#define inn(a,b)               scanf("%I64d %I64d",&a,&b)
#define loop(a,b)	           for(long long i=a; i<b; i++)
#define loop2(a,b)             for(long long j=a; j<b; j++)
#define mloop(a,b)             for(long long j=a; j>=b; j--)
#define mloop2(a,b)            for(long long k=a; k>=b; k--)
#define pb(a)                  push_back(a)
#define sorta(a,n)             sort(a,a+n)
#define sortv(a)               sort(a.begin(),a.end())
#define clr(a)                 memset(a,0,sizeof a)

int main()
{
    ll n,mmm,Count=1;
    vector<ll> v;
    cin >> n;
    ll arr[n+1];
    loop(0,n)
        cin >> arr[i];
    sorta(arr,n);

    loop(1,n)
    {
        if(arr[i]==arr[i-1]) Count++;
        else { v.pb(Count); Count = 1; }
    }
    v.pb(Count);
    Count = 0;


    for(ll i= v.size()-1; i>=0; i--)
    {
        if(v[i]>0)
        {
            Count+=v[i];
            mmm = v[i];
            for(ll j=i; j>=0; j--)
                v[j] -= mmm;
        }
    }
    cout << Count << endl;
    return 0;
}
