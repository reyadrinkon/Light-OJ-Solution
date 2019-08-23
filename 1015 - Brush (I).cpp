/*
Author:Reyad Hasan Rinkon
SUST CSE-2017B
*/]
#include<bits/stdc++.h>
using namespace std;
    int main ()
{
int a,tc;
cin>>tc;
for(int i=1; i<=tc; i++)
{
    cin>>a;
    int arr[a];
    int x=0;
    for(int j=0; j<a; j++)
    {
        cin>>arr[j];
        if(arr[j]>0)
        {
            x=x+arr[j];
        }
    }
    cout<<"Case "<<i<<": "<<x<<endl;
}
}

