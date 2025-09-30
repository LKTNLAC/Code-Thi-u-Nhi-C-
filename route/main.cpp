#include <stdlib.h>
#include <iomanip>
#include <math.h>

#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("route.INP");
ofstream cout("route.OUT");
long long x1,x2,z,y2,amin,amax,bmin,bmax;
long i,j,k,l;
void input()
{
    cin>>x1>>z>>x2>>y2;
}
void output()
{
    amin=min(x1,x2);
    amax=max(x1,x2);
    bmin=min(z,y2);
    bmax=max(z,y2);
    if (x1<x2)
      for (i=amin+1;i<=amax;i++) cout<<'E';
      else  for (j=amin+1;j<=amax;j++) cout<<'W';
    if (z<y2)
       for (k=bmin+1;k<=bmax;k++) cout<<'N';
       else for (l=bmin+1;l<=bmax;l++) cout<<'S';


}
int main()
{
    input();
    output();
    return 0;
}
