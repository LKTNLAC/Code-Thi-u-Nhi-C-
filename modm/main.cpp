#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <fstream>
using namespace std;

long long m,n,maxx=0,dem=0,a[1000000];
void input()
{
    long i,j;
    cin>>n>>m;
    for(i=1;i<=n;i++)
        cin>>a[i];
}
void solve()
{
    long i,j;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
           if((a[i]+a[j])%m!=0)
           {
               cout<<2<<endl;
               cout<<i<<" "<<j;
               break;
           }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("modm.inp","r",stdin);
    freopen("modm.out","w",stdout);
    input();
    solve();
    //output();
    return 0;
}
