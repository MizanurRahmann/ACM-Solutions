#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){

        long long n,row,col;
        cin>>n;
        long long x = sqrt(n);



        if(x*x==n){
            if((x*x)%2==0){
                if(x*x-n>=x){
                    row = x;
                    col = n-x*x-(x-1)*2+1;}
                else{
                    row = x*x-n+1;
                    col = x;}}

                else{
                    if(x*x-n>=x){
                        row = n-x*x-(x-1)*2+1;
                        col = x;}
                    else{
                        row = x;
                        col = x*x-n+1;
                    }}
        }



        else{
            x++;
            if((x*x)%2==0){
                if(x*x-n>=x){
                        row = x;
                        col = n-x*x+(x-1)*2+1;}
                else{
                    col =  x;
                    row = x*x-n+1;
                }}
                else{
                    if(x*x-n>=x){
                        row = n-x*x+(x-1)*2+1;;
                        col = x;}
                    else{
                        col = x*x-n+1;
                        row = x;
                    }}
        }

            cout<<"Case "<<i<<": "<<col<<" "<<row<<endl;
    }

    return 0;
}
