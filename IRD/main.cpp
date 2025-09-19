#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <math.h>

#include <fstream>

using namespace std;
ifstream cin("IRD.inp");
ofstream cout("IRD.out");
long a,b,c,d,x,y;
void input()
{
    cin>>a>>b>>c>>d;
}
long ucln(long e, long f)
{
    while (e!=f);
    {
        if(e>f)
            e=e-f;
        else f=f-e;
    }
    return (e);
}
void output()
{
    long j;
    x=a*d+b*c;
    y=b*d;
    j=ucln(x,y);
    x=x/j;
    y=y/j;
    cout<<x<<" "<<y;
}
int main()

{

    input();
    output();
    return 0;
}
