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
        for( int i=1; i<=T; i++)
        {


            long double x;
            cin>>x;
            cout<<"Case "<<i<<": ";
            long double a=(2*x)*(2*x)-2 * acos (0.0)*x*x;
            cout<<setprecision(2)<<fixed;
            cout<<a<<endl;


        }
    }

