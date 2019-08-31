#include<bits/stdc++.h>
using namespace std;

int arr[100001];
int tree[100001*4];

void init(int node, int b, int e)
{
    if(b==e)
    {
        tree[node] = arr[b];
        return;
    }
    int left = node<<1;
    int right = left+1;
    int mid = (b+e)>>1;
    init(left, b, mid);
    init(right, mid+1, e);
    tree[node] = tree[left] + tree[right];
}


void update(int node, int b, int e, int i, int v)
{
    if(i>e || i<b)
        return;
    if(b>=i && e<=i){
        tree[node] = v;
        return;
    }
    int left = node<<1;
    int right = left+1;
    int mid = (b+e)>>1;
    update(left, b, mid, i, v);
    update(right, mid+1, e, i, v);

    tree[node] = tree[left] + tree[right];
}

int query(int node,int b, int e, int i, int j)
{
    if(i>e || j<b)
        return 0;
    if(b>=i && e<=j)
        return tree[node];

    int left = node<<1;
    int right = left+1;
    int mid = (b+e)>>1;

    return (query(left, b, mid, i, j) + query(right, mid+1, e, i, j));
}

int main()
{
    int T;
    scanf("%d", &T);
    for(int t=1; t<=T; t++)
    {
        int n, q;
        scanf("%d %d", &n, &q);
        for(int i=1; i<=n; i++)
            scanf("%d", &arr[i]);

        init(1,1,n);

        printf("Case %d:\n", t);
        for(int i=0; i<q; i++)
        {
            int x,y,z;
            scanf("%d", &x);
            if(x==1)
            {
                scanf("%d", &y);
                printf("%d\n", arr[y+1]);
                arr[y+1] = 0;
                update(1, 1, n, ++y, 0);
            }
            else if(x==2)
            {
                scanf("%d %d", &y, &z);
                z += arr[y+1];
                arr[y+1] = z;
                update(1, 1, n, ++y, z);
            }
            else
            {
                scanf("%d %d", &y, &z);
                printf("%d\n", query(1,1,n,++y,++z));
            }
        }
    }
    return 0;
}
