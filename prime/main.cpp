
#include <iomanip>
#include <math.h>

#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("prime.INP");
ofstream cout("prime.OUT");
long long n;
void input()
{
    cin>>n;
}
bool nt(long long n)
{
    int i;
    if(n<2) return false;
    for (i=2;i<=trunc(sqrt(n));i++)
        if (n%i==0) return false;
    return true;

}

void output()
{
    if (nt(n)==true) cout<<"yes"<<endl;
    else cout<<"no"<<endl;

}
int main()
{
    input();
    output();
    return 0;
}
