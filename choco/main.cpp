#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <fstream>
using namespace std;

long m,n,k,luuk;


void input()
{
    long i;
    cin>>k;
    luuk=k;
}
void solve()
{
    long i,dem=0,dientich=1;
    while(dientich<=k)
    {
        dientich=dientich*2;
        dem=dem+1;
    }
    cout<<dientich<<" "<<dem;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    freopen("choco.inp","r",stdin);
    freopen("choco.out","w",stdout);
    input();
    solve();
    return 0;
}
