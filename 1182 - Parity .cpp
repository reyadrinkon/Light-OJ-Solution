    /*
    Author:Reyad Hasan Rinkon
    SUST CSE-2017B
    */

    #include<bits/stdc++.h>
    using namespace std;
    int dtob(long long n)
    {
        int cnt=0;
        while(n!=0)
        {
            if(n%2==0)
            {

                n=n/2;
            }
            else
            {
                cnt++;
                n=n/2;

            }
        }
        return cnt;
    }




    int main ()
    {


        int T;
        cin>>T;
        for( int i=1; i<=T; i++)
        {
            int n;
            cin>>n;
            cout<<"Case "<<i<<": ";
            int x=dtob(n);
            (x%2==0)?cout<<"even":cout<<"odd";
            cout<<endl;


        }
    }

