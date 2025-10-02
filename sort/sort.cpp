#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <math.h>

#include <string.h>
#include <fstream>

using namespace std;
ifstream cin("sort.INP");
ofstream cout("sort.OUT");
int i,n;

long  a[100001];
long b[100001];
void input()
{
    cin>>n;
    for (i=1;i<=n;i++)
        cin>>a[i];

}
void xep(long a[100001],long i, long j)
{
    long c;
    c=a[i];
    a[i]=a[j];
    a[j]=c;
}
void sortt(long l, long r)
{
    long i,j,x;
    i=l;
    j=r;
    x=a[l+rand()%(r-l+1)];
    while (i<j)
    {
        while (a[i]<x)
            i=i+1;
        while (a[j]>x)
            j=j-1;
        if (i<=j)
        {
            xep(a,i,j);


            i=i+1;
            j=j-1;
        }
    }
    if (i<r)
        sortt (i,r);
    if (l<j)
        sortt (l,j);
}
int output ()
{
    long  i;
    sortt(1,n);
    for (i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
}


int main()
{
    input();
    output();
    return 0;
}
