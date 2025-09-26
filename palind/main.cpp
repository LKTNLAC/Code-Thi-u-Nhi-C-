
#include <iomanip>
#include <math.h>

#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("palind.INP");
ofstream cout("palind.OUT");
long long n;
void input()
{
    cin>>n;
}
bool sdx(long long k)
{
    long long m,a,q;
    m=k;
    q=0;
    while (m>0)
    {
        a=m%10;
        q=q*10+a;
        m=m/10;
    }
    if (q==k) return true;
        else return false;
}
void output()
{
    if(sdx(n)==true) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}
int main()
{
    input();
    output();
    return 0;
}
