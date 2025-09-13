#include <stdlib.h>
#include <iomanip>
#include <math.h>

#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("coins.INP");
ofstream cout("coins.OUT");
long long coins;
long long a[100000],b[100000];
long long n,m;
void input()
{
    long long i,x;
    cin>>n;
    cin>>m;
    for (i=1;i<=n;i++)
        cin>>a[i];
    for (i=1;i<=n;i++)
    {
        cin>>x;
        b[i]=x-a[i];
    }
}
void xep(long long a[100000],long long i, long long j)
{
    long long c;
    c=a[i];
    a[i]=a[j];
    a[j]=c;
}
void sortt(long long l,long long r)
{
    long long i,j,x;
    i=l;
    j=r;
    x=b[l+rand()%(r-l+1)];
    while(i<j)
    {
        while (b[i] < x) i=i+1;
        while (b[j] > x) j=j-1;
        if(i<=j)
        {
            xep(a,i,j);
            xep(b,i,j);
            i=i+1;
            j=j-1;
        }
    }
    if (i<r) sortt(i,r);
    if (l<j) sortt(l,j);
}
void output()
{
    long long dem;
    long long i;
    sortt(1, n);
    coins =m;
    for (i=1;i<=n;i++)
      if (coins >= b[i]) coins = coins+a[i];
    cout<<coins;
}
int main()
{
    input();
    output();
    return 0;
}
