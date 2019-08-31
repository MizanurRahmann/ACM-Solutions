#include<bits/stdc++.h>
using namespace std;

char str[999999];
int main()
{
    scanf("%s",str);
    printf("%s",str);
    int len = strlen(str);
    for(int i=len-1; i>=0; i--)
        printf("%c",str[i]);
    return 0;
}
