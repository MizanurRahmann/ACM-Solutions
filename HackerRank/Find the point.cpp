#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        int px,py,qx,qy,rx,ry;
        cin >> px >> py >> qx >> qy;
        rx = qx+(qx-px);
        ry = qy+(qy-py);

        cout << rx <<" "<< ry<<endl;
    }
    return 0;
}
