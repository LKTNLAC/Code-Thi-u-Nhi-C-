#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <math.h>

#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("auction.INP");
ofstream cout("auction.OUT");
long a,b;
long c[10000001];

void input()
{
    cin>>a>>b;

}
void taosangnt()
{
    long i,j;
    for (i=1;i<=10000000;i++)
        c[i]=true;
    c[1]=false;
    for (i=2;i<=10000000;i++)
        if (c[i]==true)
        {
            for (j=i;j<=10000000/i;j++)
                c[i*j]=false;
        }

}
bool sdx( long n)
{
    long m,x,dx;
    m=n;
    dx=0;
    while(m>0)
          {
              x=m%10;
              dx=dx*10+x;
              m=m/10;
          }
    if (dx==n) return true;
            else return false;
}
int output ()
{
    long  i,dem;
    dem=0;
    for (i=a;i<=b;i++)
    {
        if ((c[i]==true)&&(sdx(i) == true))
            dem=dem+1;
    }
    cout<<dem;
}


int main()
{
    input();
    taosangnt();
    output();
    return 0;
}
