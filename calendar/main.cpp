#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <math.h>

#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("calendar.INP");
ofstream cout("calendar.OUT");
long n,m,w,d;



void solve()
{
    cin>>w;
    cin>>d>>m;
    if(m %2==0)
        n=(m/2-1)*30+m/2*31;
    else n=m/2*30+m/2*31;
    n=(n+d+w)%7-1;

    cout<<n;




}



int main()
{
    solve();
    return 0;
}
