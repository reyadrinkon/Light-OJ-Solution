
/*
Author:Reyad Hasan Rinkon
SUST CSE-2017B
*/

#include<bits/stdc++.h>
using namespace std;

int NOD(int n)
{
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {

            if (n / i == i)
                cnt++;

            else
                cnt = cnt + 2;
        }
    }
    return cnt;
}

int main ()
{
    int arr[1001];
    vector<int>vt;
    for( int i=1; i<=1000; i++)
    {
        arr[i]=NOD(i);
    }
    for(int i=1; i<=50; i++)
    {
        for( int j=1000; j>=1; j--)
        {
            if(arr[j]==i)
                vt.push_back(j);
        }
    }




    int T;
    cin>>T;
    for( int i=1; i<=T; i++)
    {
        int x;
        cin>>x;
        cout<<"Case "<<i<<": ";
        cout<<vt[x-1]<<endl;

    }
}
