#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <math.h>

#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("flowers.INP");
ofstream cout("flowers.OUT");
long i,n,a,b,c,x,y,val,maxx;



void input()
{
    cin>>a;
    cin>>b;
    cin>>c;

}


long output()
{
    maxx=-1;
    for(x=0;x<=c/a;x++)
    {
        y=(c-a*x)/b;
        val=a*x+b*y;
        if(val>maxx) maxx=val;
    }
    cout<<maxx;
}
int main()
{
    input();

    output();
    return 0;
}
