/*
Author:Reyad Hasan Rinkon
SUST CSE-2017B
*/
#include<bits/stdc++.h>
using namespace std;
int pitha(int a,int b,int c)
{
    int x;
    if((a>b)&&(a>c))
    {
        x=b*b+c*c;
        return x;
    }
    else if((b>c)&&(b>a))
    {
        x=c*c+a*a;
        return x;
    }
    else if((c>a)&&(c>b))
    {
        x=a*a+b*b;
        return x;
    }
    else
    {
        return -1;
    }

}

int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {


        int a,b,c,d;
        int e;
        cin>>a>>b>>c;
        d=pitha(a,b,c);
        e=max(a,max(b,c));
        if (d==e*e)
        {
            cout<<"Case "<<i<<": "<<"yes"<<endl;


        }
        else
        {
            cout<<"Case "<<i<<": "<<"no"<<endl;

        }
    }
}
