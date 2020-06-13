#include <iostream>
using namespace std;

int main()
{
    int T;
    scanf("%d", &T);
    for( int i=0; i<T; i++)
    {
        int n;
        string s;
        scanf("%d", &n);
        cin>>s;
        if(s=="Alice")
        {
            if(n%3==1)
            {
                cout<<"Case"<<" "<<i+1<<": "<<"Bob"<<endl;
            }
            else
            {
                cout<<"Case"<<" "<<i+1<<": "<<"Alice"<<endl;
            }
        }
        else
        {
            if(n%3==0)
            {
                cout<<"Case"<<" "<<i+1<<": "<<"Alice"<<endl;
            }
            else
            {
                cout<<"Case"<<" "<<i+1<<": "<<"Bob"<<endl;
            }
        }


    }
    return 0;
}
