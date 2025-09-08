#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    float a,b,c,s1,s2,min,max;
    cin>>a>>b>>c;
    if ((a>=b) && (b>=c))
    {
        a = 2*a;
        b = 2*b;
        c = 2*c;
    }
    else
    {
        a = fabs(a);
        b = fabs(b);
        c = fabs(c);
    }
    cout<<setprecision(2)<<fixed;
    cout<<a<<" "<<b<<" "<<c;
    return 0;
}


