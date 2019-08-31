#include<stdio.h>
#include<string.h>
int main()
{
    char name[1000];
    int n=0,minus=0,count=0;
    while(NULL!=gets(name)){
        if(name[0]=='+')
            n+=1;
        else if(name[0]=='-')
            n-=1;
        else{
                int i;
                for(i=0;name[i]!=':';i++)
                minus+=1;
                count+=(strlen(name)-minus-1)*n;
                minus=0;
        }
    }
    printf("%d\n",count);
    return 0;
}
