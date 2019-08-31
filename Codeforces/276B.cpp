#include<bits/stdc++.h>
using namespace std;

char s[10001];
int a[28],Count=0,length;
int main()
{
    scanf("%s",&s);
    length = strlen(s);
    for(int i=0;i<length;i++)
        a[s[i]-'a']++;

    for(int i=0;i<=26;i++)
        if(a[i]%2!=0)
            Count++;


    if(Count%2==1 || Count==0)
        printf("First\n");
    else
        printf("Second\n");
}
