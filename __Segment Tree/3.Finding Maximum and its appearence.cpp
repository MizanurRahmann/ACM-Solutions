#include<bits/stdc++.h>
using namespace std;
#define mx 100001

int arr[mx];
pair<int, int> tree[mx * 3];

pair<int, int> combine(pair<int, int> a, pair<int, int> b)
{
    if(a.first > b.first) return a;
    else if(a.first < b.first) return b;
    return make_pair(a.first, a.second+b.second);
}

void init(int node, int b, int e)
{

    if (b==e)
    {
        tree[node] = make_pair(arr[b], 1);
        return;
    }
    int left = node<<1;
    int right = left + 1;
    int mid = (b+e)>>1;
    init(left, b, mid);
    init(right, mid+1, e);
    tree[node] = combine(tree[left], tree[right]);
}

pair<int, int> get_max(int node, int b, int e, int i, int j)
{
    if(b==i && e==j)
        return tree[node];

    int left = node<<1;
    int right = left + 1;
    int mid = (b+e)/2;

    if(j<=mid)
        return get_max(left,b,mid,i,j);
    else if(i>mid)
        return get_max(right,mid+1,e,i,j);
    else
        return combine(get_max(left, b, mid, i, mid), get_max(right, mid + 1, e, mid+1, j));
}

void update(int node, int b, int e, int i, int newvalue)
{
    if (i > e || i < b)
        return;
    if (b >= i && e <= i) {
        tree[node] = make_pair(newvalue, 1);
        return;
    }
    int left = node<<1;
    int right = left + 1;
    int mid = (b+e)>>1;

    update(left, b, mid, i, newvalue);
    update(right, mid + 1, e, i, newvalue);
    tree[node] = combine(tree[left], tree[right]);
}


int main()
{
    int n, q;
    cin >> n;
    for(int i=1; i<=n; i++)
        cin >> arr[i];
    init(1,1,n);

    scanf("%d", &q);
    for(int i=1; i<=q; i++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a==0)
            update(1,1,n,b,c);
        else
            printf("Maximum: %d - Frequency: %d\n", get_max(1,1,n,b,c).first, get_max(1,1,n,b,c).second);
    }
    return 0;
}

/*
Sample input :
8
12 3 12 34 56 12 34 56
3
1 1 6
0 5 12
1 1 6
*/

