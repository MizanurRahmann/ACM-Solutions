#include<bits/stdc++.h>
using namespace std;

struct node{

    bool endmark;
    node *next[10+1];
    node()
    {
        endmark = false;
        for(int i=0;i<10;i++)
            next[i] = NULL;
    }
}* root;

void Insert(char* str, int len)
{
    node *current = root;
    for(int i=0;i<len;i++)
    {
        int id = str[i]-'0';
        if(current->next[id]==NULL)
            current->next[id] = new node();
        current = current->next[id];
    }
    current->endmark = true;
}



bool Search(string str, int len)
{
    int i;
    node *current = root;
    for(i=0;i<len;i++)
    {
        int id = str[i]-'0';
        if(current->next[id]==NULL)
            return false;
        current = current->next[id];
    }
    for(int i=0;i<10;i++)
        if(current->next[i]!=NULL)
            return true;
    return false;
}



void Delete(node *current)
{
    for (int i=0; i<10;i++)
        if (current->next[i])
            Delete(current->next[i]);
    delete (current);
}


vector <string> List;
char s[100001];


int main()
{
    int t;
    cin>>t;

    for(int y=1;y<=t;y++)
    {
        root = new node();
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            scanf("%s",s);
            List.push_back(s);
            Insert(s,strlen(s));

        }
        int mizan = 0;
        for(int i=0;i<List.size();i++)
        {
            if(Search(List[i],List[i].size())==true)
            {
                printf("Case %d: NO\n",y);
                mizan = 1;
                break;
            }
        }
        if(mizan==0)
            printf("Case %d: YES\n",y);
        Delete(root);
        List.clear();
    }
    return 0;
}
