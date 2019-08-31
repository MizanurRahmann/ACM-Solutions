#include<stdio.h>

int a, b, c, d, e, f;
long long cList[10001];
long long fn( int n ) {
    if( n == 0 ) return a;
    else if( n == 1 ) return b;
    else if( n == 2 ) return c;
    else if( n == 3 ) return d;
    else if( n == 4 ) return e;
    else if( n == 5 ) return f;
    else if(cList[n-1]!=0) return cList[n-1];
    else
        cList[n-1]=(fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6))%10000007;
        return cList[n-1];
}
int main() {
    int n,i,caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- ) {
        scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&n);
        printf("Case %d: %lld\n", ++caseno, fn(n)%10000007);
        for(i=0;i<10001;i++) cList[i]=0;
    }
    return 0;
}
