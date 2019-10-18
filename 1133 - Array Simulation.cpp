/*
Author:Reyad Hasan Rinkon
SUST CSE-2017B
*/

#include<bits/stdc++.h>
using namespace std;
int main ()
{

    int T;
    cin>>T;
    for( int i=0; i<T; i++)
    {
        int n,m;
        cin>>n>>m;
        int arr[n];
        for( int j=0; j<n; j++)
        {
            cin>>arr[j];
        }
        for( int j=0; j<m; j++)
        {
            char a;
            cin>>a;
            if(a=='S')
            {
                int x;
                cin>>x;
                for( int k=0; k<n; k++)
                {
                    arr[k]=arr[k]+x;
                }

            }
            else if(a=='M')
            {
                int x;
                cin>>x;
                for( int k=0; k<n; k++)
                {
                    arr[k]=arr[k]*x;
                }


            }
            else if(a=='P')
            {
                int x;
                int y;
                cin>>x>>y;

                swap(arr[x],arr[y]);

            }
            else if(a=='R')
            {
                reverse(arr, arr + n);

            }
            else if(a=='D')
            {
                int x;
                cin>>x;
                for( int k=0; k<n; k++)
                {
                    arr[k]=arr[k]/x;
                }

            }
        }
        cout<<"Case "<<i+1<<":"<<endl;
        for(int l=0; l<n-1; l++)
        {
            cout<<arr[l]<<" ";
        }
        cout<<arr[n-1];
        cout<<endl;

    }
}
