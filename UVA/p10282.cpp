#include<bits/stdc++.h>
using namespace std;

string s;
map <string,string> mp;
int main()
{
    while(getline(cin,s),s!="")
    {
        stringstream st(s);
        string foriegn,english;
        st >> english >> foriegn;
        mp[foriegn] = english;
    }

    while(getline(cin, s))
    {
        if(mp.find(s)!=mp.end())
            cout << mp[s] <<endl;
        else
            cout << "eh" << endl;
    }
    return 0;
}

