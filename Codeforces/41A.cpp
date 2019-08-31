#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1,str2;
    cin>>str1>>str2;

    reverse(str2.begin(), str2.end());
    if(str1==str2)
        printf("YES\n");
    else
        printf("NO\n");
}
