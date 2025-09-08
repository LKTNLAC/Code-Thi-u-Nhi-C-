#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

void input (long long &n)
{
    cin >>n;
}
long long Ans (long long n)
{
    long long a,b,c,d;
    d=n;
    b=0;
    while (n > 0)
    {
        a = n % 10;
        n = n / 10;
        b = b*10+a;
    }
    c = b+d;
    return c;
}
void output (long long c)
{
    cout << setprecision(2) << fixed;
    cout <<c<<endl;
}
int main()
{
    long long n;
    long long c;
    input(n);
    c=Ans(n);
    output(c);
}


