#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <math.h>

#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("alarm.INP");
ofstream cout("alarm.OUT");
long i,n,hh,mm;


long d[]={6,2,5,5,4,5,6,3,7,6};
void input()
{
    cin>>n;
}
long countseg(long n)
{
    long x,y;
    x=n%10;
    y=n/10;
    return(d[x]+d[y]);
}
void findtime(long seg, long &hh, long &mm)
{
    long h,m;
    for (h=0;h<=23;h++)
        for (m=0;m<=59;m++)
        if (countseg(h)+countseg(m)==seg)
            {
                hh=h;
                mm=m;
                return;
            }
    hh=-1;
    mm=-1;
}
long output ()
{

    findtime(n,hh,mm);
    if ((hh!=-1)&&(mm!=-1))
    {
        if(hh<10)
            cout<<"0";
        cout<<hh<<":";
        if(mm<10)
            cout<<"0";
        cout<<mm;
    }
    else cout<<"Impossible";
}


int main()
{
    input();

    output();
    return 0;
}
