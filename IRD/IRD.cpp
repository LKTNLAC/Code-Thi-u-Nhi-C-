#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <math.h>

#include <fstream>

using namespace std;
ifstream cin("IRD.inp");
ofstream cout("IRD.out");
long long a,b,c,d,x,y,p,q;
void input()
{
    cin>>a>>b>>c>>d;
}

void output()
{
    long long r;
    p=a*d+b*c;
    q=b*d;
    x=p;y=q;
    while (y>0)
    {
      r=x%y;
      x=y;
      y=r;
    }
    p=p/x;
    q=q/x;
    cout<<p<<" "<<q;
}
int main()

{

    input();
    output();
    return 0;
}
