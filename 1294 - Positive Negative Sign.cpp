#include<bits/stdc++.h>
using namespace std;
int main ()
{
	long long T;
	cin>>T;
	for( long long i=0;i<T;i++)
	{
		long long n;
		long long m;
		cin>>n>>m;
		long long s1,s2;
		s1=(m*(m+1))/2;
		s2=(m*((2*m)+1))-s1;
		long long ans=(s2-s1)*(n/(2*m));
		cout<<"Case "<<i+1<<": "<<ans<<endl;
	}
}
