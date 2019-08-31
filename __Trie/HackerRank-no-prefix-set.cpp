#include<bits/stdc++.h>
using namespace std;

vector <string> List;
char s[100];

struct node{

    bool endmark;
    int NODE=0;
    node *next[11];
    node()
    {
        endmark = false;
        for(int i=0;i<11;i++)
            next[i] = NULL;
    }
}* root;

void Insert(char* str, int len)
{
    node *current = root;
    for(int i=0;i<len;i++)
    {
        int id = str[i]-'a';
        if(current->next[id]==NULL)
            current->next[id] = new node();
        current = current->next[id];
    }
    //current->endmark = true;
}



bool mainOperation(string str, int len)
{
    int i;
    node *current = root;
    current = current->next[str[0]-'a'];
    current->NODE++;

    for(i=1;i<len;i++)
    {
        if(current->NODE>1 && current->endmark==true){return true;}
        if(current->next[str[i]-'a']==NULL){return false;}
        current = current->next[str[i]-'a'];
        current->NODE++;
    }
    current->endmark = true;
    if(current->NODE>1) return true;
    else return false;
}


void Delete(node *current)
{
    for (int i=0; i<11;i++)
        if (current->next[i])
            Delete(current->next[i]);
    delete (current);
}

int main()
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
        if(mainOperation(List[i],List[i].size())==true)
        {
            cout<<"BAD SET\n"<<List[i]<<endl;
            mizan = 1;
            break;
        }
    }
    if(mizan==0)
        cout<<"GOOD SET\n";

    Delete(root);
    List.clear();

    return 0;
}
