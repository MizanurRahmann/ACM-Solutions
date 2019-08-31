#include<bits/stdc++.h>
using namespace std;

vector<int> arr;
vector <string> List;
char s[52];
int MAX;
struct node{

    int cccc;
    node *next[5];
    node()
    {
        cccc=0;
        for(int i=0;i<5;i++)
            next[i] = NULL;
    }
}* root;

void Insert(char* str, int len)
{
    node *current = root;
    int id;
    for(int i=0;i<len;i++)
    {
        if(str[i]=='A') id=0;
        else if(str[i]=='C') id=1;
        else if(str[i]=='G') id=2;
        else if(str[i]=='T') id=3;

        if(current->next[id]==NULL)
            current->next[id] = new node();
        current = current->next[id];
        current->cccc++;
    }
}



int Search(string str, int len)
{
    int i,id,Count=1;
    node *current = root;
    for(i=0;i<len;i++)
    {
        if(str[i]=='A') id=0;
        else if(str[i]=='C') id=1;
        else if(str[i]=='G') id=2;
        else if(str[i]=='T') id=3;

        arr.push_back(Count*current->next[id]->cccc);
        sort(arr.begin(),arr.end());

        if(MAX<arr[arr.size()-1])
            MAX = arr[arr.size()-1];

        arr.clear();
        current = current->next[id];
        Count++;
    }
}



void Delete(node *current)
{
    for (int i=0; i<5;i++)
        if (current->next[i])
            Delete(current->next[i]);
    delete (current);
}


int main()
{
    int t;
    scanf("%d",&t);
    for(int y=1;y<=t;y++)
    {
        root = new node();
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%s",s);
            List.push_back(s);
            Insert(s,strlen(s));
        }

        for(int i=0;i<List.size();i++)
            Search(List[i],List[i].size());

        printf("Case %d: %d\n",y,MAX);

        Delete(root);
        List.clear();
        MAX = 0;
    }
    return 0;
}
