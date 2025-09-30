#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <math.h>

#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("rotate.INP");
ofstream cout("rotate.OUT");
long long a,b,c,d,i,j;
float o[5],maxx;



void solve()
{
    cin>>a>>b>>c>>d;
    o[1]=c/d-a/b;
    o[2]=d/b-c/a;
    o[3]=b/a-d/c;
    o[4]=a/c-b/d;
    maxx=o[4];
    j=0;
    for(i=1;i<=3;i++)
    {
        if (o[i]>maxx)
        {
            maxx=o[i];
            j=i;
        }
    }
        cout<<j;



}



int main()
{
    solve();
    return 0;
}
