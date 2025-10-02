#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <fstream>
using namespace std;

long long m,n,maxk=0,dem=0;
long long k,p,i;
long long s[63];

void input()
{
    long i,j;
    cin>>k>>p;
}
void solve()
{
    s[0]=s[0]&~(1<<i);
    for(i=1;i<=k;i++)
    {
        if (i==1)
            s[i]=s[i]|(1<<i);  // gán 1
        //s[i]=s[i]&~(1<<i);  // gán 0
        if(i>=2)
        {
            s[i]=
        }
    }
}
void output()
{
    for(i=p;i<=p+6;i++)
    cout<<s[i];
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("sevendg.inp","r",stdin);
    freopen("sevendg.out","w",stdout);
    input();
    solve();
    output();
    return 0;
}
