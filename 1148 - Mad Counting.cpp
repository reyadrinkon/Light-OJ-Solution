#include<bits/stdc++.h>
using namespace std;
int main()
{

    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        int n;
        cin>>n;
        int arr[n];
        for( int j=0;j<n;j++)
        {
            cin>>arr[j];
            arr[j]=arr[j]+1;
        }
        sort(arr,arr+n);
        reverse(arr,arr+n);
        int ans=0;
        int count=0;
        while(count<=n)
        {
            ans=ans+arr[count];
            count=count+arr[count];
        }
        cout<<"Case "<<": "<<ans<<endl;



    }
}
