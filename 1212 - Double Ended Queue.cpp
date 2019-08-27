/*
Author:Reyad Hasan Rinkon
SUST CSE-2017B
*/


#include<bits/stdc++.h>
#include<deque>
using namespace std;
int main ()
{

    int T;
    cin>>T;

    for( int i=1;i<=T;i++)
    {
        cout<<"Case "<<i<<":"<<endl;
        int cnt=0;
        int n,m,temp;
        string s;
        deque<int>dq;
        cin>>n>>m;
        for( int j=1;j<=m;j++)
        {
            cin>>s;
            if(s=="pushLeft" || s=="pushRight")
            {
                cin>>temp;
                if(dq.size()==n)
                {
                    cout<<"The queue is full"<<endl;
                }
                else
                {
                    cnt++;
                    if(s=="pushLeft")
                    {

                        dq.push_front(temp);
                        cout<<"Pushed in left: "<<temp<<endl;


                    }
                    else if(s=="pushRight")
                    {

                        dq.push_back(temp);
                        cout<<"Pushed in right: "<<temp<<endl;

                    }

                }

            }
            if(s=="popLeft" || s=="popRight")
            {
                if(dq.size()==0)
                {
                    cout<<"The queue is empty"<<endl;
                }
                else
                {
                    if(s=="popLeft")
                    {
                        temp=dq.front();
                        dq.pop_front();
                        cout<<"Popped from left: "<<temp<<endl;
                    }
                    else if (s=="popRight")
                    {
                        temp=dq.back();
                        dq.pop_back();
                        cout<<"Popped from right: "<<temp<<endl;

                    }
                }
            }


        }




    }

}
