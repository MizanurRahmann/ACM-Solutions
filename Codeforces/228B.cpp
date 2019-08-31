#include<bits/stdc++.h>
using namespace std;

int main()
{
    int length,time;
    scanf("%d %d",&length,&time);
    char str[length+1];
    scanf("%s",str);

    for(int i=1;i<=time;i++)
    {
        for(int j=0;j<length;j++)
        {
            if(str[j]=='B' && str[j+1]=='G')
            {
                str[j]='G';
                str[j+1]='B';
                j++;
            }
        }
    }

    printf("%s\n",str);
    return 0;
}
