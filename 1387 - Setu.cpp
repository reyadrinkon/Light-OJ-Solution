
/*
Author:Reyad Hasan Rinkon
SUST CSE-2017B
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{

   int T;
   cin>>T;
   for( int i=1;i<T;i++)
   {
       int sum=0;
       int n;
       cin>>n;
       cout<<"Case "<<i<<": ";
       for( int j=0;j<n;j++)
       {
           string s;
           cin>>s;
           if(s=="donate")
           {
               int x;
               cin>>x;
               sum=sum+x;

           }
           else if (s=="report")
           {
               cout<<sum<<endl;
           }
       }
   }
}




