#include<bits/stdc++.h>
using namespace std;

char s1[210],s2[210];
int length1,length2,x;
int main()
{
    gets(s1);
    gets(s2);
    length1 = strlen(s1);
    length2 = strlen(s2);

    for(int i=0;i<length2;i++)
    {
        if(s2[i]!=' ')
        {
            x = 0;
            for(int j=0;j<length1;j++)
            {
                if(s2[i]==s1[j])
                {
                    x = 1;
                    s1[j]='#';
                    break;
                }
            }
        }
        if(x==0)
            break;
    }
    if(x==0)
        printf("NO\n");
    else
        printf("YES\n");

    return 0;
}
