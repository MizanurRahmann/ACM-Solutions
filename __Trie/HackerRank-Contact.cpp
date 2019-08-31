#include<bits/stdc++.h>
using namespace std;

char s[100001];
struct node{

    int NODE;
    node *next[26+1];
    node()
    {
        NODE = 0;
        for(int i=0;i<26;i++)
            next[i] = NULL;
    }
}* root;
void Insert(string str, int len)
{
    node *current = root;
    for(int i=0;i<len;i++)
    {
        int id = str[i]-'a';
        if(current->next[id]==NULL)
            current->next[id] = new node();
        current = current->next[id];
        current->NODE++;
    }
}
int Search(string str, int len)
{
    int i;
    node *current = root;
    for(i=0;i<len;i++)
    {
        int id = str[i]-'a';
        if(current->next[id]==NULL)
            return 0;
        current = current->next[id];
    }
    return current->NODE;
}
void Delete(node *current)
{
    for (int i=0; i<26;i++)
        if (current->next[i])
            Delete(current->next[i]);
    delete (current);
}




int main()
{
    int n;
    string s1,s2;
    scanf("%d",&n);
    root = new node();

    for(int i=0;i<n;i++)
    {
        cin>>s1>>s2;
        if(s1=="add")
            Insert(s2,s2.size());
        else
            printf("%d\n",Search(s2,s2.size()));

    }
    Delete(root);
    return 0;
}
