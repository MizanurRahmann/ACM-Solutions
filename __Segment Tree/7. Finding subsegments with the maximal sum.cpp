//Finding subsegments with the maximal sum
#include<bits/stdc++.h>
using namespace std;
#define MAX 100001

int arr[MAX];
struct data {
    int sum, pref, suff, ans;
} tree[MAX*4];


data make_data(int value)
{
    data x;
    x.sum = value;
    x.pref = max(0, value); x.suff = max(0, value); x.ans = max(0, value);
    return x;
}
data combine(data l, data r)
{
    data x;
    x.sum = l.sum + r.sum;
    x.pref = max(l.pref, l.sum + r.pref);
    x.suff = max(r.suff, r.sum + l.suff);
    x.ans = max(max(l.ans, r.ans), l.suff+r.pref);
    return x;
}
void build(int node, int b, int e)
{
    if(b==e)
    {
        tree[node] = make_data(arr[b]);
        return;
    }
    int left = node<<1;
    int right = left + 1;
    int mid = (b+e)>>1;
    build(left, b, mid);
    build(right, mid+1, e);

    tree[node] = combine(tree[left], tree[right]);
}

data query(int node, int b, int e, int i, int j)
{
    if(i>e || j<b)
        return make_data(0);
    if(b>=i && e<=j)
        return tree[node];

    int left = node<<1;
    int right = left + 1;
    int mid = (b+e)>>1;

    if(j<=mid)
        return query(left, b, mid, i, j);
    else if(i>mid)
        return query(right, mid+1, e, i, j);
    else
    {
        data p1 = query(left, b, mid, i, j);
        data p2 = query(right, mid+1, e, i, j);
        return combine(p1, p2);
    }
}
int main()
{
    int n,q;
    scanf("%d %d",&n, &q);
    for(int i=1; i<=n; i++)
        scanf("%d", &arr[i]);
    build(1,1,n);

    for(int i=0; i<q; i++)
    {
        int a,b;
        scanf("%d %d", &a, &b);


        printf("%d\n", query(1,1,n,a,b).ans);
    }
    return 0;
}

/*
8 5
1 2 -3 4 6 -2 7 -5

2 6
1 3
4 8

output
10
3
15
*/
