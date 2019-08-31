#include<iostream>
using namespace std;
int main()
{
    int person;
    cin>>person;
    long long L[person];
    for(int i=0;i<person;i++)
        cin>>L[i];

    int position=person-1,dead=0;

    for(int i=person-1;i>=1;i--){

        if(L[i]==0){
            if(i<=position)
                position--;
        }
        else{
            if(i-L[i]<position){
                if(i-L[i]>0){
                dead+=position-i+L[i];
                position=i-L[i];}
                else{
                dead+=position;
                break;}
        }}
    }

    cout<<person-dead<<endl;

    return 0;
}
