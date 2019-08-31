#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
    int A,B,k,m;
    cin>>A>>B>>k>>m;
    int a1[A],a2[B];

    int i,j,x;
    for(i=0;i<A;i++)
        cin>>a1[i];
    for(i=0;i<B;i++)
        cin>>a2[i];

    sort(a1,a1+A);
    sort(a2,a2+B);

    if(a1[k-1]<a2[B-m])
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
