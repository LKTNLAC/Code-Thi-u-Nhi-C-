#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <math.h>

#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("balloons.INP");
ofstream cout("balloons.OUT");
long n,take,i,j;



void solve()
{
    cin>>n;
    take=0;
    i=1;
    while(n>0)
    {
        take=take+i;
        n=n-take;

        i=i+1;
    }
    cout<<i-1;




}



int main()
{
    solve();
    return 0;
}
