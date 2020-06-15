#include<bits/stdc++.h>
using namespace std;
long long find( long long n,long long k)
{
	if(n==1)
	{
		return 0;
	}

	return (find(n-1,k)+k)%n;
}
int main()
{
	long long T;
	cin>>T;
	for( long long i=0;i<T;i++)
	{
		long long n;
		long long k;
		cin>>n>>k;
		long long ans=find(n,k);
		cout<<"Case "<<i+1<<": "<<ans+1<<endl;
	}
}
