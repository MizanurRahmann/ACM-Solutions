#include<bits/stdc++.h>
using namespace std;

struct NODE{
    int on,off;
    int prp;
} tree[100001*4];

void init(int node, int b, int e)
{
    if(b==e)
    {
        tree[node].off = 1;
        return;
    }
    int left = node<<1;
    int right = left+1;
    int mid = (b+e)>>1;
    init(left, b, mid);
    init(right, mid+1, e);

    tree[node].off = tree[left].off + tree[right].off;
}

void update_node(int cur)
{
    int temp = tree[cur].on;
    tree[cur].on = tree[cur].off;
    tree[cur].off = temp;
}

void update_child(int node, int left, int right)
{
    tree[left].prp += tree[node].prp;
    tree[right].prp += tree[node].prp;

    if(tree[node].prp%2==1)
    {
        update_node(left);
        update_node(right);
    }
    tree[node].prp = 0;
}

void update_tree(int node, int b, int e, int i, int j)
{
    if(b==i && e==j)
    {
        tree[node].prp++;
        update_node(node);
        return;
    }
    int left = node<<1;
    int right = left+1;
    int mid = (b+e)>>1;

     if(tree[node].prp != 0)
        update_child(node, left, right);

    if(j<=mid)
        update_tree(left,b,mid,i,j);
    else if(i>mid)
        update_tree(right,mid+1,e,i,j);
    else
    {
        update_tree(left, b, mid, i, mid);
        update_tree(right, mid + 1, e, mid+1, j);
    }

    tree[node].on = tree[left].on + tree[right].on;
    tree[node].off = tree[left].off + tree[right].off;
}

int query(int node, int b, int e, int i, int j)
{
    if(b==i && e==j)
        return tree[node].on;

    int left = node<<1;
    int right = left+1;
    int mid = (b+e)>>1;

    if(tree[node].prp != 0)
        update_child(node, left, right);

    if(j<=mid)
        return query(left,b,mid,i,j);
    else if(i>mid)
        return query(right,mid+1,e,i,j);
    else
        return query(left, b, mid, i, mid) + query(right, mid + 1, e, mid+1, j);
}


int main()
{
    int n,q;
    scanf("%d %d",&n,&q);
    init(1,1,n);

    for(int i=0; i<q; i++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a==0)
            update_tree(1,1,n,b,c);
        else
            printf("%d\n",query(1,1,n,b,c));
    }
    return 0;
}
