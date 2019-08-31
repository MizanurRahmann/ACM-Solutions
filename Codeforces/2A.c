#include<string.h>
#include<stdio.h>
int main()
{
    int n,i,j,k,x=-1;
    scanf("%d",&n);
    int point[n],POINT[n],temp;
    char name[n][33],NAME[n][33],Temp[33];

    //Getting Input
    for(i=0;i<n;i++){
        scanf("%s %d",name[i],&point[i]);
        strcpy(NAME[i],name[i]);
        POINT[i]=point[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
           if(strcmp(NAME[i],NAME[j])==0){
            if(strcmp(NAME[i]," ")!=0){
                POINT[i]+=POINT[j];
                strcpy(NAME[j]," ");
                POINT[j]=0;
            }}
        }
    }
    //sorting the Data
    for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(POINT[i]>POINT[j]){
                    temp=POINT[i];
                    POINT[i]=POINT[j];
                    POINT[j]=temp;

                    strcpy(Temp,NAME[i]);
                    strcpy(NAME[i],NAME[j]);
                   strcpy(NAME[j],Temp);
                }
            }}
    if(POINT[0]>POINT[1])
        printf("%s\n",NAME[0]);


    else{

       int count=1;
       for(i=0;i<n;i++){ if(POINT[0]==POINT[i+1]) count++;}

    for(i=0;i<n;i++){
        if(point[i]>=POINT[0]){
            for(k=0;k<count;k++){
                if(strcmp(name[i],NAME[k])==0){
                    x=k; break;}
				}}
			if(x!=-1) break;

        for(j=0;j<i;j++){
            if(strcmp(name[i],name[j])==0){
                strcpy(name[i]," ");
                point[j]+=point[i];
                point[i]=0;}
            if(point[j]>=POINT[0]){
                for(k=0;k<count;k++){
                    if(strcmp(name[j],NAME[k])==0){
                        x=k; break;}
                        }}
        if(x!=-1) break;
        }
		if(x!=-1) break;
	}
	printf("%s\n",NAME[x]);
    }
return 0;
}
