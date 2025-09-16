#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <math.h>

#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("freecash.INP");
ofstream cout("freecash.OUT");
long long n,maxx,h1,m1,i,h2,m2,cash;



void solve()
{
    cin>>n;
    maxx=1;
    h1=100;
    m1=100;
    for(i=1;i<=n;i++)
    {
        cin>>h2>>m2;
        if((h2!=h1)||(m2!=m1)) cash=1;
        else cash=cash+1;
        if (cash>maxx) maxx=cash;
        h1=h2;
        m1=m2;
    }
    cout<<maxx;




}



int main()
{
    solve();
    return 0;
}
