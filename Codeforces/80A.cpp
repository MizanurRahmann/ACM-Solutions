#include<iostream>
#include<math.h>
using namespace std;


int main()
{
    bool Sieve(int First,int Second);
    int F,S;
    cin>>F>>S;
    if(Sieve(F,S))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}



int Sieve(int First,int Second){
    int ara[Second+1],Size = sqrt(Second);
    for(int i=0;i<=Second;i++)
        ara[i]=1;

    for(int i=2;i<=Size;i++){
        if(ara[i] == 1){
        for(int j=2;i*j<=Second;j++)
        ara[i*j]=0;
        }}

    int x=0,y=0;
    for(int i=Second;i>=2;i--){
        if(i==Second){
           if(ara[i]!=0) x=1;
           else break;}
        else{
            if(ara[i]!=0){
            if(i==First){ y=1; break;}
            else break;}
                }}
    if(x==1 && y==1)
        return 1;
    else
        return 0;

}
