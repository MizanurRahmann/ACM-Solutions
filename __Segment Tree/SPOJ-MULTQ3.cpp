#include<bits/stdc++.h>
using namespace std;
#define mx 100001

struct info{
    int zero, one, two;
    int prp;
} tree[mx * 3];


void init(int node, int b, int e)
{
    if (b==e)
    {
        tree[node].zero = 1;
        return;
    }
    int left = node*2;
    int right = node*2 + 1;
    int mid = (b+e)/2;
    init(left, b, mid);
    init(right, mid+1, e);
    tree[node].zero = tree[left].zero + tree[right].zero;
}

void update_node(int cur){
    int temp = tree[cur].zero;
    tree[cur].zero = tree[cur].two;
    tree[cur].two = tree[cur].one;
    tree[cur].one = temp;
}
void update_child(int node, int left, int right){
    tree[left].prp += tree[node].prp;
    tree[right].prp += tree[node].prp;
    int limit = tree[node].prp%3;
    for(int i=0; i<limit; i++)
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

    tree[node].zero = tree[left].zero + tree[right].zero;
    tree[node].one = tree[left].one + tree[right].one;
    tree[node].two = tree[left].two + tree[right].two;
}

int query(int node, int b, int e, int i, int j)
{

    if(b==i && e==j)
        return tree[node].zero;

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
    {
        return query(left, b, mid, i, mid) + query(right, mid + 1, e, mid+1, j);
    }
}


int main()
{
    int N, Q;
    scanf("%d %d",&N, &Q);
    init(1,1,N);
    while(Q>0){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a==0)
            update_tree(1,1,N,++b,++c);
        else if(a==1)
            printf("%d\n",query(1,1,N,++b,++c));
        --Q;
    }
    return 0;
}
