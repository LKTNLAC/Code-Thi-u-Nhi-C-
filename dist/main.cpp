#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <math.h>

#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("dist.INP");
ofstream cout("dist.OUT");
int i;
long long a,b;
void input()
{
    cin>>a;
    cin>>b;
}
void output()
{
    long long dem,dem1;
    int i,c,d,k;
    k=0;
    for (i=1;i<=9;i++)
    {
        c=a%10;
        d=b%10;
        k=k+abs(c-d);
        c=0;
        d=0;
        a=a/10;
        b=b/10;
    }
    cout<<k<<endl;
}
int main()
{
    input();
    output();
    return 0;
}
