#include<iostream>
using namespace std;
int main()
{
    int n,Lt;
    cin>>n>>Lt;
    int point[n],time[n];
    for(int i=0;i<n;i++)
        cin>>point[i];
    for(int i=0;i<n;i++)
        cin>>time[i];

    int LPOINT=0,RPOINT=0,c=0;
    for(int i=0;i<n;i++){
            c+=time[i];
        if(point[i]-c*Lt>0)
            LPOINT += point[i]-c*Lt;
        else
            LPOINT += 0;
        }
    c=0;
    for(int i=n-1;i>=0;i--){
            c+=time[i];
            if(point[i]-c*Lt>0)
                RPOINT +=point[i]-c*Lt;
            else
                RPOINT += 0;
    }
    if(LPOINT>RPOINT)
        cout<<"Limak"<<endl;
    else if(LPOINT<RPOINT)
        cout<<"Radewoosh"<<endl;
    else
        cout<<"Tie"<<endl;

    return 0;
}
