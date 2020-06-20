#include<bits/stdc++.h>
using namespace std;
int bitod(int n)
{
    int res=0;
    int ind=0;
    while(n!=0)
    {
        res=res+pow(2,ind)*(n%10);
        n=n/10;
        ind++;

    }
    return res;
}
int main ()
{
    int T,da,db,dc,dd,ba,bb,bc,bd;
    scanf("%d",&T);
    for(int  i =0; i<T; i++)
    {
        scanf("%d.%d.%d.%d",&da,&db,&dc,&dd);
        scanf("%d.%d.%d.%d",&ba,&bb,&bc,&bd);

        if(bitod(ba)==da&&bitod(bb)==db&&bitod(bc)==dc&&bitod(bd)==dd)
        {
            printf("Case %d: Yes\n",i+1);
        }
        else
        {
            printf("Case %d: No\n",i+1);
        }

    }
    return 0;


}
