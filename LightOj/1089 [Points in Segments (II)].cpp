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
#define pb(a)   push_back(a)
#define sv(v)   sort(v.begine(),v.end())
#define svi(v)  sort(v.begin(),v.end(),greater<ll>())
#define clr(a)  memset(a,0,sizeof(a))
#define pairl    pair<ll,ll>


pairl x;
map <ll,ll> ache,position;
vector <pairl> v;
vector <ll> V;

int main()
{
    ll t;
    inl(t);
    for(ll m=1; m<=t; m++)
    {

        ll n,q,index=0;
        inl(n); inl(q);
        for(ll i=0; i<n; i++)
        {
            ll L,R;
            inl(L); inl(R);

            if(ache[L]==0) { ache[L]=1; x.first = L; x.second = 1; v.pb(x); position[L]=index; index++;}
            else {v[position[L]].second++; }

            if(ache[R+1]==0) { ache[R+1]=1; x.first = R+1; x.second = -1; v.pb(x); position[R+1]=index; index++;}
            else {v[position[R+1]].second--; }
        }
        sort(v.begin(),v.end());

        for(ll i=1; i<v.size(); i++)
            v[i].second+=v[i-1].second;

        for(ll i=0; i<v.size(); i++)
            V.pb(v[i].first);


        printf("Case %lld:\n",m);
        for(ll i=0; i<q; i++)
        {
            ll Q;
            inl(Q);
            ll pos = lower_bound(V.begin(),V.end(),Q)-V.begin();

            if(pos==v.size())
                printf("0");
            else if(pos==0 && V[pos]>Q)
                printf("0");
            else if(V[pos]==Q)
                pl(v[pos].second);
            else if(V[pos-1]<Q)
                pl(v[pos-1].second);
            pn;
        }

        v.clear();
        V.clear();
        ache.clear();
        position.clear();
    }

    return 0;
}

