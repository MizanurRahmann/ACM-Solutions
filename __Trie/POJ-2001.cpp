#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<string>
#include<string.h>
using namespace std;

string str;
vector<string> List;
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
    int id;
    for(int i=0;i<len;i++)
    {
        id = str[i]-'a';
        if(current->next[id]==NULL)
            current->next[id] = new node();
        current = current->next[id];
        current->NODE++;
        //cout<<current->NODE<<endl;
    }
}
void PrintOutput(string str, int len)
{
    int i;
    node *current = root;
    cout<<str<<" ";

    for(i=0;i<len;i++)
    {
        int id = str[i]-'a';
        if(current->next[id]!=NULL)
        {
            current = current->next[id];
            if(current->NODE!=1) cout<<str[i];
            else{ cout<<str[i]; return;}
        }
        else cout<<str[i];

    }
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
    root = new node();
    while(getline(cin,str))
    {
        if(str.size()==0)
            break;
        List.push_back(str);
        Insert(str,str.size());
    }

    for(int i=0;i<List.size();i++)
    {
        PrintOutput(List[i],List[i].size());
        cout<<endl;
    }

    Delete(root);
    return 0;
}
