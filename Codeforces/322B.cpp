#include<bits/stdc++.h>
using namespace std;

int main()
{
    int b,g,r,total,tem;
    cin >> r >> g >> b;

    if(r%3==2&&g%3==2&&b%3==0&&r>0&&b>0&&g>0)
    {
        tem = b/3;
        total = r/3+g/3+tem+1;
    }
    else if(r%3==2&&b%3==2&&g%3==0&&r>0&&b>0&&g>0)
    {
        tem = g/3;
        total = r/3+b/3+tem+1;
    }
    else if(r%3==0&&b%3==2&&g%3==2&&r>0&&b>0&&g>0)
    {
        tem = r/3;
        total = b/3+g/3+tem+1;
    }
    else
    {
        total = r/3+b/3+g/3;
        r = r%3;
        b = b%3;
        g = g%3;
        //cout << total << " " <<r << " " << g << " " << b << endl;
        if(r>0 && g>0 && b>0)
            total += (r+g+b)/3;
    }
    cout << total << endl;

    return 0;
}
