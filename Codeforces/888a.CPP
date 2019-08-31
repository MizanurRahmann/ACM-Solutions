#include<iostream>
using namespace std;
int main()
{
    int element;
    cin>>element;
    int arra[element];
    for(int i=0;i<element;i++)
        cin>>arra[i];

    int COUNT=0;
    for(int i=1;i<element-1;i++){
        if(arra[i]<arra[i+1] && arra[i]<arra[i-1])
            COUNT++;
        else if(arra[i]>arra[i+1] && arra[i]>arra[i-1])
            COUNT++;
    }

         cout<<COUNT<<endl;

    return 0;
}
