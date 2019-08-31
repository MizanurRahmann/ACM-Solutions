#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n],pos=0,neg=0,zero=0;
    double Ap,An,Az;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>0)
            pos++;
        else if(arr[i]<0)
            neg++;
        else
            zero++;
    }
    Ap = (pos*1.00)/n;
    An = (neg*1.00)/n;
    Az = (zero*1.00)/n;

    printf("%lf\n%lf\n%lf\n",Ap,An,Az);

    return 0;
}
