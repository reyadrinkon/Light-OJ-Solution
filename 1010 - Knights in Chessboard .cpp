/*
Author:Reyad Hasan Rinkon
SUST CSE-2017B
*/




#include<bits/stdc++.h>

using namespace std;

int calculation(int col,int row)

{
    int temp1;


    temp1=col*row;
    temp1= (temp1/2)+(temp1%2);
    return temp1;
}
int tow(int col,int row)
{
    int temp2,temp3;
    temp2=max(col,row);
    temp3=(temp2/4)*4+min(2,(temp2%4))*2;
    temp3=max(calculation(col,row),temp3);
    return temp3;


}
int main()
{
    int row;
    int col;
    int t;
    int temp;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>row>>col;
        if((row==1)||(col==1))
        {
            temp=max(row,col);
            cout<<"Case "<<i<<": "<<temp<<endl;

        }
        else if((row!=2)&&(col!=2))
        {
            cout<<"Case "<<i<<": "<<calculation(col,row)<<endl;
        }
        else if((row==2)||(col==2))
        {
            cout<<"Case "<<i<<": "<<tow(col,row)<<endl;
        }
    }
}

