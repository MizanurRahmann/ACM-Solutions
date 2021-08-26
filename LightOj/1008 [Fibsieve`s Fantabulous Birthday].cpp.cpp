#include<iostream>
using namespace std;

int main()
{
    int testcase;
    cin>>testcase;
    for(int k=1;k<=testcase;k++){
        long long n,j=1,i=1,row,col;
        cin>>n;

        while(1==1){
            if(j>=n){
                    if(j-i+1<=n){
                        row = i;
                        col = j-n+1;
                        break;}
                    else if(j-(i-1)*2<=n){
                        row = n-j+(i-1)*2+1;
                        col = i;
                        break;}
                    else{
                        j = (i-2)*(i-2)+1;
                        i = i-1;
                        //cout<<i<<" "<<j<<endl;
                        if(j+i-1>=n){
                            row = i;
                            col = n-j+1;
                            break;}
                        else if(j+(i+1)*2>=n){
                            row = j+(i-1)*2-n+1;
                            col = i;
                            break;}
                    }
            }
            else{
                i+=2;
                j=i*i;
            }
        }
        cout<<"Case "<<k<<": "<<col<<" "<<row<<endl;
    }

    return 0;
}
