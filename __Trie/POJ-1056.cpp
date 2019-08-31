#include<iostream>
#include<vector>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include <stdlib.h>
using namespace std;

struct node{

    bool endmark;
    int Count;
    node *next[2+1];
    node()
    {
        endmark = false;
        Count=0;
        for(int i=0;i<2;i++)
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
    current->Count++;
    current->endmark = true;
}



bool Search(string str, int len)
{
    int i;
    node *current = root;
    for(i=0;i<len;i++)
    {
        int id = str[i]-'0';
        if(current->next[id]->Count>1)
            return true;
        if(current->next[id]==NULL)
            return false;
        current = current->next[id];
    }
    if(current->next[0]!=NULL || current->next[1]!=NULL)
        return true;
    return false;
}



void Delete(node *current)
{
    for (int i=0; i<2;i++)
        if (current->next[i])
            Delete(current->next[i]);
    delete (current);
}


vector <string> List;
char s[11];


int main()
{
    int y=1;
    root = new node();
    while(~scanf("%s",s))
    {
         if((strcmp(s,"9")==0))
        {
            int mizan = 0;
            for(int i=0;i<List.size();i++)
            {
                if(Search(List[i],List[i].size())==true)
                {
                    printf("Set %d is not immediately decodable\n",y);
                    mizan = 1;
                    break;
                }
            }
            if(mizan==0)
                printf("Set %d is immediately decodable\n",y);

            Delete(root);
            List.clear();
            root = new node();
            y++;
            continue;
        }

        List.push_back(s);
        Insert(s,strlen(s));
    }
    return 0;
}
