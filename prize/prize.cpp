#include <stdlib.h>
#include <iomanip>
#include <math.h>

#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("prize.INP");
ofstream cout("prize.OUT");
long long a[100000],b[100000];
long long n,i;
void input()
{
    cin>>n;
    for (i=1;i<=n;i++)
        cin>>a[i];
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
    x=a[l+rand()%(r-l+1)];
    while(i<j)
    {
        while (a[i] < x) i=i+1;
        while (a[j] > x) j=j-1;
        if(i<=j)
        {
            xep(a,i,j);
            //xep(b,i,j);
            i=i+1;
            j=j-1;
        }
    }
    if (i<r) sortt(i,r);
    if (l<j) sortt(l,j);
}
void output()
{
    long long tong;
    tong=0;
    sortt(1,n);
    for (i=2;i<=n;i++)
        tong=tong+a[i];
    cout<<tong;
}
int main()
{
    input();
    output();
    return 0;
}
