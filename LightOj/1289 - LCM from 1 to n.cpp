#include<bits/stdc++.h>
using namespace std;

#define ll      long long
#define sci(a)  scanf("%d",&a)
#define scl(a)  scanf("%lld",&a)
#define scd(a)  scanf("%lf",&a)
#define scs(a)  scanf("%s",a)
#define scc(a)  scanf(" %c",a)
#define pi(a)   printf("%d",a)
#define pl(a)   printf("%lld",a)
#define pd(a)   printf("%lf",a)
#define pn      printf("\n")
#define ps      printf(" ")
#define pb(a)   push_back(a)
#define sv(v)   sort(v.begine(),v.end())
#define svi(v)  sort(v.begin(),v.end(),greater<ll>())
#define clr(a)  memset(a,0,sizeof(a))
#define mx      100000000
ll const mod = 4294967296;


bool Check(int N,int pos){return (bool)(N & (1<<pos));}
int Set(int N,int pos){	return N=N | (1<<pos);}


int N=mx,cnt=0;
int status[(mx/32)+2],prime[5761558];

void bit_sieve()
{
	 int i, j, sqrtN;
     sqrtN = int( sqrt( N ) );
     for( i = 3; i <= sqrtN; i += 2 )
     {
		 if( Check(status[i>>5],i&31)==0)
		 {
	 		 for( j = i*i; j <= N; j += (i<<1) )
                status[j>>5] = Set(status[j>>5],j & 31);
		 }
	 }
    prime[cnt++] = 2;

	for (int i = 3; i <= N; i += 2)
		if( Check(status[i/32],i%32)==0)
            prime[cnt++] = i;
}



int main()
{
    int t;
    bit_sieve();

    sci(t);
    for(int m=1; m<=t; m++)
    {
        int n;o
        ll Value=1;
        sci(n);

        for(int i=2; i<=n; i++)
        {
            if( Check(status[i/32],i%32)==1 || (i%2==0 && i!=2))
            {cout <<"For " <<i<<endl;
                int num = i,cc=0,COUnt=0;
                while(num!=1)
                {
                    if(num%prime[cc]==0) { COUnt++; num/=prime[cc]; }
                    else { Value *= (((COUnt-1)*prime[cc])%mod); COUnt=0; cc++;}

                    if(num==1) { Value *= (((COUnt-1)*prime[cc])%mod);}
                    cout << num<< " " <<COUnt<< " "<<Value<<endl;
                }
            }
            else
                Value *= (i%mod);
            pn;

            //cout << Value << endl;
        }
        cout << Value << endl;

    }

    return 0;
}



