#include<bits/stdc++.h>
using namespace std;

vector<int> arr;
struct node{

    bool endmark;
    int cccc;
    node *next[10+1];
    node()
    {
        endmark = false;
        cccc=0;
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
        current->cccc++;
    }
    current->endmark = true;
}



int Search(string str, int len)
{
    int i,Count=1;
    node *current = root;
    for(i=0;i<len;i++)
    {
        int xx = Count*current->next[str[i]-'0']->cccc;
        arr.push_back(xx);
        current = current->next[str[i]-'0'];
        Count++;
    }
//    for(int i=0;i<arr.size();i++)
//        cout<<endl<<arr[i];
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
            Search(List[i],List[i].size());

        }
        sort(arr.begin(),arr.end());
            cout<<arr[arr.size()-1]<<endl;

        Delete(root);
        List.clear();
        arr.clear();
    }
    return 0;
}
