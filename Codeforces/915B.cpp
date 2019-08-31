#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,pos,l,r,ans;
    scanf("%d%d%d%d",&n,&pos,&l,&r);

    //For l
    if(pos<l)
    {
        if(r!=n) ans = r-pos+2;
        else ans = l-pos+1;
    }
    else if(pos==l)
    {
        if(r!=n) ans = r-pos+1;
        else ans = 0;
        if(l!=1) ans++;
    }

    //For middle
    else if(pos>l && pos<r)
    {
        if(l==1)
        {
            if(r!=n) ans = r-pos+1;
            else ans = 0;
        }
        else
        {
            if(r!=n){ans = 2*min(r-pos,pos-l)+max(r-pos,pos-l)+2;}
            else ans = pos-l+1;
        }

    }

    //For r
    else if(pos==r)
    {
        if(l!=1) ans = pos-l+1;
        else ans = 0;
        if(r!=n) ans++;
    }

    else
    {
        if(l!=1) ans = pos-l+2;
        else ans = pos-r+1;
    }
    printf("%d\n",ans);

    return 0;
}
