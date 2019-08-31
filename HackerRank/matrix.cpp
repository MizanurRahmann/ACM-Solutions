#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,k,i,j;
    scanf("%d %d %d",&m,&n,&k);
    int arr[m+2][n+2],temp[100],temp2[100];
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            scanf("%d",&arr[i][j]);

    for(int p=1;p<=k;p++)
    {
        //right_up to left_up
        int x;
        if(m>n) x = n/2;
        else x = m/2;
        for(i=1;i<=x;i++)
        {
            temp[i] = arr[i][i];
            for(j=i;j<=n-i;j++)
            {
                cout<<"j "<< j<<endl;
                arr[i][j] = arr[i][j+1];
            }
        }

        //left_up to left_down
        for(i=1;i<=x;i++)
        {
            temp2[i] = arr[n-i+1][i];
            for(j=m-i+1;j>=i+1;j--)
                arr[j][i] = arr[j-1][i];
            arr[j+1][i] = temp[i];
        }





        //left_down to right_down

        for(i=m;i>=x/2+1;i--)
        {
            temp[m-i+1] = arr[i][i];
            for(j=n;j>=n-i+2;j--)
                arr[j][i] = arr[j][i-1];
            arr[j][i] = temp2[m-i+1];
            x++;
        }

        //right_down to right_up
        x = 1;
        for(i=m;i>=m-m/2+1;i--)
        {
            for(j=x;j<=n-2-x+1;j++)
                arr[j][i] = arr[j+1][i];
            arr[j][i] = temp[m-i+1];
            x++;
        }


    }
    cout<<endl;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }




    return 0;
}
