#include<bits/stdc++.h>
using namespace std;

string str;
int main()
{
    cin>>str;

    char temp = 'a';

    for(int i=0;i<str.size();i++)
    {
        //cout<<str[i]<<" "<<temp<<endl;
        if(str[i]==temp)
            temp++;
        else if(str[i]<temp)
        {
            str[i]=temp;
            temp++;
        }
        if(temp=='z'+1)
        {
            cout<<str;
            return 0;
        }
    }
    cout<<"-1\n";
    return 0;
}
