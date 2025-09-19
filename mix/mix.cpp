
#include <iomanip>


#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("mix.INP");
ofstream cout("mix.OUT");
long long x1,y1,z1,x2,y2,z2,x3,y3,z3;
void input()
{
    cin>>x1>>y1>>z1>>x2>>y2>>z2>>x3>>y3>>z3;
}
long long ucln(long long a, long long b)
{
    long long c;
    while(b>0)
    {
        c=a%b;
        a=b;
        b=c;
    }
    return a;
}
long long bcnn(long long a, long long b)
{
   long long c;
   c=a; c=c*b;
   return (c/ucln(a,b));
}
void output()
{
    long long t1,t2,t3,s1,s2,s3,t,p,q,r,s;
    int i;
    s1=x1+y1+z1;
    s2=x2+y2+z2;
    s3=x3+y3+z3;
    s=bcnn(s1,bcnn(s2,s3));
    t=s / s1;x1=x1*t;y1=y1*t;z1=z1*t;
    t=s / s2;x2=x2*t;y2=y2*t;z2=z2*t;
    t=s / s3;x3=x3*t;y3=y3*t;z3=z3*t;
    p=x1+x2+x3;
    q=y1+y2+y3;
    r=z1+z2+z3;
    t=ucln(p,ucln(q,r));
    p=p / t; q=q / t; r=r / t;

    cout<<p<<" "<<q<<" "<<r<<endl;
}
int main()
{
    input();
    output();
    return 0;
}
