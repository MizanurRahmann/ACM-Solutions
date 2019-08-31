#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,f=0,s=0;
    scanf("%d",&n);

    string str,r1="~",r2="`";
    for(int i=0;i<n;i++)
    {
        cin>>str;
        if(str == r1) f++;
        else if(str==r2) s++;
        else if(r1=="~"){r1=str; f++;}
        else {r2 = str; s++;}
    }
    if(f>s)
        cout<<r1<<endl;
    else
        cout<<r2<<endl;

    return 0;
}
