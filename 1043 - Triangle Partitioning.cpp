/*
    Author:Reyad Hasan Rinkon
    SUST CSE-2017B
    */

    #include<bits/stdc++.h>
    using namespace std;
    int main ()
    {
        float a,b,c,r,x;
        int T;
        cin>>T;
        for( int i=1; i<=T; i++)
        {
            cout<<"Case "<<i<<": ";
            cin>>a>>b>>c>>r;
            x=sqrt(r/(r+1));
            cout<<fixed<<setprecision(10)<<a*x<<endl;




        }
        return 0;
    }

