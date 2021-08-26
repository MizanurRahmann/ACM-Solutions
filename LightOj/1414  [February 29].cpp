#include<bits/stdc++.h>
using namespace std;

map <string,int> mp;
void finder()
{
    mp["January"]=1; mp["February"]=2; mp["March"]=3; mp["April"]=4; mp["May"]=5; mp["June"]=6;
    mp["July"]=7; mp["August"]=8; mp["September"]=9; mp["October"]=10; mp["November"]=11; mp["December"]=12;
}
int main()
{
    finder();
    int t;
    cin >> t;
    for(int x=1; x<=t; x++)
    {
        char s[20];
        long long d,Y1,Y2,ans,four,hun,f_hun,baad;
        scanf("%s %lld, %lld",s,&d,&Y1);
        if(mp[s]>2)
            ++Y1;
        scanf("%s %lld, %lld",s,&d,&Y2);
        if(mp[s]<=2)
        {
            if(mp[s]==2 && d==29){}
            else --Y2;
        }

        four = Y2/4 - (Y1-1)/4;
        hun = Y2/100 - (Y1-1)/100;
        f_hun = Y2/400 - (Y1-1)/400;
        baad = hun-f_hun;
        if(baad<0) baad = 0;

        //cout << four<<" "<<hun<<" "<<f_hun<<endl;

        ans = four - baad;
        printf("Case %d: %lld\n",x,ans);

    }
    return 0;
}
