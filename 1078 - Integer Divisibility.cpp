#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long T;
    scanf("%d",&T);
    for( long long i=0;i<T;i++)
    {
        long long n,x;
        scanf("%lld %lld",&x,&n);
        long long ans=1;
        long long m=n;
        while(n%x!=0)
        {
            n=((n*10)+m)%x;
            ans++;
        }
        printf("Case %lld: %lld\n",i+1,ans);


    }
}
