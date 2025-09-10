#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <math.h>

#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("calendar.INP");
ofstream cout("calendar.OUT");
long long n,m,w,d,s,k;



void solve()
{
    cin>>w;
    cin>>d>>m;
    s=((m/2)*31+((m-1)/2)*30+d);
    k=((s+(w-1)-1)%7+1);

    cout<<k;




}



int main()
{
    solve();
    return 0;
}
