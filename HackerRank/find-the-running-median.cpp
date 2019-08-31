#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    vector<double> v;
    vector<double>::iterator ii;

    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a);
        ii = lower_bound(v.begin(),v.end(),a);
        v.insert(ii,a);

        if(v.size()==1)
            printf("%.1lf\n",v[i-1]);
        else if(v.size()%2==0)
        {
            double m=v[v.size()/2],r=v[v.size()/2 -1];
            printf("%.1lf\n",(m+r)/2.0);
        }
        else
            printf("%.1lf\n",v[(v.size()+1)/2 - 1]);
    }
    return 0;
}
