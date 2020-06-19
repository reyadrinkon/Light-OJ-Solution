#include<bits/stdc++.h>
using namespace std;
int main ()

{

    int T;
    cin>>T;
    for( int i=0;i<T;i++)
    {
        double v1,a1,v2,a2,v3;
        cin>>v1>>v2>>v3>>a1>>a2;
        double t1=(v1/a1);
        double t2=(v2/a2);
        double d1=v1*t1-0.5*a1*t1*t1;
        double d2=v2*t2-0.5*a2*t2*t2;
        double ans=d1+d2;
        double bird=max(t1,t2)*v3;
        //d::cout << std::setprecision(1) <<bird;
        printf("Case %d: %.9lf %.9lf\n",i+1,ans, bird);

    }
}
