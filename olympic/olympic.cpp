#include <stdlib.h>
#include <iomanip>
#include <math.h>

#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("olympic.INP");
ofstream cout("olympic.OUT");
long long a[10000000],b[10000000],c;
long long n,i;
void input()
{
    cin>>n>>c;
    for (i=1;i<=n;i++)
        cin>>a[i]>>b[i];
}
void xep(long long a[10000000],long long i, long long j)
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
    long long bai;
    bai=0;
    sortt(1,n);
    for (i=1;i<=n;i++)
        if (c>=a[i])
        {
                bai=bai+1;
                c=c+b[i];
        }
    cout<<bai;
}
int main()
{
    input();
    output();
    return 0;
}
