
#include <iomanip>
#include <math.h>

#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("perfect.INP");
ofstream cout("perfect.OUT");
long long n;
void input()
{
    cin>>n;
}
bool shh(int k)
{
    int i,s;
    s=1;
    i=2;
    while (i<=sqrt(k))
    {
        if(k%i==0)
            s=s+i+k/i;
        i=i+1;
    }
    if (s==k) return true;
        else return false;
}
void output()
{
    if(shh(n)==true) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}
int main()
{
    input();
    output();
    return 0;
}
