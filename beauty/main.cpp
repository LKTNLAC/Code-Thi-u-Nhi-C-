#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <math.h>

#include <fstream>

using namespace std;
ifstream cin("beauty.inp");
ofstream cout("beauty.out");
long i,n,dem;
void input()
{
    cin>>n;
}
bool sodep(long k)
{
    long a,b,i,kn;
    b=0;
    a=0;
    kn=n;
    while(k>0)
    {
        b=b+(kn%10);
        kn=kn/10;
        k=k/10;
        a=a+1;
    }
    if(b%a==0)return true;
    else return false;
}
void output()
{
    dem=0;
    for(i=1;i<=100000;i++)
    {
        if(sodep(i)==true)
        if(dem==n)
        {
            cout<<i;
            return;
        }
    }
}
int main()

{
    input();
    output();
    return 0;
}
