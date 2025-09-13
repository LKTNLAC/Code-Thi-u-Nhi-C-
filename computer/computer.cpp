#include <stdlib.h>
#include <iomanip>
#include <math.h>

#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("computer.INP");
ofstream cout("computer.OUT");
long long a1,a2,a3,b1,b2,b3,c1,c2,c3,tong,e,d1,d2,d3;
void input()
{
    cin>>a1>>a2>>a3;
    cin>>b1>>b2>>b3;
}
long sortt(long long x, long long y)
{
    long long z;
    if (x>=y)
        z=y;
        else z=x;
    return (z);
}

void output()
{
    long long may,y,z;
    y=0;
    z=0;
    c1=sortt(a1,b1);
    tong=a1+a2+a3;
    c2=sortt(a2,b2);
    d1=abs(a1-b1);
    d2=abs(a2-b2);
    d3=abs(a3-b3);
    may=c1+c2;
    //---------------------------------------------
    if(a1>=b1)
    {
        a1=d1;
        b1=0;
    }
    else
    {
        b1=d1;
        a1=0;
    }
    if(a2>=b2)
    {
        a2=d2;
        b2=0;
    }
    else {
            b2=d2;
            a2=0;
         }

    //---------------------------------------------
        if(a3>=b1)
            {
                a3=a3-b1;
                may=may+b1;
            }else
            {
                may=may+a3;
                a3=0;
            }
            if(a3>=b2)
            {
                a3=a3-b2;
                may=may+b2;
            }else
            {
                may=may+a3;
                a3=0;
            }
        if(b3>=a1)
            {
                b3=b3-a1;
                may=may+a1;
            }else
            {
                may=may+b3;
                b3=0;
            }
            if(b3>=a2)
            {
                b3=b3-a2;
                may=may+a2;
            }else
            {
                may=may+b3;
                b3=0;
            }

    c3=sortt(a3,b3);
    may=may+c3;
    cout<<may;
}
int main()
{
    input();
    output();
    return 0;
}
