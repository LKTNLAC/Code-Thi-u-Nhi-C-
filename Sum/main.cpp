#include <iomanip>
#include <math.h>
#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("sum.INP");
ofstream cout("sum.OUT");
long long a,b,c;
void input()
{
    cin>>a;
    cin>>b;
}
void output()
{
    c=a+b;
    cout<<c<<endl;
}
int main()
{
    input();
    output();
    return 0;
}
