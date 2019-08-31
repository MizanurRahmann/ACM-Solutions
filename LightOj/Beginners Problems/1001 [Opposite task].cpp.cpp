#include<iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int i=1;i<=T;i++){
        int n;
        cin>>n;

        cout<<n/2<<" "<<n-n/2<<endl;
    }
    return 0;
}
