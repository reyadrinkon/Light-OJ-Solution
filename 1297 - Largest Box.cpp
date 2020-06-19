#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int T;
    cin>>T;
    for( int i=0;i<T;i++)
    {
        double L,W;
        cin>>L>>W;
        double x;
        x = (W+L-sqrt(W*W+L*L-W*L))/6;
        double ans=(W-2*x)*(L-2*x)*x;
        printf("Case %d: %lf\n",i+1,(W-2*x)*(L-2*x)*x);
    }
}
