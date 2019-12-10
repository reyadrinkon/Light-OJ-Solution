#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long T;
    cin>>T;
    for( unsigned long long i=0;i<T;i++)
    {
        cout<<"Case ";
        cout<<i+1<<": ";
        unsigned long long n,x;
        cin>>n;
        long double p=sqrt(n);
        unsigned long long  cil=ceil(p);
        unsigned long long flr=floor(p);
        while(cil>flr)
        {
            x=((flr*flr)+1+(cil*cil))/2;
            break;
        }
        while(flr==cil)
        {
            x=((cil*cil)+((flr-1)*(flr-1)+1))/2;
            break;
        }
        if(cil%2==0)
        {

            if(n>x)
            {
                cout<<cil<<" ";

                cout<<cil*cil-n+1<<endl;
            }
            else if (n<x)
            {
                cout<<n-((flr*flr)+1)+1<<" ";
                cout<<cil<<endl;
            }
            else if(x==n)
            {
                cout<<cil<<" ";
                cout<<cil<<endl;
            }


        }
        else
        {
            if(n>x)
            {
                cout<<(cil*cil)-n+1<<" ";
                cout<<cil<<endl;
            }
            else if(n<x)
            {
                cout<<cil<<" ";
                cout<<n-((flr*flr)+1)+1<<endl;
            }
            else if(x==n)
            {
                cout<<cil<<" ";
                cout<<cil<<endl;
            }
        }
    }
}
