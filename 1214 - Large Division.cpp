#include<bits/stdc++.h>
using namespace std;

int main()

{
    int T,rem;
    cin>>T;
    string st;
    long long int d,temp,k,indx;
    for(int i=1; i<=T; i++)

    {
        cin>>st>>d;

        int l=st.size();

        if(st[0]=='-')
        {
            indx=1;
        }

        else
        {
            indx=0;
        }
        if(d<0)
        {
            d=d*(-1);
        }
        temp=0;
        int count=0;
        for(k=indx; k<l; k++)
        {
            temp=(st[k]-'0')+temp*10;
            temp=temp%d;
        }
        if(temp)
        {
            printf("Case %d: not divisible\n",i);
        }
        else
            printf("Case %d: divisible\n",i);
    }

    return 0;
}
