#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[105];
    scanf("%s",s);

    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='y'&&s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='O'&&s[i]!='U'&&s[i]!='Y')
        {
                if(s[i]>='A' && s[i]<='Z')
                    printf(".%c",s[i]+32);
                else
                    printf(".%c",s[i]);
        }
    }

    return 0;
}
