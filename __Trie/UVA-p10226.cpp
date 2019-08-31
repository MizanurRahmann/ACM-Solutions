#include<bits/stdc++.h>
using namespace std;

char s[1001],storeErjonne[32];
int Count;
struct node{

    bool endmark;
    int number;
    node *next[100+1];
    node()
    {
        endmark = false;
        number = 0;
        for(int i=0;i<100;i++)
            next[i] = NULL;
    }
}* root;

void Insert(char* str, int len)
{
    node *current = root;
    for(int i=0;i<len;i++)
    {
        int id = str[i]-' ';
        if(current->next[id]==NULL)
            current->next[id] = new node();
        current = current->next[id];
    }
    current->endmark = true;
    current->number++;

}


void print(node* curr,char* storeErjonne,int n=0)
{
    if(curr==NULL)
        return;
    if(curr->endmark)
    {
        for(int i=0; i<n; i++)
            printf("%c",storeErjonne[i]);
        printf(" %.4lf\n",((curr->number)/(Count*1.0))*100);
    }
    for(int i=0;i<100;i++)
    {
        if(curr->next[i]!=NULL)
        {
            storeErjonne[n] = i+' ';
            print(curr->next[i],storeErjonne,n+1);
        }
    }

}


void Delete(node *current)
{
    for (int i=0; i<100;i++)
        if (current->next[i])
            Delete(current->next[i]);
    delete (current);
}


int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    getchar();
    while(t--)
    {
        root = new node();
        Count = 0;
        while(gets(s) && strlen(s)!=0)
        {
            Insert(s,strlen(s));
            Count++;
        }

        print(root,storeErjonne);
        if(t)
            printf("\n");
        Delete(root);
    }

    return 0;
}

