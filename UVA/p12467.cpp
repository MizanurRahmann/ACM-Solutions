#include<bits/stdc++.h>
using namespace std;

int n,k,p,len;
char s[1000010];
vector<char> v1,v2;
int main()
{
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%s",s);
        len = strlen(s);
        k = 0;
        p = 0;
        for(int j=len-1; j>=0; j--)
        {
            if(s[j]==s[k] && p!=1)
                p=1;
            if(p==1)
            {
                if(s[j]==s[k]){v1.push_back(s[j]);  k++;}
                else
                {
                    if(v2.size() <= v1.size())
                    {
                        v2.clear();
                        vector<char>::iterator it=v2.begin();
                        v2.insert(it,v1.begin(),v1.end());
                    }
                    v1.clear();
                    p=0;
                    j=j+k;
                    k=0;
                }
            }
        }
        if(v2.size() <= v1.size())
        {
            v2.clear();
            vector<char>::iterator it=v2.begin();
            v2.insert(it,v1.begin(),v1.end());
        }
        v1.clear();

        for(int j=v2.size()-1; j>=0; j--)
            cout << v2[j];
        cout<<endl;
        v2.clear();
        v1.clear();
    }

    return 0;
}

