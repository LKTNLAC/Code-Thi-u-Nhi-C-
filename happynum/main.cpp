
#include <iomanip>
#include <math.h>

#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("happynum.INP");
ofstream cout("happynum.OUT");
long long n;
void input()
{
    cin>>n;
}
bool shp(long long n)
{
    long long s1,s2,r,q;
    r=0;
    s1=0;
    s2=0;
    while (n>0)
    {
       q=n % 10;
       n=n / 10;
       r=r+1;
       if (r<=3)
           s1=s1+q;
       if (r>3)
           s2=s2+q;
    }
    if (r!=6) return false;
    if (s1==s2) return true;
    else return false;
}
void output()
{
    if(shp(n)==true) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}
int main()
{
    input();
    output();
    return 0;
}
