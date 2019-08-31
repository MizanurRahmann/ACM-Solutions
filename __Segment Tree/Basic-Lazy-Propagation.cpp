#include<bits/stdc++.h>
using namespace std;
#define mx 100001

int arr[mx];
struct info{
    int prop, sum;
} tree[mx * 3];

void init(int node, int b, int e)
{
    if (b==e)
    {
        tree[node].sum = arr[b];
        return;
    }
    int left = node*2;
    int right = node*2 + 1;
    int mid = (b+e)/2;
    init(left, b, mid);
    init(right, mid+1, e);
    tree[node].sum = tree[left].sum + tree[right].sum;
}

int query(int node, int b, int e, int i, int j, int carry)
{
    if(i>e || j<b)
        return 0;
    if(b>=i && e<=j)
        return tree[node].sum + carry*(e-b+1);

    int left = node*2;
    int right = node*2 + 1;
    int mid = (b+e)/2;
    int p1 = query(left, b, mid, i, j, carry+tree[node].prop);
    int p2 = query(right, mid+1, e, i, j, carry+tree[node].prop);
    return p1 + p2;
}
void update(int node, int b, int e, int i, int j, int newvalue)
{
    if (i>e || j<b)
        return;
    if (b>=i && e<=j)
    {
        tree[node].sum += ((e-b+1)*newvalue);
        tree[node].prop += newvalue;
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, j, newvalue);
    update(Right, mid + 1, e, i, j, newvalue);
    tree[node].sum = tree[Left].sum + tree[Right].sum + (e-b+1)*tree[node].prop;
}


int main()
{
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
        cin >> arr[i];
    init(1,1,n);

    update(1,1,n,2,4,3);
    cout << query(1, 1, n, 1, 3, 0) << endl;
    cout << query(1, 1, n, 2, 5, 0) << endl;
    update(1,1,n,3,5,2);
    cout << query(1,1,n,1,5,0) << endl;
    return 0;
}


// 1 2 3 4 5
// 1 5 6 7 5
// 1-3 = 12
// 2-5 = 23
// 1 5 8 9 7
// 1-5 = 30
