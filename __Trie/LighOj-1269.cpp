#include<bits/stdc++.h>
using namespace std;

struct node{

    node *lChild,*rChild;
    long long endval;
    node()
    {
        lChild = NULL;
        rChild = NULL;
    }
}* root;

void bitInsert(node *root,long long n)
{
   for(long long i=32; i>=0; i--)
   {
       long long x = (n>>i) & 1;
       if(x)
       {
            if(root->rChild == NULL)
                root->rChild = new node();
            root = root->rChild;
       }
       else
       {
           if(root->lChild == NULL)
                root->lChild = new node();
            root = root->lChild;
       }
   }
   root->endval=n;
}

long long query(node *root,int p,long long n)
{
    long long ans=0;
    for(long long i=32; i>=0; i--)
   {
       long long x = (n>>i) & 1;
       if(x)
       {
            if(p==1)
            {
                if(root->lChild == NULL) root = root->rChild;
               else root = root->lChild;
            }
            else
            {
                if(root->rChild == NULL) root = root->lChild;
               else root = root->rChild;
            }
       }
       else
       {
            if(p==1)
            {
                if(root->rChild == NULL) root = root->lChild;
               else root = root->rChild;
            }
            else
            {
                if(root->lChild == NULL) root = root->rChild;
               else root = root->lChild;
            }
       }
   }
   return root->endval^n;
}

void Delete(node *current)
{
        if (current->lChild)
            Delete(current->lChild);
        if (current->rChild)
            Delete(current->rChild);

       delete (current);
}
long long arr[100005];
long long cumxor[100005];
int main()
{
    long long t,n,x,temp,MAX,MIN;
    scanf("%lld",&t);
    for(int j=1;j<=t;j++)
    {
        MAX = 0,MIN = LLONG_MAX;
        root = new node();
        scanf("%lld",&n);
        for(long long i=1;i<=n;i++)
        {
            scanf("%lld",&arr[i]);
            cumxor[i]=cumxor[i-1]^arr[i];
        }
        bitInsert(root,arr[0]);
        for(long long i=1;i<=n;i++)
        {
            MAX = max(MAX,query(root,1,cumxor[i]));
            MIN = min(MIN,query(root,0,cumxor[i]));
            bitInsert(root,cumxor[i]);
        }
        printf("Case %d: %lld %lld\n",j,MAX,MIN);
        Delete(root);
    }
    return 0;
}
