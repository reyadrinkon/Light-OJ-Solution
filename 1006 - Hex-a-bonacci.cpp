    /*
    Author:Reyad Hasan Rinkon
    SUST CSE-2017B
    */
    #include<bits/stdc++.h>
    using namespace std;
    long long a,b,c,d,e,f,n;
    long long x[100005];
     
    int fn(int n)
    {
        for( int i=0;i<=n;i++)
        {
            if(i==0)
            {
                x[i]=a;
                continue;
            }
            if(i==1)
            {
                x[i]=b;
                continue;
            }
            if(i==2)
            {
                x[i]=c;
                continue;
            }
            if(i==3)
            {
                x[i]=d;
                continue;
            }
            if(i==4)
            {
                x[i]=e;
                continue;
            }
            if(i==5)
            {
                x[i]=f;
                continue;
            }
            x[i]=x[i-1]+x[i-2]+x[i-3]+x[i-4]+x[i-5]+x[i-6];
            x[i]=x[i]%10000007;
        }
        return x[n];
    }
    int main ()
    {
        int T;
        cin>>T;
        for( int i=0;i<T;i++)
        {
            cin>>a>>b>>c>>d>>e>>f>>n;
            long long ans=fn(n);
            ans=ans%10000007;
            cout<<"Case "<<i+1<<": "<<ans<<endl;
     
     
        }
     
     
     
     
       
    }
