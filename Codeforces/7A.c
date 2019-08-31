#include<stdio.h>
int main()
{
    char s[8][8];
    int i,j,count=0,x=0;
    for(i=0;i<8;i++)
        scanf("%s",s[i]);

        /*For Row*/

    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            if(s[i][j]!='B'){
                x=1;
                break;}}
        if(x==0)
            count+=1;
            x=0;
    }

    /*For collum*/

    if(count!=8){
            for(i=0;i<8;i++){
        for(j=0;j<8;j++){
           if(s[j][i]!='B'){
                x=1;
                break;}}
                if(x==0)
            count+=1;
            x=0;
    }
    }
    printf("%d\n",count);

    return 0;
}
