#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <fstream>
using namespace std;

long m,n,maxx=0,dem=1,b[10000000],dp[10000000];
long tim(long x)
{
    long i,j,k;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=x;j++)
        {
            for(k=1;k<=x;k++)
            {
                if(k-j>=0)
                    dp[k]+=dp[k-j];
            }
        }
    }
}
void input()
{
    long i,j;
    while (cin>>n)
    {
        long kq;
        dp[0]=1;
        kq=tim(n);

        cout<<kq<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("sum.inp","r",stdin);
    freopen("sum.out","w",stdout);
    input();
    //output();
    return 0;
}
