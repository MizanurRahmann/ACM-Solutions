#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=1,ans=0;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",s);

    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]==s[i+1]) count++;
        else{ ans += count-1; count=1;}
    }
    printf("%d\n",ans);
    return 0;
}
