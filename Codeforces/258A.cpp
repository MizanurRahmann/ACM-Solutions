#include<bits/stdc++.h>
using namespace std;
char str[1000000];

int main()
{
    int x=0;
    scanf("%s",str);
    int l=strlen(str);
    for(int i=0;i<l;i++)
    {
        if(str[i]=='0' && str[i+1]=='1' && x==0){
            printf("%c",str[i+1]);
            x=1;
            i++;
        }
        else if(x==0 && i==l-1){}
        else printf("%c",str[i]);
    }
    printf("\n");
    return 0;
}
