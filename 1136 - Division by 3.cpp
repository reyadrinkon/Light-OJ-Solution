/*
Author:Reyad Hasan Rinkon
SUST CSE-2017B
*/

#include<bits/stdc++.h>
using namespace std;
int main ()
{

    unsigned long long a,b,t,ans=0;
    cin>>t;
    for( int i=0;i<t;i++)
    {
    cin>>a>>b;
    ans=(a-b)/3*2;
    if(a%3==1)
    {

        if(b%3==2)
        {
            ans=ans+1;
        }
        else if(b%3==0)
        {
            ans=ans+2;
        }

    }

    if(a%3==2)
    {
        if(b%3==1)
        {
            ans=ans+2;
        }
        else if(b%3==2)
        {
            ans=ans+1;
        }
        else if(b%3==0)
        {
            ans=ans+2;
        }

    }
    if(a%3==0)
    {
        if(b%3==1)
        {
            ans=ans+1;
        }
        else if(b%3==2)
        {
            ans=ans+2;
        }
        else if(b%3==0)
        {
            ans=ans+1;
        }

    }
    cout<<ans<<endl;
    }

}
