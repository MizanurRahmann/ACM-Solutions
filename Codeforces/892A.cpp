#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long cola,total=0,bottle=0;
    cin>>cola;
    long long remainingVolume[cola];
    long long capacity[cola];

    for(int i=0;i<cola;i++){
        cin>>remainingVolume[i];
        total+= remainingVolume[i];}

    for(int i=0;i<cola;i++)
        cin>>capacity[i];

    sort(capacity,capacity+cola);

    bottle= capacity[cola-1]+capacity[cola-2];

    if(total<=bottle)
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return 0;
}
