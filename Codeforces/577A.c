#include<iostream>
using namespace std;
int main()
{
    int a,b,count=0;
    cin>>a>>b;
    for(int i=2;i<=a;i++){
        count += b/i;
    }
    return 0;
}
