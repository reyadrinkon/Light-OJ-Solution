/*
Author:Reyad Hasan Rinkon
SUST CSE-2017B
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,i,x,y,AX,AY,BX,BY;
    double O,A,B,arc,ang;

    cin>>T;
    for(i=1;i<=T;i++)
    {
        cin>>x>>y>>AX>>AY>>BX>>BY;

        O=sqrt(((BX-AX)*(BX-AX)) + ((BY-AY)*(BY-AY)));
        A=sqrt(((x-BX)*(x-BX)) + ((y-BY)*(y-BY)));
        B=sqrt(((x-AX)*(x-AX)) + ((y-AY)*(y-AY)));

        ang=acos(((A*A)+(B*B)-(O*O)) / (2.0*A*B));
        arc=A*ang;
        cout<<"Case "<<i<<": ";
        cout << std::fixed;
        cout<<setprecision(2);
        cout <<arc<<endl;
    }
}




