/*
Author:Reyad Hasan Rinkon
SUST CSE-2017B
*/
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    double R,r,n,pi;
    int t;
    pi=acos(-1);
    cin>>t;
    for(int i=1; i<=t; i++)
    {


        cin>>R;
        cin>>n;
        r=(R*sin(pi/n)/(1+sin(pi/n)));
        cout<<"Case "<<i<<": "<<fixed<<setprecision(10)<<r<<endl;
    }
}
