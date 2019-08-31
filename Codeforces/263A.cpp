#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5][5],x_i,x_j;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&arr[i][j]);
            if(arr[i][j]==1){
                x_i = i;
                x_j = j;
            }
        }
    }

    printf("%d\n",abs(x_i-2)+abs(x_j-2));
    return 0;
}
